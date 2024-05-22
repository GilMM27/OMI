#include <iostream>

using namespace std;

int i=1, x=1, x2=0, apoyo;

int f(int n){
    if(x>n){
        return -1;
    }else if(x==n){
        return i;
    } else {
        i++;
        apoyo=x;
        x=x+x2;
        x2=apoyo;
        return f(n);
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int num;
    cin>>num;
    cout<<f(num);
    return 0;
}
/*
#include <iostream>

using namespace std;

int i=1, x=1, x2=0, apoyo;

int f(int n){
    if(i==n){
        return x;
    } else {
        i++;
        apoyo=x;
        x=x+x2;
        x2=apoyo;
        return f(n);
    }
}

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);


    int num;
    cin>>num;
    cout<<f(num);
    return 0;
}
*/
