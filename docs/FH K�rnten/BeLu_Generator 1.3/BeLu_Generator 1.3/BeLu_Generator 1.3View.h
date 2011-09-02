// BeLu_Generator 1.3View.h : interface of the CBeLu_Generator13View class
//


#pragma once
#include "atltypes.h"


class CBeLu_Generator13View : public CFormView
{
protected: // create from serialization only
	CBeLu_Generator13View();
	DECLARE_DYNCREATE(CBeLu_Generator13View)

public:
	enum{ IDD = IDD_BELU_GENERATOR13_FORM };

// Attributes
public:
	CBeLu_Generator13Doc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct

// Implementation
public:
	virtual ~CBeLu_Generator13View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
protected:
	virtual void OnDraw(CDC* /*pDC*/);
public:
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
public:
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
public:
	int Counter;
public:
	CPoint Value[540];
public:
	CPoint Point1;
public:
	CPoint Point2;
public:
	CPoint Point0;
public:
	afx_msg void OnBnClickedGenerate();
public:
	afx_msg void OnBnClickedReset();
public:
	afx_msg void OnEnChangeEdit5();
public:
	afx_msg void OnFileSave();
};

#ifndef _DEBUG  // debug version in BeLu_Generator 1.3View.cpp
inline CBeLu_Generator13Doc* CBeLu_Generator13View::GetDocument() const
   { return reinterpret_cast<CBeLu_Generator13Doc*>(m_pDocument); }
#endif

