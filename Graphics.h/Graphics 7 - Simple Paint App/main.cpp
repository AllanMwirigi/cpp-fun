#include <graphics.h>
#include <windows.h>

int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN);
    DWORD screenHeight=GetSystemMetrics(SM_CYSCREEN);
    initwindow(screenWidth, screenHeight, "SIMPLE PAINT APP", -5, -5);

    POINT cursorPosition;
    settextstyle(8, HORIZ_DIR, 4);
    outtextxy(400,320, "SELECT COLOUR TO USE");
    outtextxy(420,360, "PRESS 1 FOR WHITE");
    outtextxy(420,400, "PRESS 2 FOR BLUE");
    outtextxy(420,440, "PRESS 3 FOR RED");
    outtextxy(420,480, "PRESS 4 FOR GREEN");
    outtextxy(420,520, "PRESS 5 FOR PURPLE");

    if(GetAsyncKeyState(VK_NUMPAD1))
        setcolor(1);
    if(GetAsyncKeyState(VK_NUMPAD2))
        setcolor(BLUE);
    if(GetAsyncKeyState(VK_NUMPAD3))
        setcolor(RED);
    if(GetAsyncKeyState(VK_NUMPAD4))
        setcolor(GREEN);
    if(GetAsyncKeyState(VK_NUMPAD5))
        setcolor(MAGENTA);
    getch();
    cleardevice();

        while(1){

        //setcolor(WHITE);
        GetCursorPos(&cursorPosition);
        if(GetAsyncKeyState(VK_DELETE))
            cleardevice();
        if(GetAsyncKeyState(VK_LBUTTON))
        {bar(cursorPosition.x, cursorPosition.y, cursorPosition.x+10, cursorPosition.y+10);

        delay(5);}
    }


    getch();
    closegraph();
}
