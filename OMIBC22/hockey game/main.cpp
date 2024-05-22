#include <iostream>
//#include <vector>

using namespace std;

string s;
string t;
int a[1005];
int b[1005];
int n;
int biggest=-1;
//vector<int> v;
int r;

int maxSum(int x,int y,int res){
    //int biggest=-1;
    for(int i=x;i<n;i++){
        for(int j=y;j<n;j++){
            if(s[i]!=t[j]){
                if(s[i]=='W' && a[i]>b[j] || s[i]=='L' && a[i]<b[j]){
                //cout<<i<<" "<<a[i]<<" "<<j<<" "<<b[j]<<endl;
                    //v.push_back(a[i]+b[j]+maxSum(i+1,j+1));
                    r=maxSum(i+1,j+1,res+a[i]+b[j]);
                    //cout<<r<<endl;
                    if(r>biggest){
                        //cout<<"big "<<r<<endl;
                        biggest=r;
                    }
                }
            }
        }
    }
    return res;
    //return biggest;
}

int main()
{
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>t;
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    int trash=maxSum(0,0,0);
    /*v.push_back(maxSum(0,0,0));
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
        if(biggest<v[i]){
            biggest=v[i];
        }
    }*/
    cout<<biggest;
    return 0;
}
