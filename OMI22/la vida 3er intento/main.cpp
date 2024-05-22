#include <iostream>
#include <algorithm>

using namespace std;

long long n,q;
long long a[100005];
long long b[100005];
long long x[100005];
long long y[100005];
long long vidas[1000005];
long long p;
long long vivos,joven,viejo,edadv,edadj;

void buscar(){
    cout<<vidas[p]<<endl;
    //binaria
    long long mid=0;
    long long top=n-1,bot=0;
    while(bot<=top){
        mid=(bot+top)/2;
        //cout<<mid;
        if(p==a[mid] || p>a[mid] && p<a[mid+1]){
            break;
        }else if(p>a[mid]){
            bot=mid+1;
        }else{
            top=mid-1;
        }
    }
    cout<<"mid "<<p-a[mid]<<endl;
}

int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
        //por si acaso
        x[i]=a[i];
        y[i]=b[i];
    }
    sort(a,a+n);
    sort(b,b+n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" "<<b[i]<<endl;
    }
    long long cont=0,iv=0,id=0;
    for(int i=0;i<1000003;i++){
        if(i==a[iv]){
            cont++;
            iv++;
        }
        if(i==b[id]+1){
            cont--;
            id++;
        }
        //cout<<i<<" "<<cont<<endl;
        vidas[i]=cont;
    }
    for(int i=0;i<q;i++){
        cin>>p;
        buscar();
    }
    return 0;
}
