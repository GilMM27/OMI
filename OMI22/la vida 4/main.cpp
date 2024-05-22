#include <iostream>

using namespace std;

long long n,q;
long long x[100005];
long long y[100005];
long long a[100005];
long long b[100005];
long long p;
long long vivos,joven,viejo,edadv,edadj;

using namespace std;

int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        vivos=1;
        for(int j=0;j<n;j++){
            if(a[i]>=a[j] && b[j]>=a[i] && i!=j){
                vivos++;
            }
        }
        x[i]=vivos;
    }
    for(int i=0;i<n;i++){
        cout<<x[i]<<endl;
    }
    for(int i=0;i<q;i++){
        cin>>p;
        //buscar();
    }
    return 0;
}
