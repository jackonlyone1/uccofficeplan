// OfficePlanView.cpp : implementation of the COfficePlanView class
//

#include "stdafx.h"
#include "OfficePlan.h"

#include "OfficePlanDoc.h"
#include "OfficePlanView.h"
#include "ChildFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COfficePlanView

IMPLEMENT_DYNCREATE(COfficePlanView, CFOTabPageView)
BEGIN_MESSAGE_MAP(COfficePlanView,CFOTabPageView)
	//{{AFX_MSG_MAP(COfficePlanView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, OnFilePrintPreview)
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_FILE_PRINT, CFOTabPageView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CFOTabPageView::OnFilePrint)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COfficePlanView construction/destruction

COfficePlanView::COfficePlanView()
{
	// TODO: add construction code here
}

COfficePlanView::~COfficePlanView()
{
}

BOOL COfficePlanView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREAFOAPPWIZARDRUCT cs

	return CFOTabPageView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// COfficePlanView drawing

void COfficePlanView::OnDraw(CDC* pDC)
{
	COfficePlanDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	Draw(pDC);
	// TODO: add draw code for native data here
}

void COfficePlanView::InitLinkShape()
{
	m_drawshape = FO_COMP_UPRIGHTLINK;
	m_bUpRightMode = FALSE;
	SetCurrentDrawingCursor(IDC_FO_DRAWLINK_CURSOR);
}

void COfficePlanView::DoChangeModel(CFODataModel * pModel)
{
	CFODrawView::DoChangeModel(pModel);
	GetCurrentModel()->SetGridLineType(GRID_DOT);
	GetCurrentModel()->SetGridColor(RGB(0,0,0));
}

void COfficePlanView::OnInitialUpdate()
{
	CFOTabPageView::OnInitialUpdate();

}

/////////////////////////////////////////////////////////////////////////////
// COfficePlanView printing

BOOL COfficePlanView::OnPreparePrinting(CPrintInfo* pInfo)
{

	// default preparation
	return CFOTabPageView::OnPreparePrinting(pInfo);

}

void COfficePlanView::OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo)
{
	// TODO: add extra initialization before printing
	// E-XD++ Library Add line.
	CFOTabPageView::OnBeginPrinting(pDC,pInfo);
}

void COfficePlanView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void COfficePlanView::OnFilePrintPreview() 
{
	FOPrintPreview(this);
}

void COfficePlanView::OnEndPrintPreview(CDC* pDC, CPrintInfo* pInfo,
							  POINT pt, CPreviewView* pView) 
{
	CScrollView::OnEndPrintPreview(pDC, pInfo,pt, pView); 

}

/////////////////////////////////////////////////////////////////////////////
// COfficePlanView diagnostics

#ifdef _DEBUG
void COfficePlanView::AssertValid() const
{


//E-XD++ Library add lines.
	CFOTabPageView::AssertValid();
	//CView::AssertValid();
}

void COfficePlanView::Dump(CDumpContext& dc) const
{


//E-XD++ Library add lines.
	CFOTabPageView::Dump(dc);
	//CView::Dump(dc);
}

COfficePlanDoc* COfficePlanView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COfficePlanDoc)));
	return (COfficePlanDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// COfficePlanView message handlers
//E-XD++ Library add line.
void COfficePlanView::OnPrint(CDC* pDC, CPrintInfo* pInfo) 
{
	//CView::OnPrint(pDC, pInfo);
	//E-XD++ Library Add line.
	CFOTabPageView::OnPrint(pDC,pInfo);
}

