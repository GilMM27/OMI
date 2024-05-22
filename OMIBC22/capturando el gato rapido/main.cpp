#include <iostream>

using namespace std;

long long n;
long long a[5005]={0};

int check(long long num,long long it){
    int zorros=1,sum=0;
    //cout<<num<<" es num"<<endl;
    for(long long i=it+1;i!=it;i++){
        if(i==n){
            i=0;
        }
        sum+=a[i];
        //cout<<sum<<endl;
        if(sum==num){
            //cout<<zorros<<" van"<<endl;
            zorros++;
            sum=0;
        }
        if(sum>num){
            //cout<<"murio"<<endl;
            zorros=-1;
            break;
        }
    }
    return zorros;
}


int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);

    cin>>n;
    long long mayor=0,mayori;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mayor<a[i]){
            mayor=a[i];
            mayori=i;
        }
    }
    long long r;
    mayor=0;
    bool flag=false,listo=false;
        //listo=false;
        for(long long i=mayori;flag==false;i++){
            if(i==n){
                i=0;
                listo=true;
            }
            if(i==mayori && listo==true){
                break;
            }
            mayor+=a[i];
            r=check(mayor,i);
            if(r!=-1){
                cout<<r;
                flag=true;
            }
        }

    return 0;
}
