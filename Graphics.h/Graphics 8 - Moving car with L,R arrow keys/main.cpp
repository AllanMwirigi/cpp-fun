#include <graphics.h>
#include <windows.h>

int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    DWORD screenWidth=GetSystemMetrics(SM_CXSCREEN);    //NOT ALWAYS NECESSARY
    DWORD screenHeight=GetSystemMetrics(SM_CYSCREEN);   // DEFAULT FULL SCREEN WIDTH USUALLY 1600
    initwindow(screenWidth, screenHeight, "", 10, 10);  //SCREENHEIGHT 900 PIXELS

    int rectPosx=100, cir1Posx=200, cir2Posx=500, speed=10, page=0;;

    while(1)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

        //DRAW CAR
        setcolor(RED);
        for(int i=0; i<=19; i++) //TO THICKEN CAR
            {rectangle(rectPosx-i, 300-i, rectPosx+500+i, 511+i);}
        setcolor(BLUE);
        for(int i=50; i<=59; i++)
        {
            circle(cir1Posx, 600, i);
            circle(cir2Posx, 600, i);
        }
        //DRAW ROAD
        setcolor(GREEN);
        for(int i=670; i<=689; i++) //TO THICKEN ROAD
            line(0, i, screenWidth, i);

        if(GetAsyncKeyState(VK_LEFT))
        {
            rectPosx-=speed;
            cir1Posx-=speed;
            cir2Posx-=speed;
        }
        else if(GetAsyncKeyState(VK_RIGHT))
        {
            rectPosx+=speed;
            cir1Posx+=speed;
            cir2Posx+=speed;
        }
        page=1-page;
        delay(5);
    }

}
