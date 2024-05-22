#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin>>n;
    long long a,b,t,ag,bg,tg;
    for(int i=0;i<n;i++){
        tg=0;
        cin>>a>>b;
        while(a>0 && b>0){
            ag=a;
            bg=b;
            if(a<b){
                swap(a,b);
            }
            t=b;
            b=b*3;
            while(b>a){
                t--;
                b=b-3;
            }
            a=ag-(t*3);
            b=bg-t;
            tg+=t;
        }
        cout<<tg<<endl;
    }
    return 0;
}
