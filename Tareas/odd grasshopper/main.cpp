#include <iostream>

using namespace std;

int main()
{
    long long t;
    cin>>t;
    long long x,n;
    for(int i=0;i<t;i++){
        cin>>x>>n;
        if((n+2)%4==0){
            if(x%2==0){
                cout<<x+1<<endl;
            }else{
                cout<<x-1<<endl;
            }
        }else if((n+1)%4==0){
            if(x%2==0){
                cout<<x+n+1<<endl;
            }else{
                cout<<x-n-1<<endl;
            }
        }else if((n+3)%4==0){
            if(x%2==0){
                cout<<x-n<<endl;
            }else{
                cout<<x+n<<endl;
            }
        }else{
            cout<<x<<endl;
        }
/*
        for(long long j=1;j<=n;j++){
            cout<<x<<" ";
            if(x%2==0){
                x-=j;
            }else{
                x+=j;
            }
        }
        cout<<x<<endl;*/
    }
    return 0;
}
