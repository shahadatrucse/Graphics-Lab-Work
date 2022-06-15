 #include<bits/stdc++.h>
 #include<graphics.h>
 using namespace std;


 void drawcircle(int x0,int y0, int r)
 {
     int p,x,y;
     y=r;
     p=1-r;
     x=0;
     while(x<=y){

        putpixel(x0+x,y0+y,7);
        putpixel(x0+x,y0-y,7);
        putpixel(x0+y,y0+x,7);
        putpixel(x0+y,y0-x,7);
        putpixel(x0-x,y0+y,7);
        putpixel(x0-x,y0-y,7);
        putpixel(x0-y,y0+x,7);
        putpixel(x0-y,y0-x,7);
        if(p<0)
        {
            x=x+1;
            p=p+2*x+1;

        }
        else{
            x=x+1;
            y=y-1;
            p=p-2*y+1+2*x;
        }
     }
     getch();
 }

 int main()
 {
     int gd=DETECT,gm;
     initgraph(&gd,&gm,(char*)"");

     int x0,y0,r;
     cout<<"Enter radius of circle: ";
     cin>>r;
     cout<<"Enter center of circle: ";
     cin>>x0>>y0;
     drawcircle(x0,y0,r);
     return 0;
 }
