#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    long long n,d;
    cin>>n>>d;
    d=d*2;
    long long a[n];
    long long b[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    long long e;
    cin>>e;
    long long c;
    long long ai,an;
    long long top,maxx,temp;
    for(int h=0;h<=e;h++){
        top=0;
        maxx=0;
        temp=0;
        //a[i]+d<=a[n-1]
        for(long long i=0;i<n;i++){
            for(long long j=top;j<n;j++){
                if(a[i]+d>=a[j]){
                    top++;
                    temp++;
                    if(temp>maxx){
                        maxx=temp;
                    }
                }else{
                    break;
                }
            }
            temp--;
        }
        cout<<maxx<<endl;
        if(h!=e){
            cin>>c;
            for(long long i=0;i<c;i++){
                cin>>ai>>an;
                b[ai-1]=an;
            }
            for(long long i=0;i<n;i++){
                a[i]=b[i];
            }
            sort(a,a+n);
        }
        //pruebita
        /*for(long long i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;*/
    }
    return 0;
}
