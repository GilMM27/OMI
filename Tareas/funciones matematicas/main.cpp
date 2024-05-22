#include <iostream>
#include <cmath>

using namespace std;

float valor_absoluto(int x){
    if(x<0){
        x=x*-1;
    }
    return x;
}
float max_valor(int x1,int x2){
    if(x1>x2){
        return x1;
    }
    return x2;

}
float min_valor(int x1, int x2){
    if(x1<x2){
        return x1;
    }
    return x2;
}
float raiz_cuadrada(int x){
    float f,og=sqrt(x);
    x=sqrt(x)*100;
    f=x;
    f=f/100;
    return f;
}
float potancias(int x1,int x2){
    return pow(x1,x2);
}
int main()
{
    int n,m,x1,x2;
    cin>>n;
    float a[n];
    for(int i=0;i<n;i++){
        cin>>m;
        if(m==1){
            cin>>x1;
            a[i]=valor_absoluto(x1);
        } else if(m==2){
            cin>>x1>>x2;
            a[i]=max_valor(x1,x2);
        } else if(m==3){
            cin>>x1>>x2;
            a[i]=min_valor(x1,x2);
        } else if(m==4){
            cin>>x1;
            a[i]=raiz_cuadrada(x1);
        } else {
            cin>>x1>>x2;
            a[i]=potancias(x1,x2);
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
