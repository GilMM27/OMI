#include <iostream>
#include <random>

using namespace std;

void inv(int a[],int cap);

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        a[i]=rand()%100+1;
        cout<<a[i]<<" ";
    }
    inv(a,n);
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

void inv(int a[],int cap){
    for(int i=0;i<cap/2;i++){
        swap(a[i],a[cap-i-1]);
    }
}
