// ChildFrm.cpp : implementation of the CChildFrame class
//

#include "stdafx.h"
#include "OfficePlan.h"

//E-XD++ Library add lines.
#include "OfficePlanDoc.h"
#include "OfficePlanView.h"
#include "ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CChildFrame

IMPLEMENT_DYNCREATE(CChildFrame, CFOPMDIChildWnd)

BEGIN_MESSAGE_MAP(CChildFrame, CFOPMDIChildWnd)
	//{{AFX_MSG_MAP(CChildFrame)
	// NOTE - the ClassWizard will add and remove mapping macros here.
	//    DO NOT EDIT what you see in these blocks of generated code !
	//E-XD++ Library add lines.
	ON_WM_CREATE()
	//E-XD++ Library add lines.
	ON_COMMAND(ID_FO_ADD_NEWPAGE, OnFoAddNewpage)
	ON_COMMAND(ID_FO_REMOVE_PAGE, OnFoRemovePage)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CChildFrame construction/destruction

CChildFrame::CChildFrame()
{
	// TODO: add member initialization code here
	
}

CChildFrame::~CChildFrame()
{
}

BOOL CChildFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREAFOAPPWIZARDRUCT cs

	if( !CFOPMDIChildWnd::PreCreateWindow(cs) )
		return FALSE;
	//E-XD++ Library add lines.
	cs.style = WS_CHILD | WS_VISIBLE | WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU
		| FWS_ADDTOTITLE | WS_THICKFRAME | WS_MINIMIZEBOX | WS_MAXIMIZEBOX;

	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CChildFrame diagnostics

#ifdef _DEBUG
void CChildFrame::AssertValid() const
{
	CFOPMDIChildWnd::AssertValid();
}

void CChildFrame::Dump(CDumpContext& dc) const
{
	CFOPMDIChildWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CChildFrame message handlers
//E-XD++ add lines.

int CChildFrame::OnCreate(LPCREATESTRUCT LPCREATESTRUCT) 
{
	if (CFOPMDIChildWnd::OnCreate(LPCREATESTRUCT) == -1)
		return -1;

	// TODO: Add your specialized creation code here
	
	return 0;
}

//E-XD++ Library add lines.
void CChildFrame::ActivateFrame(int nCmdShow)
{
	nCmdShow = SW_SHOWMAXIMIZED;
	// TODO: Modify this function to change how the frame is activated.
	CMDIChildWnd::ActivateFrame(nCmdShow);
	COfficePlanDoc* pDoc = (COfficePlanDoc*) GetActiveDocument();

	if(pDoc->bNewDocument)
	{
		pDoc->bNewDocument = FALSE;
	}
	else if(pDoc->bOpenDocument)
	{
		pDoc->bOpenDocument = FALSE;
		for(int x = 1;x < pDoc->m_pModelManager->GetTabCount(); x++)
		{
			CFOTabPageModel *pModel = (CFOTabPageModel *)pDoc->m_pModelManager->m_arTabs[x];
			if(pModel != NULL)
			{
				m_wndTab.InsertPage(pModel,NULL);
			}
		}
		if(pDoc->m_pModelManager->GetTabCount() > 1)
		{
			if(m_wndTab.RemoveTab(0,FALSE))
			{
				pDoc->m_pModelManager->DeleteTab(0);
			}
		}
	}

}

BOOL CChildFrame::OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext) 
{
	// TODO: Add your specialized code here and/or call the base class
	pContext->m_pNewViewClass = RUNTIME_CLASS(COfficePlanView);

	// creates the tab window
	COfficePlanDoc* pDoc = (COfficePlanDoc*) pContext->m_pCurrentDoc;
	CFOTabPageModel *pModel = (CFOTabPageModel *)pDoc->m_pModelManager->InsertTab();
	VERIFY(m_wndTab.Create(this,pDoc->m_pModelManager,pContext));
	// next sheets
	m_wndTab.InsertPage(pModel,pContext);

	return TRUE;
}

void CChildFrame::OnFoAddNewpage() 
{
	// TODO: Add your command handler code here
	COfficePlanDoc* pDoc = (COfficePlanDoc*)GetActiveDocument();
	CFOTabPageModel *pModel = (CFOTabPageModel *)pDoc->m_pModelManager->InsertTab();
	m_wndTab.InsertPage(pModel,NULL);
}

void CChildFrame::OnFoRemovePage() 
{
	// TODO: Add your command handler code here
	COfficePlanDoc* pDoc = (COfficePlanDoc*) GetActiveDocument();
	int nCurrentTab = m_wndTab.GetTabControl()->m_nSelect;
	if(m_wndTab.RemoveTab(nCurrentTab))
	{
		pDoc->m_pModelManager->DeleteTab(nCurrentTab);
	}
}
