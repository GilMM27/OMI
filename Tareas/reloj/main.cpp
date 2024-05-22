#include <iostream>

using namespace std;

int main()
{
    int n, d, x=0;
    cin>>n>>d;
    int a[n];
    int apoyo[n];

    for(int i=0;i<n;i++){
        a[i]=i+1;
        cout<<a[i]<<" ";
        if(i+d>=n){
            apoyo[x]=a[i];
            x++;
        } else {
            apoyo[i+d]=a[i];
        }
    }

    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<apoyo[i]<<" ";
    }
    return 0;
}
