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
    long long is[n];
    for(long long i=0;i<n;i++){
        cin>>a[i];
        b[i]=a[i];
    }
    long long e;
    cin>>e;
    long long c;
    long long top,maxx,temp;
    long long inputs[n],inputsi[n];
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
                cin>>inputsi[i]>>inputs[i];
                //b[ai-1]=an;
                //is[i]=ai-1;
            }

            sort(inputs,inputs+c);
            //long long cont=0;inputs[i]
            for(long long i=0;i<c;i++){
                a[inputsi[i]]=inputs[i];
            }
            //sort(a,a+n);
            for(long long i=c;i>=0;i++){
                //sort a[is[i]]
                while(a[inputsi[i]]<a[inputsi[i]+1]){
                    //cout<<"A";
                    swap(a[is[i]],a[is[i]+1]);
                    is[i]++;
                }
                while(a[inputsi[i]]>a[inputsi[i]-1]){
                    //cout<<"A";
                    swap(a[is[i]],a[is[i]-1]);
                    is[i]--;
                }
            }
            /*for(long long i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;*/
        }
        //pruebita
    }
    return 0;
}
