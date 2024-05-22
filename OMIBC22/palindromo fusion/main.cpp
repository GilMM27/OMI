#include <iostream>

using namespace std;

int n;
bool check(int a[]);
int solve(int a[]);

int main()
{
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<solve(a);
    return 0;
}

bool check(int a[]){
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            return false;
        }
    }
    return true;
}
int solve(int a[]){
    if(check(a)==true){
        return 0;
    }
    int b=0, t=n-1, f=0;
    while(b<t){
        if(a[b]==a[t]){
            b++;
            t--;
            //cout<<b<<" "<<t<<" "<<1<<endl;
        }else if(a[b]<a[t]){
            f++;
            a[b+1]=a[b]+a[b+1];
            b++;
            //cout<<b<<" "<<t<<" "<<2<<endl;
        }else{
            f++;
            a[t-1]=a[t]+a[t-1];
            t--;
            //cout<<b<<" "<<t<<" "<<3<<endl;
        }
        /*if(b>=f-2){
            if(a[b]==a[t]){
                if(t-b==3){
                    return f+1;
                }else{
                    return f;
                }
            }
        }*/
    }
    //return -1;
    return f;
}
/*
5
1 3 1 3 4
*/
