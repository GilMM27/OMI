#include <iostream>

using namespace std;

int binary(int bot,int top);

int a[100003];
int apoyo;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int n2;
    cin>>n2;
    for(int i=0;i<n2;i++){
        cin>>apoyo;
        cout<<binary(0,n-1)<<" ";
    }
    return 0;
}

int binary(int bot,int top){
    if(bot>top){
        return 0;
    }
    int mid = (bot+top)/2;
    //cout<<"es mid "<<mid<<endl;
    if(a[mid]>apoyo){
        return binary(bot,mid-1);
    }else if(a[mid]<apoyo){
        return binary(mid+1,top);
    }else {
        return mid+1;
    }
}
