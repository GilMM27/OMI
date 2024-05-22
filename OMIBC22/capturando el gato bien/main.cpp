#include <iostream>
#include <stack>

using namespace std;

int n;
long long a[5005]={0};

int check(long long num,long long it){
    int zorros=1,sum=0;
    //cout<<num<<" es num"<<endl;
    for(int i=it+1;i!=it;i++){
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
int check2(long long num,long long it){
    int zorros=1,sum=0;
    //cout<<num<<" es num"<<endl;
    for(int i=it-1;i!=it;i--){
        if(i==0){
            i=n-1;
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
    int mayor=0,mayori;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(mayor<a[i]){
            mayor=a[i];
            mayori=i;
        }
    }
    long long r;
    bool flag=false,listo=false;
    stack<long long> pen;
    long long alto=0, alti=0;
    while(flag==false){
        mayor=0;
        listo=false;
        for(int i=mayori;flag==false;i++){
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
        mayor=0;
        listo=false;
        for(int i=mayori;flag==false;i--){
            if(i==0){
                i=n-1;
                listo=true;
            }
            if(i==mayori && listo==true){
                break;
            }
            mayor+=a[i];
            r=check2(mayor,i);
            if(r!=-1){
                cout<<r;
                flag=true;
            }
        }
        for(int i=mayori+1;flag==false && pen.empty();i++){
            if(i==0){
                i=n-1;
                listo=true;
            }
            if(i==mayori && listo==true){
                break;
            }
            if(a[mayori]==a[i]){
                pen.push(a[i]);
            }
            if(alto<a[i]){
                alto=a[i];
                alti=i;
            }
        }
        if(!pen.empty()){
            mayori=pen.top();
            pen.pop();
        }else{
            mayori=alti;
        }
    }
    return 0;
}
