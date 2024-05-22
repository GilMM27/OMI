#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int espacios=n/2,arrobas=1;
    for(int i=0;i<(n/2)+1;i++){
        for(int i=0;i<espacios;i++){
            cout<<" ";
        }
        espacios--;
        for(int i=0;i<arrobas;i++){
            cout<<"@";
        }
        cout<<endl;
        arrobas+=2;
    }
    return 0;
}
