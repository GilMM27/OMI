/*#include <iostream>

using namespace std;

int main()
{
    string input;
    cin>>input;
    long long n=0;
    for(int i=0;i<input.length();i++){
        if(input[i]=='('){
            n++;
        }else if(input[i]==')'){
            n--;
        }
        if(n<0){
            n=-1;
            break;
        }
    }
    if(n==0){
        cout<<"SI";
    } else {
        cout<<"NO";
    }
    return 0;
}
*/
#include <iostream>
#include <stack>

using namespace std;

int main()
{
    string input;
    cin>>input;
    stack<char> n;
    for(int i=0;i<input.length();i++){
        if(input[i]=='('){
            n.push('(');
        }else if(input[i]==')' && !n.empty()){
            n.pop();
        } else {
            n.push('x');
            break;
        }
    }
    if(n.empty()){
        cout<<"SI";
    } else {
        cout<<"NO";
    }
    return 0;
}

