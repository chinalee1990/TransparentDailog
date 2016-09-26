// TransparentDialog.h : main header file for the TRANSPARENTDIALOG application
//

#if !defined(AFX_TRANSPARENTDIALOG_H__C1F2DF3D_D4F8_4C54_BCF2_49D66A3FF44E__INCLUDED_)
#define AFX_TRANSPARENTDIALOG_H__C1F2DF3D_D4F8_4C54_BCF2_49D66A3FF44E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTransparentDialogApp:
// See TransparentDialog.cpp for the implementation of this class
//

class CTransparentDialogApp : public CWinApp
{
public:
	CTransparentDialogApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTransparentDialogApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTransparentDialogApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANSPARENTDIALOG_H__C1F2DF3D_D4F8_4C54_BCF2_49D66A3FF44E__INCLUDED_)
