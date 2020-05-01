#include <graphics.h>


int main()
{
    int gd=DETECT;
    int gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");
    arc(200, 200, 0, 360, 100); //face
    arc(175, 150, 0, 360, 10); //left eye
    arc(225, 150, 0, 360, 10); //right eye
    arc(200, 200, 0, 180, 10); //nose
    arc(200, 225, 180, 360, 50); //smiling lips
    getch();
    closegraph();
}
