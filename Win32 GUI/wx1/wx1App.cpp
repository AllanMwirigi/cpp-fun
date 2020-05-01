/***************************************************************
 * Name:      wx1App.cpp
 * Purpose:   Code for Application Class
 * Author:    Allo ()
 * Created:   2016-11-19
 * Copyright: Allo ()
 * License:
 **************************************************************/

#include "wx1App.h"

//(*AppHeaders
#include "wx1Main.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(wx1App);

bool wx1App::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    	wx1Frame* Frame = new wx1Frame(0);
    	Frame->Show();
    	SetTopWindow(Frame);
    }
    //*)
    return wxsOK;
}
