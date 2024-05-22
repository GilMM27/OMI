#include <iostream>

using namespace std;

int n;

bool binary_search(int a[], int from, int to, int value, int& pos){
    int mid = (from + to) / 2;
    if (from > to)
    {
        if(mid+1>=n){
            pos=n;
        }else{
            pos=mid+1;
        }
        return false;
    }
    if (a[mid] == value)
    {
        pos=mid;
        return true;
    }
    else if (a[mid] < value)
    {
        return binary_search(a, mid + 1, to, value, pos);
    }
    else
    {
        return binary_search(a, from, mid - 1, value, pos);
    }
}
int main()
{
    int obj,pos;
    cin>>n>>obj;
    int a[n];
    for(int i=0;i<n;i++){
        //debe estar en orden de menor a mayor
        //se puede implementar un selection sort para hacer esto automatico
        cin>>a[i];
    }
    cout<<binary_search(a,0,n-1,obj,pos);
    cout<<endl<<pos;
    return 0;
}
