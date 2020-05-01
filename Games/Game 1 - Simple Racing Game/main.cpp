#include <graphics.h>
#include <windows.h>
#include <cstdlib>
#include <ctime>

void generateObstacles(int vary)
{
     srand(time(NULL));
     vary=(300+rand()%500);
}

int main()
{
   int gd=DETECT;
   int gm;
   initgraph(&gd, &gm, "C:\\TC\\BGI");
   initwindow(1600, 900, "Simple Dodging Game", -5, -5);
   DWORD screenwidth=GetSystemMetrics(SM_CXSCREEN);
   //srand(time(NULL));

    int barx=10, bary=360, vmove=10, page=0;
    for(int m=0, n=1000, d=200; m>=0; m++)
    {
        setactivepage(page);
        setvisualpage(1-page);
        cleardevice();

         //int d=200;
         int y1=400;
         int x1=n-m*5;
         int y2=y1+40;
         int x2=(n+70)-m*5;



         //OBSTACLES
         setfillstyle(SOLID_FILL, RED);
         bar(x1+60, y1-d, x2+60, y2-d); //UPPEST OBSTACLE 1
         bar(x1+120, y1-d+100, x2+120, y2-d+100); //ABOVE MIDDLE OBSTACLE
         bar(x1, y1, x2, y2); //MIDDLE OBSTACLE
         bar(x1+240, y1+d-50, x2+240, y2+d-50); //BELOW MIDDLE OBSTACLE
         bar(x1+100, y1+d+50, x2+100, y2+d+50); //LOWEST OBSTACLE*/
         bar(x1+300, y1-d-30, x2+300, y2-d-30); //UPPEST OBSTACLE 2
         bar(x1+380, y1-d+120, x2+380, y2-d+120); //ABOVE MIDDLE OBSTACLE
         bar(x1+30, y1, x2+30, y2); //MIDDLE OBSTACLE
         bar(x1+350, y1+d, x2+350, y2+d); //BELOW MIDDLE OBSTACLE
         bar(x1+200, y1+d+35, x2+200, y2+d+35); //LOWEST OBSTACLE*/

         if((x2+380)==(screenwidth/4)-300)
         {
             m=0;
             //generateObstacles(d);
             srand(time(NULL));
             int b=(100+rand()%400);
             d=b;

         }
          //Simple vehicle
          setfillstyle(SOLID_FILL, WHITE);
          bar(barx, bary, barx+60, bary+40);
         if(GetAsyncKeyState(VK_RIGHT))
         {
              barx+=vmove;
         }

          if(GetAsyncKeyState(VK_LEFT))
         {
              barx-=vmove;
         }
          if(GetAsyncKeyState(VK_UP))
         {
              bary-=vmove;
         }
          if(GetAsyncKeyState(VK_DOWN))
         {
              bary+=vmove;
         }
         if(GetAsyncKeyState(VK_SHIFT))
         {
             closegraph();
         }

          page=1-page;
         delay(10);

    }

}
