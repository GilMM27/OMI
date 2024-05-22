#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    stack<char> s;
    int t;
    cin>>t;
    string input;
    for(int i=0;i<t;i++){
        cin>>input;
        for(int j=0;j<input.length();j++){
            if(input[j]=='{' || input[j]=='[' || input[j]=='('){
                s.push(input[j]);
            } else if(!s.empty()){
                if(input[j]=='}' && s.top()=='{' || input[j]==']' && s.top()=='[' || input[j]==')' && s.top()=='('){
                    s.pop();
                } else {
                    cout<<"NO"<<endl;
                    break;
                }
            } else {
                cout<<"NO"<<endl;
                break;
            }
            if(j+1==input.length()){
                if(s.empty()){
                    cout<<"SI"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
        while(!s.empty()){
            s.pop();
        }
    }
    return 0;
}
