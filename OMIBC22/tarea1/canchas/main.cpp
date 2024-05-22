#include <iostream>

using namespace std;

int area(int x1,int y1,int x2,int y2){
    return ((x1-x2)*(y1-y2));
}

int main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    int areaTotal=0;
    cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
    areaTotal=area(x1,y1,x2,y2)+area(x3,y3,x4,y4);
    int xs=0,ys=0;

    if(x1<x3){
        if(x2>x3 && x2<=x4){
            xs=x2-x3;
        }else if(x2>x4){
            xs=x4-x3;
        }
    }else if(x1>=x3 && x1<x4){
        if(x2<=x4){
            xs=x2-x1;
        }else if(x2>x4){
            xs=x4-x1;
        }
    }
    //cout<<xs<<endl;
    if(y1<y3){
        if(y2>y3 && y2<=y4){
            ys=y2-y3;
        }else if(y2>y4){
            ys=y4-y3;
        }
    }else if(y1>=y3 && y1<y4){
        if(y2<=y4){
            ys=y2-y1;
        }else if(y2>y4){
            ys=y4-y1;
        }
    }
    //cout<<ys<<endl;
    cout<<areaTotal-(xs*ys);
    return 0;
}
