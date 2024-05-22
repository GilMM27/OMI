#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int a[n][2];
    for(int i=0;i<n;i++){
        cin>>a[i][0]>>a[i][1];
    }
    int cont=0;
    for(int i=0;i<1000000;i++){
        //cout<<i<<endl;
        for(int j=0;j<n;j++){
            if(i==a[j][0]){
                cont++;
                i=a[j][1];
                break;
            }else if(i==a[j][1]){
                cont++;
                i=a[j][0];
                break;
            }
        }
    }
    cout<<cont;
    return 0;
}
