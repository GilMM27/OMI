#include <iostream>

using namespace std;

int main()
{
    int y,x;
    cin>>y>>x;
    int a[y][x];
    int nuevo[y][x];
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cin>>a[i][j];
        }
    }
    int input;
    for(int i=0;i<x;i++){
        cin>>input;
        for(int j=0;j<y;j++){
            nuevo[j][i]=a[j][input];
        }
    }
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<nuevo[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
/*
2 3
10 0 5
7 10 5
1 2 0
*/






