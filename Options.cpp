// Options.cpp : implementation file
//

#include "stdafx.h"
#include "SimpleDlg.h"
#include "Options.h"
#include "afxdialogex.h"


// COptions dialog

IMPLEMENT_DYNAMIC(COptions, CDialogEx)

COptions::COptions(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_DIALOG_OPTIONS, pParent)
	, m_text(_T(""))
	, m_bgColor(0)
	, m_x(0)
	, m_y(0)
{

}

COptions::~COptions()
{
}

void COptions::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT_TEXT, m_text);
	DDX_Radio(pDX, IDC_RADIO_RED, m_bgColor);
	DDX_Text(pDX, IDC_EDIT2, m_x);
	DDV_MinMaxInt(pDX, m_x, 0, 9999999);
	DDX_Text(pDX, IDC_EDIT3, m_y);
	DDV_MinMaxInt(pDX, m_y, 0, 9999999);
}


BEGIN_MESSAGE_MAP(COptions, CDialogEx)
END_MESSAGE_MAP()


// COptions message handlers
