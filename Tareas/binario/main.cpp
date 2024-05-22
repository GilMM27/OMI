#include <iostream>
#include <stack>

using namespace std;

stack<int> s;
int x=0;

void binario(int n){
    while(n>0){
        if(n%2==0){
            s.push(0);
            x++;
            if(n!=1){
                binario(n/2);
            }
        } else {
            s.push(1);
            x++;
            if(n!=1){
                binario(n/2);
            }
        }
        n=0;
    }
}

int main()
{
    int n;
    cin>>n;
    if(n==0){
        cout<<0;
    } else {
        binario(n);
    }
    for(int i=0;i<x;i++){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}
