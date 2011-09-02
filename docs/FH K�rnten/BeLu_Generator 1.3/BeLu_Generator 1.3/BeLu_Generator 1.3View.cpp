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
	ON_WM_MOUSEMOVE()
	ON_WM_LBUTTONDOWN()
	ON_BN_CLICKED(IDC_Generate, &CBeLu_Generator13View::OnBnClickedGenerate)
	ON_BN_CLICKED(IDC_Reset, &CBeLu_Generator13View::OnBnClickedReset)
END_MESSAGE_MAP()

// CBeLu_Generator13View construction/destruction

CBeLu_Generator13View::CBeLu_Generator13View()
	: CFormView(CBeLu_Generator13View::IDD)
	, Counter(0)
	, Point1(0)
	, Point2(0)
	, Point0(0)
{
	// TODO: add construction code here
	for(int j=0;j<540;j++)
	{
		Value[j].x=0;
		Value[j].y=0;
	}

	Point1.x=55;
	Point1.y=15;

	Point2.x=595;
	Point2.y=415;

	Point0.x=55;
	Point0.y=415;

	Value[0].x=Point0.x;
	Value[0].y=Point0.y;
}

CBeLu_Generator13View::~CBeLu_Generator13View()
{
}

void CBeLu_Generator13View::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//DDX_Text(pDX, IDC_EDIT1, OValX);
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

void CBeLu_Generator13View::OnDraw(CDC* pDC)
{
	// TODO: Add your specialized code here and/or call the base class

	CPen myPen(PS_SOLID,2,0x0FFFF50);
	
	CPen meterPen(PS_DASH,1,RGB(255,0,0));
	CPen timePen(PS_DOT,1,RGB(160,80,0));
	
	CPen BlackPen(PS_SOLID,2,RGB(0,0,0));
	CPen whitePen(PS_SOLID,1,RGB(255,255,255));
	CPen BluePen(PS_SOLID,2,RGB(0,0,255));
	

	// Koordinatensystem
		//Achsen
		pDC->SelectObject (whitePen);
		pDC->Rectangle(Point1.x,Point1.y,Point2.x,Point2.y);
	
		pDC->SelectObject (BlackPen);
		pDC->MoveTo(Point1.x,Point1.y);
		pDC->LineTo(Point0.x,Point0.y);
		pDC->LineTo(Point2.x,Point2.y);

		//PFEILE
		pDC->MoveTo(Point1.x-5,Point1.y);
		pDC->LineTo(Point1.x+5,Point1.y);
		pDC->LineTo(Point1.x,Point1.y-10);
		pDC->LineTo(Point1.x-5,Point1.y);

		pDC->MoveTo(Point2.x,Point2.y-5);
		pDC->LineTo(Point2.x,Point2.y+5);
		pDC->LineTo(Point2.x+10,Point2.y);
		pDC->LineTo(Point2.x,Point2.y-5);
				
		//Meter Linien + Beschriftung
		pDC->SelectObject(meterPen);
		
		for(int i=1;i<=4;i++)
		{
			CString POS;
			POS.Format("%d",(i*1000));
			
			pDC->MoveTo(Point0.x,Point0.y-(i*100));
			pDC->LineTo(Point2.x,Point2.y-(i*100));
			pDC->TextOutA(Point0.x-50,Point2.y-5-(i*100),POS);

			pDC->TextOutA(Point0.x-15,Point2.y-5-(i*100),"m");
		}

		//Zeit Linien + Beschriftung
		pDC->SelectObject(timePen);
		for(int i=0;i<9;i++)
		{
			CString POS;
			POS.Format("%d",(540-(i*60)));
			
			pDC->MoveTo(Point2.x-(i*60),Point2.y);
			pDC->LineTo(Point2.x-(i*60),Point1.y);
			pDC->TextOutA(Point2.x-15-(i*60),Point2.y+20,POS);
			
			pDC->TextOutA(Point2.x-15-(i*60),Point2.y+35,"min");
		}
		
	pDC->SelectObject(BluePen);
		
		pDC->MoveTo(Point0.x,Point0.y);
		for(int i=0;i<=Counter;i++)
		{
			pDC->LineTo(Value[i].x,Value[i].y);
		}
	
	//Anzeige letzter Wert (Umrechnung hinzufügen)
	
	CString LValX;
	CString LValY;

	LValX.Format("%d",(Value[Counter].x-55));
	SetDlgItemText ( IDC_EDIT3 , LValX);

	LValY.Format("%d",((Value[Counter].y-15)*-10)+4000);
	SetDlgItemText ( IDC_EDIT4 , LValY);
}

void CBeLu_Generator13View::OnMouseMove(UINT nFlags, CPoint point)
{
	
	if(point.x>=Point0.x && point.x<=Point2.x && point.y<=Point0.y && point.y>=Point1.y)
	{
		CString OValX, OValY ,DValX ,DValY;

		OValX.Format("%d",point.x-55);
		SetDlgItemText ( IDC_EDIT1 , OValX);

		OValY.Format("%d",((point.y-15)*-10)+4000);
		SetDlgItemText ( IDC_EDIT2 , OValY);

		DValX.Format("%d",point.x-Value[Counter].x);
		SetDlgItemText ( IDC_EDIT5 , DValX);

		DValY.Format("%d",(point.y-Value[Counter].y)*-10);
		SetDlgItemText ( IDC_EDIT6 , DValY);
	}
	
	CFormView::OnMouseMove(nFlags, point);
}

void CBeLu_Generator13View::OnLButtonDown(UINT nFlags, CPoint point)
{
	// TODO: Add your message handler code here and/or call default
	if(point.x>=Point0.x && point.x<=Point2.x && point.y<=Point0.y && point.y>=Point1.y && point.x>Value[Counter].x)
	{
		Counter++;
		
		Value[Counter].x=point.x;
		Value[Counter].y=point.y;
				
		Invalidate();
	}
	CFormView::OnLButtonDown(nFlags, point);
}

void CBeLu_Generator13View::OnBnClickedGenerate()
{
	// TODO: Add your command handler code here
	
	double temp=0;
	CString WFile;
	
	CFileDialog dlg(FALSE,"hypox",NULL,NULL,"hypox"); //Schreiben
	//bak CFileDialog dlg(FALSE,"txt",); //Schreiben
	
	
	if( dlg.DoModal() == IDOK )
	{
	/* //Speichert die Punkte allein in die Datei
	FILE* DataA;
	DataA = fopen(dlg.GetFileName(),"w");
		for(int i=0;i<=Counter;i++)
		{
			temp=(Value[i].x-55);
			WFile.Format("%f",temp);
			fprintf(DataA,WFile);
			fprintf(DataA,"\t");

			temp=(Value[i].y-15)*-10+4000;
			WFile.Format("%f",temp);
			fprintf(DataA,WFile);
			fprintf(DataA,"\n");
		}

	fclose(DataA);
	*/
	//Speichert alle Punkte (interpolierte dazu)
	FILE* DataB;
	DataB = fopen(dlg.GetFileName(),"w");
	for(int j=0;j<=Counter;j++)
	{
	
		int width=Value[j+1].x-Value[j].x;
		double gradient =(double(Value[j+1].y-Value[j].y)/(Value[j+1].x-Value[j].x));

		for(int i=0;i<=width;i++)
		{
			temp=(Value[j].x-55)+i;
			WFile.Format("%f",temp);
			fprintf(DataB,WFile);
			fprintf(DataB,"\t");
		
			temp=(((Value[j].y-15)+(i*gradient))*-10+4000);
			WFile.Format("%f",temp);
			fprintf(DataB,WFile);
			fprintf(DataB,"\n");
			}
		}
		fclose(DataB);
	}
	else
		return;
}

void CBeLu_Generator13View::OnBnClickedReset()
{
	// TODO: Add your control notification handler code here
	Counter=0;
	Invalidate();
}