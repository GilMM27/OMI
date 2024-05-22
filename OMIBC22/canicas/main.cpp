#include <iostream>

using namespace std;

int main()
{
    int n,c;
    cin>>n>>c;
    int a[n]={0};
    int apoyo;
    for(int i=0;i<c;i++){
        cin>>apoyo;
        a[apoyo-1]++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
    return 0;
}
