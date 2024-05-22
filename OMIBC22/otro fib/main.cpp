#include <iostream>

using namespace std;

long long mem[1000]={0};

long long fibonacci(long long n){
    if(mem[n]==0){
        mem[n]=fibonacci(n-1)+fibonacci(n-2);
    }
    return mem[n];
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    mem[1]=1;
    mem[2]=1;

    int n;
    cin>>n;
    cout<<fibonacci(n);

    return 0;
}

// 1 1 2 3 5 8 13 21 34 55
