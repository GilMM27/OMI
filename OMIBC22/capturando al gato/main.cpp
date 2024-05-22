//NO SIRVE
#include <iostream>

using namespace std;

int n;
long long a[5005]={0};

int check(long long num,long long it){
    long long suma,zorros=1;
    cout<<num<<" es num"<<endl;
    for(int i=0;i<n;i++){
        suma=0;
        for(int j=i;j<n && j!=it;j++){
            suma+=a[j];
            cout<<suma<<endl;
            if(suma==num){
                zorros++;
                i=j;
                break;
            }
            if(suma>num){
                break;
            }
        }
    }
    cout<<zorros<<" zorros"<<endl;
    return zorros;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int mayor=0,r;
    for(int i=0;i<n;i++){
        r=check(a[i],i);
        if(r>mayor){
            mayor=r;
        }
    }
    cout<<mayor;
    return 0;
}
