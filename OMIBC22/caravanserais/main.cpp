#include <iostream>

using namespace std;

int costos[50]={0};
int mem[50]={0};

int minCost(int n){
    if(mem[n]==0 && n>=0){
        mem[n]=min(minCost(n-1),minCost(n-2))+costos[n];
    }
    return mem[n];
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>costos[i];
    }
    cout<<minCost(n);
    /*cout<<endl;
    for(int i=0;i<=n;i++){
        cout<<mem[i]<<" ";
    }*/
    return 0;
}
