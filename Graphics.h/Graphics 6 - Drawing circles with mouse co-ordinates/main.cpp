#include <windows.h>
#include <graphics.h>

int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN); //GET NORMAL SCREEN
    DWORD screenHeight=GetSystemMetrics(SM_CYSCREEN); //RESOLUTION
    initwindow(screenWidth, screenHeight, "Draw Circle Pattern", -5, -5);//SET GRAPH MODE WIDTH,HEIGHT ETC

    POINT cursorPosition;
    while(1)
    {
        GetCursorPos(&cursorPosition);
        circle(cursorPosition.x, cursorPosition.y, 100);
        delay(100);
        //PRESS ALT+TAB TO SWITCH TO MAIN WINDOW AND CLOSE PROGRAM IF NOT CLOSING
    }


    getch();
    closegraph();
}
