#include <iostream>

using namespace std;

int main()
{
    int d, n;
    cin>>d>>n;
    int a[d*d]={0},x=1,cant=d,apoyo=1;
    for(int i=1;i<=n;i++){
        apoyo=x;
        for(int j=0;j<d*d;j++){
            if(apoyo>cant){
                apoyo=1*x;
            }
            a[j]+=apoyo;
            apoyo+=x;
        }
        cant*=d;
        x*=10;
    }
    for(int i=0;i<d*d;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
