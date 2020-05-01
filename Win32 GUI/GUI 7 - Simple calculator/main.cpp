#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <windows.h>
#include <string>
using namespace std;

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");

HWND textfield1, textfield2, button0, button1, button2, button3, button4, button5, button6, button7, button8, button9,
     buttonEQ, buttonPL, buttonMN, buttonTM, buttonDV;

char arr[10];

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
    wincl.hbrBackground = CreateSolidBrush(RGB(150, 150, 150)); //(HBRUSH) COLOR_BACKGROUND;

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
        return 0;

    /* The class is registered, let's create the program*/
    hwnd = CreateWindowEx (
           0,                   /* Extended possibilites for variation */
           szClassName,         /* Classname */
           _T("Code::Blocks Template Windows App"),       /* Title Text */
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

    switch (message)                  /* handle the messages */
    {
        case WM_CREATE:
            textfield1 = CreateWindow ("EDIT",
                                      "",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      20, 20, 200, 20,
                                      hwnd, NULL, NULL, NULL);

            textfield2 = CreateWindow ("EDIT",
                                      "",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      230, 20, 50, 20,
                                      hwnd, NULL, NULL, NULL);


            button1 = CreateWindow ("BUTTON",
                                      "1",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      20, 50, 30, 20,
                                      hwnd, (HMENU)1, NULL, NULL);

            button2 = CreateWindow ("BUTTON",
                                      "2",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      60, 50, 30, 20,
                                      hwnd, (HMENU)2, NULL, NULL);

            button3 = CreateWindow ("BUTTON",
                                      "3",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      100, 50, 30, 20,
                                      hwnd, (HMENU)3, NULL, NULL);

            button4 = CreateWindow ("BUTTON",
                                      "4",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      20, 100, 30, 20,
                                      hwnd, (HMENU)4, NULL, NULL);

            button5 = CreateWindow ("BUTTON",
                                      "5",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      60, 100, 30, 20,
                                      hwnd, (HMENU)5, NULL, NULL);

            button6 = CreateWindow ("BUTTON",
                                      "6",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      100, 100, 30, 20,
                                      hwnd, (HMENU)6, NULL, NULL);

            button7 = CreateWindow ("BUTTON",
                                      "7",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      20, 150, 30, 20,
                                      hwnd, (HMENU)7, NULL, NULL);

            button8 = CreateWindow ("BUTTON",
                                      "8",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      60, 150, 30, 20,
                                      hwnd, (HMENU)8, NULL, NULL);

            button9 = CreateWindow ("BUTTON",
                                      "9",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      100, 150, 30, 20,
                                      hwnd, (HMENU)9, NULL, NULL);

            button0 = CreateWindow ("BUTTON",
                                      "0",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      20, 200, 30, 20,
                                      hwnd, (HMENU)10, NULL, NULL);

            buttonPL = CreateWindow ("BUTTON",
                                      "+",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      140, 50, 30, 20,
                                      hwnd, (HMENU)11, NULL, NULL);

            buttonMN = CreateWindow ("BUTTON",
                                      "-",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      140, 100, 30, 20,
                                      hwnd, (HMENU)12, NULL, NULL);

            buttonTM = CreateWindow ("BUTTON",
                                      "*",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      140, 150, 30, 20,
                                      hwnd, (HMENU)13, NULL, NULL);

            buttonDV = CreateWindow ("BUTTON",
                                      "/",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      140, 200, 30, 20,
                                      hwnd, (HMENU)14, NULL, NULL);

            buttonEQ = CreateWindow ("BUTTON",
                                      "=",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      100, 200, 30, 20,
                                      hwnd, (HMENU)15, NULL, NULL);
            break;

          case WM_COMMAND:
            switch (LOWORD(wParam))
            {
                case 1:
                    SetWindowText(textfield1, "1");
                    break;

                case 2:
                    SetWindowText(textfield1, "2");
                    break;

                //case 15:
                    //arr[1]
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
