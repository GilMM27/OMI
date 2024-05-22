#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a;
    int x[n];
    int total=0;

    for(int i=0;i<n;i++){
            cin>>a;
            if(a%3==0){
            x[total]=i+1;
            total++;
        }
    }

    if(total==0){
        cout<<"No hay triples.";
    } else {
        cout<<total<<endl;
        for(int i=0;i<total;i++){
            cout<<x[i]<<" ";
        }
        return 0;
    }
}
