#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

void breshamline(int x0,int y0,int x1,int y1)
{

    int x,y,p,dx,dy;
    dx=x1-x0;
    dy=y1-y0;
    x=x0;
    y=y0;
    p=2*dy-dx;

    while(x<x1){
        if(p>=0){
            putpixel(x,y,3);
            y=y+1;
            p=p+2*dy-2*dx;
        }
        else{
            putpixel(x,y,4);
            p=p+2*dy;
        }
        x=x+1;

    }
    getch();
}

int main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,(char*)"");

    int x0,y0,x1,y1;
    cout<<"Enter first coordinate: ";
    cin>>x0>>y0;
    cout<<"Enter second coordinate: ";
    cin>>x1>>y1;
    breshamline(x0,y0,x1,y1);
    return 0;
}
