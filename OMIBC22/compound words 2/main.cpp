#include<iostream>

using namespace std;

bool check(string a[],int x,int z);
int n;

int main(){
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j!=i){
                if(check(a,i,j)==true){
                    cout<<a[i]<<" is a compound"<<endl;
                }
            }
        }
    }
}

bool check(string a[],int x,int z){
    string one=a[z],two=a[x];
    //first check (string is found in possible compound)
    for(int i=0;i<one.size();i++){
        if(one[i]!=two[i]){
            return false;
        }
    }
    //cout<<one<<" is contained in "<<two<<endl;
    //second check (sums strings to find a compound)
    for(int i=0;i<n;i++){
        if(i!=x && i!=z){
            //cout<<"checking "<<one<<a[i]<<endl;
            if(one+a[i]==a[x]){
                return true;
            }
        }
    }
    return false;
}
