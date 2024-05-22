#include <iostream>

using namespace std;

int a,b,c;
int n;

int fibonacci(int posi){
    c=a+b;
    a=b;
    b=c;
    //cout<<mem[posi]<<" "<<posi<<endl;
    if(n==c){
        return posi;
    }else if(n>c){
        //next posi
        return fibonacci(posi+1);
    }else{
        return -1;
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    a=1;
    b=1;
    cin>>n;
    if(n==1){
        cout<<1;
    }else{
        cout<<fibonacci(3);
    }
    return 0;
}
