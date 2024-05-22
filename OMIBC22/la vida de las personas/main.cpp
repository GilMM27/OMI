#include <iostream>
#include <algorithm>

using namespace std;

long long n,q;
long long a[100005];
long long b[100005];
long long p;
long long vivos,joven,viejo,edadv,edadj;

void buscar(){
    vivos=0;
    joven=0;
    viejo=1000000005;
    edadj=0;
    edadv=0;
    for(int i=0;i<n;i++){
        if(a[i]<=p && b[i]>=p){
            vivos++;
            if(a[i]<viejo){
                viejo=a[i];
                edadv=p-viejo;
            }
            if(a[i]>joven){
                joven=a[i];
                edadj=p-joven;
            }
        }
    }
    cout<<vivos<<" "<<edadj<<" "<<edadv<<endl;
}

int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    //test
    /*for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }*/
    for(int i=0;i<q;i++){
        cin>>p;
        buscar();
    }
    return 0;
}
