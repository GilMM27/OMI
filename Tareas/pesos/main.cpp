#include <iostream>

using namespace std;

int main()
{
    int n;
    long long h;
    cin>>n>>h;
    long long a[n],p[n];
    long long minn=0,max=0,maxx=0;

    for(int i=0;i<n;i++){
        cin>>a[i]>>p[i];
        if(p[i]>max){
            max=p[i];
        }
    }
    int altura=0,mayorp=0,its;
    for(int i=0;i<n && altura<h;i++){
        maxx=max;
        for(int j=0;j<n;j++){
            if(p[j]<=maxx && p[j]>minn){
                maxx=p[j];
                its=j;
            }
        }
        minn=maxx;
        altura=altura+a[its];
        if(mayorp<p[its]){
            mayorp=p[its];
        }
        cout<<p[its]<<endl;
    }
    cout<<mayorp;
    return 0;
}
