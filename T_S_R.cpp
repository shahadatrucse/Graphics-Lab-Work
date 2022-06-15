#include<graphics.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{

    int gd=DETECT,gm,s;
    initgraph(&gd,&gm,(char*)"");
    cout<<"1.Transition"<<endl<<"2.Rotation"<<endl<<"3.Scaling"<<endl;
    cout<<"Selection: ";
    cin>>s;
    switch(s){
    case 1:
       {

       int x1=100,y1=50,x2=300,y2=250,x=50,y=50;
        cout<<"Before transition"<<endl;
        setcolor(3);
        rectangle(x1,y1,x2,y2);
        cout<<"After transition"<<endl;
        setcolor(4);
        rectangle(x1+x,y1+y,x2+x,y2+y);
        getch();
        break;

    }
    case 2:
        {

            int x1=100,y1=50,x2=300,y2=250;
            double a;
            cin>>a;
            cout<<"Before rotation"<<endl;
            setcolor(3);
            rectangle(x1,y1,x2,y2);
            a=(a * 3.14)/180;
            long xr=x1+((x2-x1)*cos(a)-(y2-y1)*sin(a));
            long yr=y1+((x2-x1)*sin(a)+(y2-y1)*cos(a));
             cout<<"After rotation"<<endl;
            setcolor(2);
            rectangle(x1,y1,xr,yr);
            getch();
            break;

        }
    case 3:
        {
        int x1=100,y1=50,x2=300,y2=250,x=2,y=2;
        cout<<"Before Scaling"<<endl;
        setcolor(3);
        rectangle(x1,y1,x2,y2);
        cout<<"After Scaling"<<endl;
        setcolor(4);
        rectangle(x1*x,y1*y,x2*x,y2*y);
        getch();
        break;
        }
    default:
        cout<<"NO selection"<<endl;
        break;

        }
    return 0;


}
