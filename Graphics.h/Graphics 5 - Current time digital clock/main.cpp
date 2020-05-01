#include <graphics.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while(1)
    {
    time_t rawtime;
    struct tm *currentTime;
    char a[100];
    rawtime=time(NULL);
    currentTime=localtime(&rawtime);

    setcolor(GREEN);
    settextstyle(BOLD_FONT, HORIZ_DIR, 5);
    strftime(a, 100, "%I:%M:%S", currentTime);
    outtextxy(150, 200, a);
    strftime(a, 100, "%p", currentTime);
    outtextxy(403, 200, a);
    strftime(a, 100, "%a,%d,%b,%Y", currentTime);
    outtextxy(150, 250, a);

    delay(1000);
    cleardevice();
    }
    getch();
    closegraph();
}
