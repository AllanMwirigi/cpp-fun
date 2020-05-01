#include <graphics.h>
#include <windows.h>
#include <ctime>

void stickMan(int y)
{
    line(200, 600-y, 250, 500-y);
    line(300, 600-y, 250, 500-y);
    line(250, 500-y, 250, 400-y);
    circle(250, 350-y, 50);
    line(250, 450-y, 300, 470-y);
    line(250, 450-y, 200, 470-y);
}

void obstacles()
{
    //srand(time(0));
    //int ob=1+rand()%5000;

    for(int left=0; left>=0; left++)
    {
        bar(900-left*5, 560, 915-left*5, 600);
        bar(1035-left*5, 560, 1050-left*5, 600);
        bar(1170-left*5, 560, 1185-left*5, 600);
        bar(1305-left*5, 560, 1335-left*5, 600);
        bar(1455-left*5, 560, 1470-left*5, 600);

    }
}

int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    initwindow(1600, 900, "JUMPING MAN", -5, -5);

    int page=0;
    while(1){
    line(0, 600, 1600, 600);
    stickMan(0);
    //void obstacles();
    if(GetAsyncKeyState(VK_UP)){
    for(int y=0, s=150; y<=60, s>=0; y++){
        setactivepage(page);
        setvisualpage(1-page);
         cleardevice();

             line(0, 600, 1600, 600);
            if(y<=30)
            stickMan(y*5);

            if(y>30){
            stickMan(s);
            s-=5;
            }

            page=1-page;
            delay(50);

        }
    }

    }

}
