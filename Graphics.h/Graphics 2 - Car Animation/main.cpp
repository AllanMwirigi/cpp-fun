#include <graphics.h>

int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    int maxX=getmaxx();


for(int i=0,color=4;i<maxX;i++,color++)
{
    //ROAD
    setcolor(DARKGRAY);
    line(0, 400, maxX, 400);

    //SUN
    setcolor(YELLOW);
    circle(80+i, 80, 50);

    //SIGNBOARD
    setcolor(WHITE);
    rectangle(555, 275, 565, 400); //VERTICAL
    rectangle(525, 200, 600, 275); //HORIZONTAL
    outtextxy(540, 220,"ALLO'S"); //TEXT1
    outtextxy(540, 240,"ANIME"); //TEXT2

    //BUS                                         /*STOP BUS
    setcolor(RED);
    if(i<=450)
    {
    rectangle(10+i, 330, 100+i, 370);
    setcolor(GREEN);
    circle(20+i, 385, 15); //LEFT WHEEL           /*AT
    circle(90+i, 385, 15); //RIGHT WHEEL
    }
    else
    {
    rectangle(460, 330, 550, 370);
    setcolor(GREEN);
    circle(470, 385, 15); //LEFT WHEEL
    circle(540, 385, 15); //RIGHT WHEEL          /*SIGNBOARD
    }


     //FLYING BUSES
    setcolor(CYAN);
    rectangle(0+i*5, 50, 50+i*5, 60); //BUS 1
    rectangle(100+i*5, 70, 150+i*5, 80); //BUS 2
    setcolor(MAGENTA);
    rectangle(-400+i*5, 30, -350+i*5, 40); //BUS 3
    rectangle(-1000+i*5, 70, -950+i*5, 80); //BUS 4

    //AIRPLANE
    if(color>15)color=1;
    setcolor(color);
    line(450-i*2, 100, 475-i*2, 80);
    line(450-i*2, 100, 475-i*2, 120);
    line(475-i*2, 80, 490-i*2, 80);
    line(475-i*2, 120, 490-i*2, 120);
    line(490-i*2, 80, 515-i*2, 5);
    line(490-i*2, 120, 515-i*2, 195);
    line(515-i*2, 5, 515-i*2, 80);
    line(515-i*2, 190, 515-i*2, 120);
    line(515-i*2, 80, 590-i*2, 80);
    line(515-i*2, 120, 590-i*2, 120);
    line(590-i*2, 80, 600-i*2, 60);
    line(590-i*2, 120, 600-i*2, 140);
    line(600-i*2, 140, 600-i*2, 60);

    if(i==0)
    {
        setcolor(WHITE);
        outtextxy(200, 440, "Press any key to start the animation");
        getch();
    }
    delay(10);
    if(i<maxX)
    {
        cleardevice();
    }//SHOULD PREVENT GRAPH FROM CLEARING BEFORE KEY IS PRESSED.NOT WORKING

}
    getch();
    closegraph();
}


