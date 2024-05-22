#include <iostream>

using namespace std;

int main()
{
    int p,n;
    cin>>p>>n;
    int a[p]={0};
    int apoyo;
    for(int i=0;i<n;i++){
        cin>>apoyo;
        a[apoyo-1]++;
    }
    for(int i=0;i<p;i++){
        cout<<i+1<<"-"<<a[i]<<endl;
    }
    return 0;
}
