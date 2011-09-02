// BeLu_Generator 1.3Doc.h : interface of the CBeLu_Generator13Doc class
//


#pragma once


class CBeLu_Generator13Doc : public CDocument
{
protected: // create from serialization only
	CBeLu_Generator13Doc();
	DECLARE_DYNCREATE(CBeLu_Generator13Doc)

// Attributes
public:

// Operations
public:

// Overrides
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);

// Implementation
public:
	virtual ~CBeLu_Generator13Doc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	DECLARE_MESSAGE_MAP()
};


