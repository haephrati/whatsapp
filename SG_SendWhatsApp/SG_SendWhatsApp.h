/*@ SendWhatsApp - Send a WhatsApp message from a C++ desktop applicaiton                       */
/*                                                                          */
/*--------------------------------------------------------------------------*/
/* Written and Designed by Michael Haephrati                                */
/* COPYRIGHT ©2008 by Michael Haephrati    haephrati@gmail.com              */
/* http://michaelhaephrati.com												*/
/* All rights reserved.                                                     */
/* -------------------------------------------------------------------------*/

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CSG_SendWhatsAppApp:
// See SG_SendWhatsApp.cpp for the implementation of this class
//

class CSG_SendWhatsAppApp : public CWinApp
{
public:
	CSG_SendWhatsAppApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CSG_SendWhatsAppApp theApp;