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


    if(x2>x3 && y2>y3 && x1<x3 && y1<y3 && y4>y2){
        cout<<"A"<<endl;
        areaTotal=areaTotal-area(x2,y2,x3,y3);
    } else if(x2>x3 && y2>y3 && x3<x1 && y3<y1){
        areaTotal=areaTotal-area(x1,y1,x4,y4);
        cout<<"B"<<endl;
    } else if(x2>x3 && y4>y1 && x2<x4 && y3<y1){
        areaTotal=areaTotal-area(x3,y1,x2,y4);
        cout<<"C"<<endl;
    } else if(x2>x3 && y4>y1 && y3<y1){
        areaTotal=areaTotal-area(x1,y3,x4,y2);
        cout<<"D"<<endl;
    } else if(x3>x1 && y4<y2 && y3<y1){
        cout<<"E"<<endl;
        areaTotal=areaTotal-area(x3,y3,x2,y4);
    }
    cout<<area(x3,y3,x2,y4)<<endl;
    cout<<areaTotal;
    return 0;
}
