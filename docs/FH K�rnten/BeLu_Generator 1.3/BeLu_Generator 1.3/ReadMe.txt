================================================================================
    MICROSOFT FOUNDATION CLASS LIBRARY : BeLu_Generator 1.3 Project Overview
===============================================================================

The application wizard has created this BeLu_Generator 1.3 application for 
you.  This application not only demonstrates the basics of using the Microsoft 
Foundation Classes but is also a starting point for writing your application.

This file contains a summary of what you will find in each of the files that
make up your BeLu_Generator 1.3 application.

BeLu_Generator 1.3.vcproj
    This is the main project file for VC++ projects generated using an application wizard. 
    It contains information about the version of Visual C++ that generated the file, and 
    information about the platforms, configurations, and project features selected with the
    application wizard.

BeLu_Generator 1.3.h
    This is the main header file for the application.  It includes other
    project specific headers (including Resource.h) and declares the
    CBeLu_Generator13App application class.

BeLu_Generator 1.3.cpp
    This is the main application source file that contains the application
    class CBeLu_Generator13App.

BeLu_Generator 1.3.rc
    This is a listing of all of the Microsoft Windows resources that the
    program uses.  It includes the icons, bitmaps, and cursors that are stored
    in the RES subdirectory.  This file can be directly edited in Microsoft
    Visual C++. Your project resources are in 1033.

res\BeLu_Generator 1.3.ico
    This is an icon file, which is used as the application's icon.  This
    icon is included by the main resource file BeLu_Generator 1.3.rc.

res\BeLu_Generator13.rc2
    This file contains resources that are not edited by Microsoft 
    Visual C++. You should place all resources not editable by
    the resource editor in this file.

/////////////////////////////////////////////////////////////////////////////

For the main frame window:
    The project includes a standard MFC interface.

MainFrm.h, MainFrm.cpp
    These files contain the frame class CMainFrame, which is derived from
    CFrameWnd and controls all SDI frame features.

/////////////////////////////////////////////////////////////////////////////

The application wizard creates one document type and one view:

BeLu_Generator 1.3Doc.h, BeLu_Generator 1.3Doc.cpp - the document
    These files contain your CBeLu_Generator13Doc class.  Edit these files to
    add your special document data and to implement file saving and loading
    (via CBeLu_Generator13Doc::Serialize).

BeLu_Generator 1.3View.h, BeLu_Generator 1.3View.cpp - the view of the document
    These files contain your CBeLu_Generator13View class.
    CBeLu_Generator13View objects are used to view CBeLu_Generator13Doc objects.





/////////////////////////////////////////////////////////////////////////////

Other Features:

ActiveX Controls
    The application includes support to use ActiveX controls.

/////////////////////////////////////////////////////////////////////////////

Other standard files:

StdAfx.h, StdAfx.cpp
    These files are used to build a precompiled header (PCH) file
    named BeLu_Generator 1.3.pch and a precompiled types file named StdAfx.obj.

Resource.h
    This is the standard header file, which defines new resource IDs.
    Microsoft Visual C++ reads and updates this file.

BeLu_Generator 1.3.manifest
	Application manifest files are used by Windows XP to describe an applications 
	dependency on specific versions of Side-by-Side assemblies. The loader uses this 
	information to load the appropriate assembly from the assembly cache or private 
	from the application. The Application manifest  maybe included for redistribution 
	as an external .manifest file that is installed in the same folder as the application 
	executable or it may be included in the executable in the form of a resource. 
/////////////////////////////////////////////////////////////////////////////

Other notes:

The application wizard uses "TODO:" to indicate parts of the source code you
should add to or customize.

If your application uses MFC in a shared DLL, you will need 
to redistribute the MFC DLLs. If your application is in a language 
other than the operating system's locale, you will also have to 
redistribute the corresponding localized resources MFC80XXX.DLL. 
For more information on both of these topics, please see the section on 
redistributing Visual C++ applications in MSDN documentation. 

/////////////////////////////////////////////////////////////////////////////
