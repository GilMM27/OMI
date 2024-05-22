#include <iostream>

using namespace std;


int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    long long n,q;
    cin>>n>>q;
    long long x[q];
    long long g;
    for(long long i=0;i<q;i++){
        cin>>x[i];
    }
    long long total;
    for(long long i=0;i<n;i++){
        total=0;
        cin>>g;
        for(long long j=0;j<q;j++){
            if(x[j]<=g){
                g-=x[j];
                total++;
            }else{
                break;
            }
        }
    cout<<total<<" "<<g<<endl;
    }
    return 0;
}
