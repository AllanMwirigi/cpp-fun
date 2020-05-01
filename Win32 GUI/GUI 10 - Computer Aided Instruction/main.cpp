#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <windows.h>
#include <ctime>
#include <cstdio>
#include <cstdlib>

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");
HWND  textfield1, textfield2, button, textfield3;
char arr1[]="Welcome to the Computer Aided Instruction Program. This program will help you test and improve your skills in arithmetic. Press next to continue";
char arr2[10];
char textstored[5];
char text3[]= "Correct. Good Work";

int WINAPI WinMain (HINSTANCE hThisInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR lpszArgument,
                     int nCmdShow)
{
    HWND hwnd;               /* This is the handle for our window */
    MSG messages;            /* Here messages to the application are saved */
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

    /* The Window structure */
    wincl.hInstance = hThisInstance;
    wincl.lpszClassName = szClassName;
    wincl.lpfnWndProc = WindowProcedure;      /* This function is called by windows */
    wincl.style = CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize = sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm = LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor = LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName = NULL;                 /* No menu */
    wincl.cbClsExtra = 0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra = 0;                      /* structure or the window instance */
    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("Computer Aided Instruction"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           544,                 /* The programs width */
           375,                 /* and height in pixels */
           HWND_DESKTOP,        /* The window is a child-window to desktop */
           NULL,                /* No menu */
           hThisInstance,       /* Program Instance handler */
           NULL                 /* No Window Creation data */
           );

    /* Make the window visible on the screen */
    ShowWindow (hwnd, nCmdShow);

    /* Run the message loop. It will run until GetMessage() returns 0 */
    while (GetMessage (&messages, NULL, 0, 0))
    {
        /* Translate virtual-key messages into character messages */
        TranslateMessage(&messages);
        /* Send message to WindowProcedure */
        DispatchMessage(&messages);
    }

    /* The program return-value is 0 - The value that PostQuitMessage() gave */
    return messages.wParam;
}


/*  This function is called by the Windows function DispatchMessage()  */

LRESULT CALLBACK WindowProcedure (HWND hwnd, UINT message, WPARAM wParam, LPARAM lParam)
{
    //HFONT hf;
    HDC hdc;
    RECT rc;
    //HGDIOBJ g_hfFont;
    //long lfHeight;

    hdc = GetDC(hwnd);
    /*lfHeight = -MulDiv(12, GetDeviceCaps(hdc, LOGPIXELSY), 72);
    ReleaseDC(hwnd, hdc);

    hf = CreateFont(lfHeight, 0, 0, 0, 0, TRUE, 0, 0, 0, 0, 0, 0, 0, "Times New Roman");
    if(hf)
    {
        DeleteObject(g_hfFont);
        g_hfFont = hf;
    }
    else{
        MessageBox(hwnd, "Font creation failed!", "Error", MB_OK | MB_ICONEXCLAMATION);
    }*/
    SetBkMode(hdc, TRANSPARENT);
    GetClientRect(hwnd, &rc);
    DrawText(hdc, arr1, -1, &rc, DT_CENTER | DT_END_ELLIPSIS | DT_WORDBREAK);

   srand(time(NULL));
    int a = 1+rand()%9;
    int b = 9-rand()%8;
    int result = a+b;
    sprintf(arr2, "What is %d + %d ?", a, b);


    switch (message)                  /* handle the messages */
    {
          case WM_CREATE:
              button = CreateWindow("BUTTON",
                                      "NEW",
                                      WS_VISIBLE | WS_CHILD| WS_BORDER,
                                      300, 50, 70, 30,
                                      hwnd, (HMENU)1, NULL, NULL);

             button = CreateWindow("BUTTON",
                                      "SUBMIT",
                                      WS_VISIBLE | WS_CHILD| WS_BORDER,
                                      300, 200, 70, 30,
                                      hwnd, (HMENU)2, NULL, NULL);


            textfield1 = CreateWindow("STATIC",
                                      "",
                                      WS_VISIBLE | WS_CHILD| WS_BORDER,
                                      50, 50, 150, 30,
                                      hwnd, NULL, NULL, NULL);

            textfield2 = CreateWindow("EDIT",
                                      "",
                                      WS_VISIBLE | WS_CHILD| WS_BORDER,
                                      50, 100, 150, 30,
                                      hwnd, NULL, NULL, NULL);

            textfield3 = CreateWindow("STATIC",
                                      "",
                                      WS_VISIBLE | WS_CHILD| WS_BORDER,
                                      50, 150, 200, 30,
                                      hwnd, NULL, NULL, NULL);
            break;

        case WM_COMMAND:{

            switch(LOWORD(wParam))
            {
                case 1:{
                SetWindowText(textfield1, arr2);
                SetWindowText(textfield2, "");
                SetWindowText(textfield3, "");
                }
                break;

                case 2:{
                GetWindowText(textfield2, &textstored[0], -1);
                if(atoi(textstored) == result)
                    SetWindowText(textfield3, "Correct");
                if(atoi(textstored) != result)
                    SetWindowText(textfield3, "Incorrect!");
                }
                break;
            }
        }
            break;

        case WM_DESTROY:
            PostQuitMessage (0);       /* send a WM_QUIT to the message queue */
            break;
        default:                      /* for messages that we don't deal with */
            return DefWindowProc (hwnd, message, wParam, lParam);
    }

    return 0;
}
