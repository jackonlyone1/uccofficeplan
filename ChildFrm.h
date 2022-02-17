// ChildFrm.h : interface of the CChildFrame class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHILDFRM_H__49BE2F75_5085_4B5C_B1D3_8B0CBC52D742__INCLUDED_)
#define AFX_CHILDFRM_H__49BE2F75_5085_4B5C_B1D3_8B0CBC52D742__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


 
//===========================================================================
// Summary:
//     The CChildFrame class derived from CFOPMDIChildWnd
//      Child Frame
//===========================================================================

class CChildFrame : public CFOPMDIChildWnd
{
	
	//-----------------------------------------------------------------------
	// Summary:
	// E C L A R E_ D Y N C R E A T E, None Description.
	//		Returns A  value.  
	// Parameters:
	//		CChildFrame---Child Frame, Specifies a CChildFrame object.
	DECLARE_DYNCREATE(CChildFrame)
public:
	
	//-----------------------------------------------------------------------
	// Summary:
	// Child Frame, Constructs a CChildFrame object.
	//		Returns A  value.
	CChildFrame();

// Attributes
public:
 
	// Tab, This member specify E-XD++ CFOMultiPageTabWnd object.  
	CFOMultiPageTabWnd       m_wndTab; 

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChildFrame)
	
	//-----------------------------------------------------------------------
	// Summary:
	// Do Before Create Window, Called before the creation of the Windows window attached to this CWnd object.
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns TRUE on success; FALSE otherwise.  
	// Parameters:
	//		cs---Specifies a CREATESTRUCT& cs object.
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//E-XD++ Library add lines.
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Create Client, Called as a part of window creation.
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns TRUE on success; FALSE otherwise.  
	// Parameters:
	//		lpcs---Specifies a LPCREATESTRUCT lpcs object.  
	//		pContext---Context, A pointer to the CCreateContext or NULL if the call failed.
	virtual BOOL OnCreateClient(LPCREATESTRUCT lpcs, CCreateContext* pContext);
	
	//-----------------------------------------------------------------------
	// Summary:
	// Activate Frame, Activates the specified object.
	// This member function is also a virtual function, you can Override it if you need,  
	// Parameters:
	//		nCmdShow---Cmd Show, Specifies A integer value.
	virtual void ActivateFrame(int nCmdShow);
	//}}AFX_VIRTUAL

// Implementation
public:
	
	//-----------------------------------------------------------------------
	// Summary:
	// C Child Frame, Destructor of class CChildFrame
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns A  value.
	virtual ~CChildFrame();
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

// Generated message map functions
protected:
	//{{AFX_MSG(CChildFrame)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//E-XD++ Library add lines.
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Create, Called as a part of window creation.
	//		Returns a int type value.  
	// Parameters:
	//		LPCREATESTRUCT---P C R E A T E S T R U C T, Specifies a LPCREATESTRUCT LPCREATESTRUCT object.
	afx_msg int OnCreate(LPCREATESTRUCT LPCREATESTRUCT);
	//E-XD++ Library add lines.
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Fo Add Newpage, This member function is called by the framework to allow your application to handle a Windows message.

	afx_msg void OnFoAddNewpage();
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Fo Remove Page, This member function is called by the framework to allow your application to handle a Windows message.

	afx_msg void OnFoRemovePage();
	//}}AFX_MSG
	
	//-----------------------------------------------------------------------
	// Summary:
	// E C L A R E_ M E S S A G E_ M A P, None Description.
	//		Returns A  value.
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHILDFRM_H__49BE2F75_5085_4B5C_B1D3_8B0CBC52D742__INCLUDED_)
