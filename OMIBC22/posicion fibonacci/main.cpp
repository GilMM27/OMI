#include <iostream>
#include <vector>

using namespace std;

vector<long long> mem;
long long n;

long long fibonacci(long long posi){
    mem.push_back(mem[posi-1]+mem[posi-2]);
    //cout<<mem[posi]<<" "<<posi<<endl;
    if(n==mem[posi]){
        return posi;
    }else if(n>mem[posi]){
        //next posi
        return fibonacci(posi+1);
    }else{
        return -2;
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    mem.push_back(1);
    mem.push_back(1);
    cin>>n;
    if(n==1){
        cout<<1;
    }else{
        cout<<fibonacci(2)+1;
    }
    return 0;
}
