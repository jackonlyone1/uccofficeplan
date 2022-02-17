// OfficePlanDoc.cpp : implementation of the COfficePlanDoc class
//

#include "stdafx.h"
#include "OfficePlan.h"

#include "OfficePlanDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// COfficePlanDoc

IMPLEMENT_DYNCREATE(COfficePlanDoc, CDocument)

BEGIN_MESSAGE_MAP(COfficePlanDoc, CDocument)
	//{{AFX_MSG_MAP(COfficePlanDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// COfficePlanDoc construction/destruction

COfficePlanDoc::COfficePlanDoc()
{
	// TODO: add one-time construction code here
	//E-XD++ Library add lines.
	m_pModelManager = new CExtTabModelManager;
	bNewDocument = FALSE;
	bOpenDocument = FALSE;
}

COfficePlanDoc::~COfficePlanDoc()
{
	//E-XD++ Library add lines.
	if(m_pModelManager != NULL)
	{
		delete m_pModelManager;
		m_pModelManager = NULL;
	}
}

BOOL COfficePlanDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// COfficePlanDoc serialization

void COfficePlanDoc::Serialize(CArchive& ar)
{
	//E-XD++ Library add lines.
	m_pModelManager->Serialize(ar);
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}



//E-XD++ Library add lines.
void COfficePlanDoc::SetModifiedFlag(BOOL b)
{
	// Do nothing
	m_pModelManager->SetModifiedFlag(b);
}

//added override
BOOL COfficePlanDoc::IsModified()
{
	return m_pModelManager->IsModified();
}

void COfficePlanDoc::DeleteContents() 
{
	// TODO: Add your specialized code here and/or call the base class
	m_pModelManager->ResetContent();
	CDocument::DeleteContents();
}


BOOL COfficePlanDoc::OnOpenDocument(LPCTSTR lpszPathName) 
{
	bOpenDocument = TRUE;
	if (!CDocument::OnOpenDocument(lpszPathName))
		return FALSE;

	return TRUE;
}

BOOL COfficePlanDoc::OnSaveDocument(LPCTSTR lpszPathName) 
{
	if (CDocument::OnSaveDocument(lpszPathName))
	{
		SetModifiedFlag(FALSE);
		return TRUE;
	}
	return FALSE;
}
/////////////////////////////////////////////////////////////////////////////
// COfficePlanDoc diagnostics

#ifdef _DEBUG
void COfficePlanDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void COfficePlanDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// COfficePlanDoc commands
