// OfficePlanView.h : interface of the COfficePlanView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_OFFICEPLANVIEW_H__8366A0E8_2136_4F85_A357_C5767D90F849__INCLUDED_)
#define AFX_OFFICEPLANVIEW_H__8366A0E8_2136_4F85_A357_C5767D90F849__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

 
//===========================================================================
// Summary:
//     The COfficePlanView class derived from CFOTabPageView
//      Office Plan View
//===========================================================================

class COfficePlanView : public CFOTabPageView
{
protected: // create from serialization only
	
	//-----------------------------------------------------------------------
	// Summary:
	// Office Plan View, Constructs a COfficePlanView object.
	//		Returns A  value.
	COfficePlanView();
	
	//-----------------------------------------------------------------------
	// Summary:
	// E C L A R E_ D Y N C R E A T E, None Description.
	//		Returns A  value.  
	// Parameters:
	//		COfficePlanView---Office Plan View, Specifies a COfficePlanView object.
	DECLARE_DYNCREATE(COfficePlanView)

// Attributes
public:
	
	//-----------------------------------------------------------------------
	// Summary:
	// Get Document, Returns the specified value.
	//		Returns a pointer to the object COfficePlanDoc,or NULL if the call failed
	COfficePlanDoc* GetDocument();

public:

	// Do model change.
	
	//-----------------------------------------------------------------------
	// Summary:
	// Do Change Model, Do a event. 
	// This member function is also a virtual function, you can Override it if you need,  
	// Parameters:
	//		*pModel---Model, A pointer to the CFODataModel  or NULL if the call failed.
	virtual void	DoChangeModel(
		// Pointer of model.
		CFODataModel *pModel);

	// Init link shape.
	
	//-----------------------------------------------------------------------
	// Summary:
	// Initial Link Shape, Call InitLinkShape after creating a new object.
	// This member function is also a virtual function, you can Override it if you need,
	virtual void InitLinkShape();

// Operations
public:

	// End print preview mode.
	
	//-----------------------------------------------------------------------
	// Summary:
	// On End Print Preview, Called when a print job ends; override to deallocate GDI resources.
	// Parameters:
	//		pDC---D C, A pointer to the CDC or NULL if the call failed.  
	//		pInfo---Information, A pointer to the CPrintInfo or NULL if the call failed.  
	//		pt---Specifies a POINT pt object.  
	//		pView---View, A pointer to the CPreviewView or NULL if the call failed.
	void OnEndPrintPreview(CDC* pDC, CPrintInfo* pInfo,POINT pt, CPreviewView* pView);

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COfficePlanView)
	public:
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Draw, This member function is called by the framework to allow your application to handle a Windows message.
	// This member function is also a virtual function, you can Override it if you need,  
	// Parameters:
	//		pDC---D C, A pointer to the CDC or NULL if the call failed.
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	
	//-----------------------------------------------------------------------
	// Summary:
	// Do Before Create Window, Called before the creation of the Windows window attached to this CWnd object.
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns TRUE on success; FALSE otherwise.  
	// Parameters:
	//		cs---Specifies a CREATESTRUCT& cs object.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Initial Update, This member function is called by the framework to allow your application to handle a Windows message.
	// This member function is also a virtual function, you can Override it if you need,
	virtual void OnInitialUpdate(); // called first time after construct
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Prepare Printing, This member function is called by the framework to allow your application to handle a Windows message.
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns TRUE on success; FALSE otherwise.  
	// Parameters:
	//		pInfo---Information, A pointer to the CPrintInfo or NULL if the call failed.
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Begin Printing, Called when a print job begins; override to allocate graphics device interface (GDI) resources.
	// This member function is also a virtual function, you can Override it if you need,  
	// Parameters:
	//		pDC---D C, A pointer to the CDC or NULL if the call failed.  
	//		pInfo---Information, A pointer to the CPrintInfo or NULL if the call failed.
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	
	//-----------------------------------------------------------------------
	// Summary:
	// On End Printing, Called when a print job ends; override to deallocate GDI resources.
	// This member function is also a virtual function, you can Override it if you need,  
	// Parameters:
	//		pDC---D C, A pointer to the CDC or NULL if the call failed.  
	//		pInfo---Information, A pointer to the CPrintInfo or NULL if the call failed.
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//E-XD++ Library add lines.
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Print, Called to print or preview a page of the document.
	// This member function is also a virtual function, you can Override it if you need,  
	// Parameters:
	//		pDC---D C, A pointer to the CDC or NULL if the call failed.  
	//		pInfo---Information, A pointer to the CPrintInfo or NULL if the call failed.
	virtual void OnPrint(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	
	//-----------------------------------------------------------------------
	// Summary:
	// C Office Plan View, Destructor of class COfficePlanView
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns A  value.
	virtual ~COfficePlanView();
#ifdef _DEBUG
	
	//-----------------------------------------------------------------------
	// Summary:
	// Assert Valid, Assert performs a validity check on this object by checking its internal state.
	// This member function is also a virtual function, you can Override it if you need,
	virtual void AssertValid() const;
	
	//-----------------------------------------------------------------------
	// Summary:
	// Dumps the contents of your object to a CDumpContext object.
	// This member function is also a virtual function, you can Override it if you need,  
	// Parameters:
	//		dc---Specifies a CDumpContext& dc object.
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(COfficePlanView)
	
	//-----------------------------------------------------------------------
	// Summary:
	// On File Print Preview, This member function is called by the framework to allow your application to handle a Windows message.

	afx_msg void OnFilePrintPreview();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	
	//-----------------------------------------------------------------------
	// Summary:
	// E C L A R E_ M E S S A G E_ M A P, None Description.
	//		Returns A  value.
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in OfficePlanView.cpp
inline COfficePlanDoc* COfficePlanView::GetDocument()
   { return (COfficePlanDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_OFFICEPLANVIEW_H__8366A0E8_2136_4F85_A357_C5767D90F849__INCLUDED_)
