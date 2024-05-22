#include <iostream>

using namespace std;

int fuerzaBruta(int k,int a[]);
int segundaSolucion(int k,int a[]);
int n;

int main()
{
    int k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<fuerzaBruta(k,a)<<endl<<segundaSolucion(k,a);
    return 0;
}

int fuerzaBruta(int k,int a[]){
    int apoyo=0,maxx=0;
    for(int i=0;i<=n-k;i++){
        apoyo=0;
        for(int j=i;j<i+k;j++){
            apoyo+=a[j];
        }
        if(maxx<apoyo){
            maxx=apoyo;
        }
    }
    return maxx;
}
int segundaSolucion(int k,int a[]){
    int apoyo=0,maxx=0;
    for(int i=0;i<k;i++){
        apoyo+=a[i];
    }
    maxx=apoyo;
    for(int i=k;i<n;i++){
        apoyo=apoyo+a[i]-a[i-k];
        if(apoyo>maxx){
            maxx=apoyo;
        }
    }
    return maxx;
}
