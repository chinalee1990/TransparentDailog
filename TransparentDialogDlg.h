// TransparentDialogDlg.h : header file
//

#if !defined(AFX_TRANSPARENTDIALOGDLG_H__03A210A7_680D_4C2A_821B_B9D2D348B497__INCLUDED_)
#define AFX_TRANSPARENTDIALOGDLG_H__03A210A7_680D_4C2A_821B_B9D2D348B497__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CTransparentDialogDlg dialog

class CTransparentDialogDlg : public CDialog
{
// Construction
public:
	CTransparentDialogDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CTransparentDialogDlg)
	enum { IDD = IDD_TRANSPARENTDIALOG_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTransparentDialogDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CTransparentDialogDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TRANSPARENTDIALOGDLG_H__03A210A7_680D_4C2A_821B_B9D2D348B497__INCLUDED_)
