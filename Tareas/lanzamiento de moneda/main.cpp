#include <iostream>

using namespace std;

int n, Size=1;
string r[1048576];

void funcion(int x){
    int vuelta=0;
    for(int i=0;i<Size;i++){
        if(vuelta<x){
            r[i]="A"+r[i];
            vuelta++;
        } else if(vuelta<x*2){
            r[i]="X"+r[i];
            vuelta++;
        } else {
            vuelta=0;
            i--;
        }
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<n;i++){
        if(i==1){
            Size=4;
        } else {
            Size*=2;
        }
    }

    int apoyo=1;
    for(int i=1;i<=n;i++){
        if(i==1){
            funcion(apoyo);
        } else {
            apoyo*=2;
            funcion(apoyo);
        }
    }
    for(int i=0;i<Size;i++){
        cout<<r[i]<<endl;
    }

    return 0;
}
