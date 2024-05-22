#include <iostream>
#include <algorithm>

using namespace std;

int n,p;

void solve(int a[]){
    int minD,mi,x;
    for(int i=0;i<n-1;i++){
        mi=a[i+1]-a[i];
        if(i==0 || mi<minD){
            x=i+1;
            minD=mi;
        }
    }
    if(n<=p){
        cout<<minD;
        return;
    }else{
        //cout<<a[x]<<" es x"<<endl;
        //recorrer
        for(int i=x;i<n-1;i++)
        {
            a[i]=a[i+1];
        }
        n--;
        /*for(long long i=0;i<n;i++){
            cout<<a[i];
        }
        cout<<endl;*/
        solve(a);
    }
    return;
}

int main()
{
    cin>>n>>p;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    /*for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;*/
    solve(a);
    return 0;
}
