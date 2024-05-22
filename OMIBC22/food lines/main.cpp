#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int sames=1;
    int head=1;
    int maxx=a[0];
    int people=0;
    while(people<m){
        //checks if the shorter lines have reached the cappacity of a higher line
        while(maxx==a[head]){
            head++;
            sames++;
        }
        //outputs the size of the current lines the amount of times of same sized lines
        for(int i=0;i<sames && people<m;i++){
            people++;
            cout<<maxx<<endl;
        }
        maxx++;
    }
    return 0;
}
