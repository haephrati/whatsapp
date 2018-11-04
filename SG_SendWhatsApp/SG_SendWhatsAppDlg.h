/*@ SendWhatsApp - a WhatsApp message from a C++ desktop applicaiton                       */
/*                                                                          */
/*--------------------------------------------------------------------------*/
/* Written and Designed by Michael Haephrati                                */
/* COPYRIGHT ©2008 by Michael Haephrati    haephrati@gmail.com              */
/* http://michaelhaephrati.com												*/
/* All rights reserved.                                                     */
/* -------------------------------------------------------------------------*/

#pragma once



// CSG_SendWhatsAppDlg dialog
class CSG_SendWhatsAppDlg : public CDialog
{
// Construction
public:
	CSG_SendWhatsAppDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_SG_SendWhatsApp_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedOk();
	CString m_GroupAdmin;
	CString m_GroupName;
	CString m_ClientID;
	CString m_Message;
	CString m_Status;
	afx_msg void OnNMClickSyslink1(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnNMClickSyslink2(NMHDR *pNMHDR, LRESULT *pResult);
	afx_msg void OnBnClickedButton1();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnStnClickedStatus();
	CString m_Secret;
	// 
};

#define APP_SECTION L"SGSendWhatsApp"
#define APP_GROUPADMIN L"GroupAdmin"
#define APP_GROUPNAME L"GroupName"
#define APP_SECRET L"Secret"
#define APP_CLIENTID L"ClientID"

CString ConvertHex(CString Text);