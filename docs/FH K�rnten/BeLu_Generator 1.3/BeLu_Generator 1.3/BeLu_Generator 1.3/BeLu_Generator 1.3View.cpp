// BeLu_Generator 1.3View.cpp : implementation of the CBeLu_Generator13View class
//

#include "stdafx.h"
#include "BeLu_Generator 1.3.h"

#include "BeLu_Generator 1.3Doc.h"
#include "BeLu_Generator 1.3View.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBeLu_Generator13View

IMPLEMENT_DYNCREATE(CBeLu_Generator13View, CFormView)

BEGIN_MESSAGE_MAP(CBeLu_Generator13View, CFormView)
	ON_STN_CLICKED(IDB_KOSY, &CBeLu_Generator13View::OnStnClickedKosy)
	ON_BN_CLICKED(IDC_BUTTON2, &CBeLu_Generator13View::OnBnClickedButton2)
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
END_MESSAGE_MAP()

// CBeLu_Generator13View construction/destruction

CBeLu_Generator13View::CBeLu_Generator13View()
	: CFormView(CBeLu_Generator13View::IDD)
	, OValX(_T(""))
{
	// TODO: add construction code here

}

CBeLu_Generator13View::~CBeLu_Generator13View()
{
}

void CBeLu_Generator13View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT1, OValX);
}

BOOL CBeLu_Generator13View::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CFormView::PreCreateWindow(cs);
}

void CBeLu_Generator13View::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}


// CBeLu_Generator13View diagnostics

#ifdef _DEBUG
void CBeLu_Generator13View::AssertValid() const
{
	CFormView::AssertValid();
}

void CBeLu_Generator13View::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CBeLu_Generator13Doc* CBeLu_Generator13View::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CBeLu_Generator13Doc)));
	return (CBeLu_Generator13Doc*)m_pDocument;
}
#endif //_DEBUG


// CBeLu_Generator13View message handlers

void CBeLu_Generator13View::OnStnClickedKosy()
{
	// TODO: Add your control notification handler code here
}

void CBeLu_Generator13View::OnBnClickedButton2()
{
	// TODO: Add your control notification handler code here
}

void CBeLu_Generator13View::OnDraw(CDC* /*pDC*/)
{
	// TODO: Add your specialized code here and/or call the base class
}

void CBeLu_Generator13View::OnMouseMove(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	//Invalidate();
	//OValX=CString
	//OValX="asdasd";//Format("%f",point.x);
	//UpdateData(TRUE);
	OValX.SetString("abcd",88);
	
	CFormView::OnMouseMove(nFlags, point);
}

void CBeLu_Generator13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	Invalidate();
	CFormView::OnLButtonDown(nFlags, point);
}
