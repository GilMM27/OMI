#include <iostream>

using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int k;
    cin>>k;
    char d;
    int v=0,h=0;
    for(int i=0;i<k;i++){
        cin>>d;
        if(d=='V'){
            v++;
        }else{
            h++;
        }
    }
    //HORIZONTAL
    if(h%2!=0){
        for(int i=0;i<m;i++){
            for(int j=0;j<n/2;j++){
                swap(a[i][j],a[i][n-j-1]);
            }
        }
    }
    //VERTICAL
    if(v%2!=0){
        for(int i=0;i<n;i++){
            for(int j=0;j<m/2;j++){
                swap(a[j][i],a[m-j-1][i]);
            }
        }
    }
    //COUT
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
