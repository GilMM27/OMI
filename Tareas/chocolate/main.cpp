#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+m-2][2];
    int x=0;
    for(int i=0;i<n+m-2;i++){
        cin>>a[i][0];
        a[i][1]=x;
        if(i==n-2){
            x++;
        }
    }
    int minn=1000,it;
    for(int i=0;i<n+m-3;i++){
        minn=1000;
        for(int j=i;j<n+m-2;j++){
            if(a[j][0]<minn){
                minn=a[j][0];
                it=j;
            }
        }
        swap(a[i][0],a[it][0]);
        swap(a[i][1],a[it][1]);
    }
    int total=0,h=1,v=1;
    for(int i=n+m-3;i>=0;i--){
        if(a[i][1]==0){
            total=total+(a[i][0]*h);
            v++;
        }else{
            total=total+(a[i][0]*v);
            h++;
        }
    }
    cout<<total;
    return 0;
}
