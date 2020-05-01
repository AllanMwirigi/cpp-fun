/***************************************************************
 * Name:      wx1Main.h
 * Purpose:   Defines Application Frame
 * Author:    Allo ()
 * Created:   2016-11-19
 * Copyright: Allo ()
 * License:
 **************************************************************/

#ifndef WX1MAIN_H
#define WX1MAIN_H

//(*Headers(wx1Frame)
#include <wx/menu.h>
#include <wx/frame.h>
#include <wx/statusbr.h>
//*)

class wx1Frame: public wxFrame
{
    public:

        wx1Frame(wxWindow* parent,wxWindowID id = -1);
        virtual ~wx1Frame();

    private:

        //(*Handlers(wx1Frame)
        void OnQuit(wxCommandEvent& event);
        void OnAbout(wxCommandEvent& event);
        //*)

        //(*Identifiers(wx1Frame)
        static const long idMenuQuit;
        static const long idMenuAbout;
        static const long ID_STATUSBAR1;
        //*)

        //(*Declarations(wx1Frame)
        wxStatusBar* StatusBar1;
        //*)

        DECLARE_EVENT_TABLE()
};

#endif // WX1MAIN_H
