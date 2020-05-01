#include <graphics.h>
#include <stdio.h>
using namespace std;

int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    setcolor(GREEN);
    settextstyle(3, HORIZ_DIR, 2);
    outtextxy(200, 200, "Press any key to start the clock.");
    getch();
    delay(10);
    cleardevice();
    char arr[10];

    for(int H=0, M=0, S=0; S>=0; S++)
    {
        if(S<10)
        sprintf(arr,"%d:%d:0%d",H,M,S);
        if(M<10)
            sprintf(arr,"%d:0%d:%d",H,M,S);
        if(M<10&&S<10)
            sprintf(arr,"%d:0%d:0%d",H,M,S);
        if(M>=10&&S>=10)
            sprintf(arr,"%d:%d:%d",H,M,S);
        if(S==60)
            sprintf(arr,"%d:%d:00",H,M);
        if(M==60)
            sprintf(arr,"%d:00:00",H);

        setcolor(GREEN);
        settextstyle(9, HORIZ_DIR, 6);
        outtextxy(200, 200, arr);
        delay (1000);
        cleardevice();

        if(S==60)
        {
            S=0;
            M++;
        }
        if(M==60)
        {
            M=0;
            H++;
        }

       /* outtextxy(200, 500, "Press any key to stop.");
        if(getch())
            break;*/

    }

    getch();
    closegraph();

}

