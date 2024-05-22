#include <iostream>

using namespace std;

//2 5 1 200 30 345 12 250 576
void busqueda(long long a[], long long bot, long long top, long long target);

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    long long n,g;
    cin>>n>>g;
    long long x[g];
    cin>>x[0];
    for(long long i=1;i<g;i++){
        cin>>x[i];
        x[i]+=x[i-1];
    }
    long long q;
    for(long long i=0;i<n;i++){
        cin>>q;
        busqueda(x,0,g-1,q);
    }
    return 0;
}

void busqueda(long long a[], long long bot, long long top, long long target){
    //cout<<"son: "<<bot<<" "<<top<<endl;
    long long mid=(bot+top)/2;
    if(top<bot || a[mid]==target){
        cout<<mid+1<<" "<<target-a[mid]<<endl;
    }else if(a[mid]>target){
        busqueda(a,bot,mid-1,target);
    }else if(a[mid]<target){
        busqueda(a,mid+1,top,target);
    }
    // 5 3 12 3 2
    // 5 8 20 23 25
    //25
}
