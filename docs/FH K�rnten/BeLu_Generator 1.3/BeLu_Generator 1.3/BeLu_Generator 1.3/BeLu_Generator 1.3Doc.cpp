// BeLu_Generator 1.3Doc.cpp : implementation of the CBeLu_Generator13Doc class
//

#include "stdafx.h"
#include "BeLu_Generator 1.3.h"

#include "BeLu_Generator 1.3Doc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CBeLu_Generator13Doc

IMPLEMENT_DYNCREATE(CBeLu_Generator13Doc, CDocument)

BEGIN_MESSAGE_MAP(CBeLu_Generator13Doc, CDocument)
END_MESSAGE_MAP()


// CBeLu_Generator13Doc construction/destruction

CBeLu_Generator13Doc::CBeLu_Generator13Doc()
{
	// TODO: add one-time construction code here

}

CBeLu_Generator13Doc::~CBeLu_Generator13Doc()
{
}

BOOL CBeLu_Generator13Doc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}




// CBeLu_Generator13Doc serialization

void CBeLu_Generator13Doc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}


// CBeLu_Generator13Doc diagnostics

#ifdef _DEBUG
void CBeLu_Generator13Doc::AssertValid() const
{
	CDocument::AssertValid();
}

void CBeLu_Generator13Doc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// CBeLu_Generator13Doc commands
