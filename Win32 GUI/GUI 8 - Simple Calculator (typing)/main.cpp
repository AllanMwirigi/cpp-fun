#if defined(UNICODE) && !defined(_UNICODE)
    #define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
    #define UNICODE
#endif

#include <tchar.h>
#include <windows.h>
#include <cstdlib>
#include <cstdio>

/*  Declare Windows procedure  */
LRESULT CALLBACK WindowProcedure (HWND, UINT, WPARAM, LPARAM);

/*  Make the class name into a global variable  */
TCHAR szClassName[ ] = _T("CodeBlocksWindowsApp");
HWND textfield1, textfield2, textfield3, buttonPL, buttonMN, buttonTM, buttonDV;
char arr[10];
char textstored1[10];
char textstored2[10];

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
           _T("Simple Calculator"),       /* Title Text */
           WS_OVERLAPPEDWINDOW, /* default window */
           CW_USEDEFAULT,       /* Windows decides the position */
           CW_USEDEFAULT,       /* where the window ends up on the screen */
           300,                 /* The programs width */
           300,                 /* and height in pixels */
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
                                      20, 20, 50, 20,
                                      hwnd, NULL, NULL, NULL);

            textfield2 = CreateWindow ("EDIT",
                                      "",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      20, 60, 50, 20,
                                      hwnd, NULL, NULL, NULL);

            textfield3 = CreateWindow ("STATIC",
                                      "",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      20, 100, 50, 20,
                                      hwnd, NULL, NULL, NULL);

            buttonPL = CreateWindow ("BUTTON",
                                      "+",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      150, 20, 30, 20,
                                      hwnd, (HMENU)1, NULL, NULL);

            buttonMN = CreateWindow ("BUTTON",
                                      "-",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      150, 60, 30, 20,
                                      hwnd, (HMENU)2, NULL, NULL);

            buttonTM = CreateWindow ("BUTTON",
                                      "*",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      150, 100, 30, 20,
                                      hwnd, (HMENU)3, NULL, NULL);

            buttonDV = CreateWindow ("BUTTON",
                                      "/",
                                      WS_VISIBLE | WS_CHILD | WS_BORDER,
                                      150, 140, 30, 20,
                                      hwnd, (HMENU)4, NULL, NULL);


            break;

        case WM_COMMAND:
            GetWindowText(textfield1, &textstored1[0], 10);
            GetWindowText(textfield2, &textstored2[0], 10);

            switch (LOWORD(wParam))
            {
                case 1:{
                    int result = atoi(textstored1) + atoi(textstored2);
                    sprintf(arr, "%d", result);
                    SetWindowText(textfield3, arr);
                    break;}

                case 2:{
                   int result = atoi(textstored1) - atoi(textstored2);
                    sprintf(arr, "%d", result);
                    SetWindowText(textfield3, arr);
                    break;}

                case 3:{
                    int result = atoi(textstored1) * atoi(textstored2);
                    sprintf(arr, "%d", result);
                    SetWindowText(textfield3, arr);
                    break;}

                case 4:{
                    float result = static_cast<float>(atoi(textstored1)) / static_cast<float>(atoi(textstored2));
                    sprintf(arr, "%f", result);
                    SetWindowText(textfield3, arr);
                    break;}

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
