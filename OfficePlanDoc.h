// OfficePlanDoc.h : interface of the COfficePlanDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_OFFICEPLANDOC_H__C60F61A8_1F56_4BEE_8EB3_9FD37D709D94__INCLUDED_)
#define AFX_OFFICEPLANDOC_H__C60F61A8_1F56_4BEE_8EB3_9FD37D709D94__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

//E-XD++ Library add lines.
#include "ExtTabModelManager.h"	

 
//===========================================================================
// Summary:
//     The COfficePlanDoc class derived from CDocument
//      Office Plan Document
//===========================================================================

class COfficePlanDoc : public CDocument
{
protected: // create from serialization only
	
	//-----------------------------------------------------------------------
	// Summary:
	// Office Plan Document, Constructs a COfficePlanDoc object.
	//		Returns A  value.
	COfficePlanDoc();
	
	//-----------------------------------------------------------------------
	// Summary:
	// E C L A R E_ D Y N C R E A T E, None Description.
	//		Returns A  value.  
	// Parameters:
	//		COfficePlanDoc---Office Plan Document, Specifies a COfficePlanDoc object.
	DECLARE_DYNCREATE(COfficePlanDoc)

// Attributes
public:


	//E-XD++ Library add lines.
 
	// Model Manager, This member maintains a pointer to the object CExtTabModelManager.  
	CExtTabModelManager *m_pModelManager;
 
	// New Document, This member sets TRUE if it is right.  
	BOOL bNewDocument;
 
	// Open Document, This member sets TRUE if it is right.  
	BOOL bOpenDocument;
// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(COfficePlanDoc)
	public:
	
	//-----------------------------------------------------------------------
	// Summary:
	// On New Document, This member function is called by the framework to allow your application to handle a Windows message.
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns TRUE on success; FALSE otherwise.
	virtual BOOL OnNewDocument();
	
	//-----------------------------------------------------------------------
	// Summary:
	// Reads or writes this object from or to an archive.
	// This member function is also a virtual function, you can Override it if you need,  
	// Parameters:
	//		ar---Specifies a CArchive& ar object.
	virtual void Serialize(CArchive& ar);
	//E-XD++ Library add lines.
	
	//-----------------------------------------------------------------------
	// Summary:
	// Delete Contents, Deletes the given object.
	// This member function is also a virtual function, you can Override it if you need,
	virtual void DeleteContents();
	
	//-----------------------------------------------------------------------
	// Summary:
	// Set Modified Flag, Sets a specify value to current class COfficePlanDoc
	// This member function is also a virtual function, you can Override it if you need,  
	// Parameters:
	//		bModified---Modified, Specifies A Boolean value.
	virtual void SetModifiedFlag(BOOL bModified = TRUE);
	
	//-----------------------------------------------------------------------
	// Summary:
	// Is Modified, Determines if the given value is correct or exist.
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns TRUE on success; FALSE otherwise.
	virtual BOOL IsModified();
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Save Document, This member function is called by the framework to allow your application to handle a Windows message.
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns TRUE on success; FALSE otherwise.  
	// Parameters:
	//		lpszPathName---Path Name, Specifies A 32-bit pointer to a constant character string that is portable for Unicode and DBCS.
	virtual BOOL OnSaveDocument(LPCTSTR lpszPathName);
	
	//-----------------------------------------------------------------------
	// Summary:
	// On Open Document, This member function is called by the framework to allow your application to handle a Windows message.
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns TRUE on success; FALSE otherwise.  
	// Parameters:
	//		lpszPathName---Path Name, Specifies A 32-bit pointer to a constant character string that is portable for Unicode and DBCS.
	virtual BOOL OnOpenDocument(LPCTSTR lpszPathName);
	//}}AFX_VIRTUAL

// Implementation
public:
	
	//-----------------------------------------------------------------------
	// Summary:
	// C Office Plan Document, Destructor of class COfficePlanDoc
	// This member function is also a virtual function, you can Override it if you need,  
	//		Returns A  value.
	virtual ~COfficePlanDoc();
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
	//{{AFX_MSG(COfficePlanDoc)
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

#endif // !defined(AFX_OFFICEPLANDOC_H__C60F61A8_1F56_4BEE_8EB3_9FD37D709D94__INCLUDED_)
