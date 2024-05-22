#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int an[n-1],am[m-1];
    for(int i=0;i<n-1;i++){
        cin>>an[i];
    }
    for(int i=0;i<m-1;i++){
        cin>>am[i];
    }

    int cost=0,temp=0;
    for(int i=0;i<n-1;i++){
        cost=cost+an[i];
    }
    for(int i=0;i<m-1;i++){
        cost=cost+(n*am[i]);
    }
    for(int i=0;i<m-1;i++){
        temp=temp+am[i];
    }
    for(int i=0;i<n-1;i++){
        temp=temp+(m*an[i]);
    }

    if(temp<cost){
        cout<<temp;
    } else {
        cout<<cost;
    }
    return 0;
}
