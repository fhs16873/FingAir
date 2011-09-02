// BeLu_Generator 1.3.h : main header file for the BeLu_Generator 1.3 application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CBeLu_Generator13App:
// See BeLu_Generator 1.3.cpp for the implementation of this class
//

class CBeLu_Generator13App : public CWinApp
{
public:
	CBeLu_Generator13App();


// Overrides
public:
	virtual BOOL InitInstance();

// Implementation
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CBeLu_Generator13App theApp;