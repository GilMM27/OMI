#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    long long mem[n]={1,1,2};
    int a=0,b=1,c=2;
    for(int i=0;i<n;i++){
        if(i<3){
            cout<<mem[i]<<" ";
        }else{
            mem[i]=mem[a]+mem[b]+mem[c];
            a++;
            b++;
            c++;
            cout<<mem[i]<<" ";
        }
    }
    return 0;
}
