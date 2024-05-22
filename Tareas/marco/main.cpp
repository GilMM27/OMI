#include <iostream>

using namespace std;

int a,b;
long long arr[1000001];

long long marco(int pos){
    if (arr[pos] == 0) {
        arr[pos] = marco(pos - 1) + marco(pos - 2);
    }
    return arr[pos]%1000000007;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    int c;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        for(int i=3;i<=c;i++){
            arr[i]=0;
        }
        arr[1]=a;
        arr[2]=b;
        cout<<marco(c)<<endl;
    }
    return 0;
}
