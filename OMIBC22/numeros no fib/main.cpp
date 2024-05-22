#include <iostream>

using namespace std;

long long mem[10000]={0};
int num;

void fibonacci(long long n){
    //if(mem[n]==0){
    mem[n]=mem[n-1]+mem[n-2];
    //}
    if(mem[n]<=num){
        fibonacci(n+1);
    }
    return;
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    mem[1]=1;
    mem[2]=1;

    cin>>num;
    fibonacci(3);

    int ultim=0;
    for(int i=0;mem[i]<num;i++){
        for(int j=mem[i-1]+1;j<mem[i];j++){
            ultim=j;
            cout<<j<<" ";
        }
    }
    for(int i=ultim+2;i<num;i++){
        cout<<i<<" ";
    }
    return 0;
}
