#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    long long p,n;
    cin>>p>>n;
    long long malla=0,apoyo;
    for(int i=0;i<n;i++){
        cin>>apoyo;
        malla+=apoyo;
    }
    apoyo=p-malla;
    if(apoyo<0){
        cout<<0;
    }else{
        cout<<apoyo;
    }
    return 0;
}
