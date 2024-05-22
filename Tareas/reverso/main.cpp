#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n,x;
    cin>>n;
    stack<int> s;
    for(int i=0;i<n;i++){
        cin>>x;
        s.push(x);
    }
    for(int i=0;i<n;i++){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
