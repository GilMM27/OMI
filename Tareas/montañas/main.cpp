#include <iostream>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int n;
    cin>>n;
    int a[n];
    string s[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>s[i];
    }
    int mayor=0,mayori;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[j]>mayor){
                mayor=a[j];
                mayori=j;
            }
        }
        cout<<s[mayori]<<endl;
        a[mayori]=0;
        mayor=0;
    }
    return 0;
}
