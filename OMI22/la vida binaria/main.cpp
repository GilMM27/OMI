#include <iostream>
#include <algorithm>

using namespace std;

long long n,q;
long long x[100005];
long long y[100005];
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
    /*long long mid=0;
    //binaria
    long long top=n-1,bot=0;
    while(bot<=top){
        mid=(bot+top)/2;
        if(p>=b[mid]){
            bot=mid+1;
        }else{
            top=mid-1;
        }
    }*/
    //cout<<mid<<endl;
    //i=mid-1
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
        if(a[i]>p){
            break;
        }
    }
    cout<<vivos<<" "<<edadj<<" "<<edadv<<endl;
}

int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i];
        a[i]=x[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i]==x[j]){
                b[i]=y[j];
                break;
            }
        }
    }
    //test
    /*cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }*/
    for(int i=0;i<q;i++){
        cin>>p;
        buscar();
    }
    return 0;
}
