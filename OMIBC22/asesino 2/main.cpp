#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int l1,l2,n;
    cin>>l1>>l2>>n;
    int a[l1+1][l2+1]={0};
    //cout<<a[1][];
    int i1,i2;
    for(int i=0;i<n;i++){
        cin>>i1>>i2;
        a[i1][i2]=1;
    }
    int camas=0;
    for(int i=1;i<=l1-1;i++){
        for(int j=1;j<=l2-1;j++){
            //cout<<i<<" "<<j<<endl<<a[i][j]<<" "<<a[i][j+1]<<" "<<a[i+1][j]<<" "<<a[i+1][j+1]<<endl;
            if(a[i][j]!=1 && a[i][j+1]!=1 && a[i+1][j]!=1 && a[i+1][j+1]!=1){
                camas++;
            }
        }
    }
    cout<<camas;
    return 0;
}
