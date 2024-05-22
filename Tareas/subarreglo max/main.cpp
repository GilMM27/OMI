#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;
    int a[size];
    int max=0,temp=0,min,top;
    for(int i=0;i<size;i++){
        cin>>a[i];
        temp=0;
        for(int j=i;j>=0;j--){
            temp=temp+a[j];
            if(temp>max){
                min=j;
                top=i;
                max=temp;
            }
        }
    }
    for(int i=min;i<=top;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<max;
    return 0;
}
