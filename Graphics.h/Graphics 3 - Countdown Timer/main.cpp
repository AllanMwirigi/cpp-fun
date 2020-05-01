#include <graphics.h>
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{

    int M,S;
    cout<<"Enter the number of minutes and seconds:"<<endl;
    cin>>M>> S;

    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    char arr1[10];
    for(int m=M,s=S; m>=0, s>=0; s--)
    {
        if(m<10)
            sprintf(arr1,"0%d:%d",m,s);
        if(s<10)
            sprintf(arr1,"%d:0%d",m,s);
        if(m<10&&s<10)
            sprintf(arr1,"0%d:0%d",m,s);
        if(m>=10&&s>=10)
            sprintf(arr1,"%d:%d",m,s);
        setcolor(GREEN);
        settextstyle(0, HORIZ_DIR, 5);
        outtextxy(200,250, arr1);

        if(s==0&&m>0)
        {
          s=60;
          m--;
        }
        delay(1000);
        cleardevice();
    }
    settextstyle(0, HORIZ_DIR, 10);
    outtextxy(100,200, "STOP!");
    getch();
    closegraph();
}
