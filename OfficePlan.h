// OfficePlan.h : main header file for the OFFICEPLAN application
//

#if !defined(AFX_OFFICEPLAN_H__FC09C441_905F_45C9_8BF7_59687E570D2B__INCLUDED_)
#define AFX_OFFICEPLAN_H__FC09C441_905F_45C9_8BF7_59687E570D2B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// COfficePlanApp:
// See OfficePlan.cpp for the implementation of this class
//

 
//===========================================================================
// Summary:
//     The COfficePlanApp class derived from CWinApp
//      Office Plan Application
//===========================================================================

class COfficePlanApp : public CWinApp
{
public:
	
	//-----------------------------------------------------------------------
	// Summary:
	// Office Plan Application, Constructs a COfficePlanApp object.
	//		Returns A  value.
	COfficePlanApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COfficePlanApp)
	public:
	
	//-----------------------------------------------------------------------
	// Summary:
	// Initial Instance, Override to perform Windows instance initialization, such as creating your window objects.
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns TRUE on success; FALSE otherwise.
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL
 
	// Document Template, This member maintains a pointer to the object CMultiDocTemplate.  
	CMultiDocTemplate* m_pDocTemplate;
// Implementation
	//{{AFX_MSG(COfficePlanApp)
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Application About, This member function is called by the framework to allow your application to handle a Windows message.

	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
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

#endif // !defined(AFX_OFFICEPLAN_H__FC09C441_905F_45C9_8BF7_59687E570D2B__INCLUDED_)
