#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    long long n;
    cin>>n;
    long long a;
    long long primer, cont=0;
    cin>>primer;
    for(long long i=0;i<n-1;i++){
        cin>>a;
        if(a<primer){
            cont++;
        }
    }
    cout<<cont;
    return 0;
}
//volver a mandar
