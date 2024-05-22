#include <iostream>
#include <vector>
#include <ctime>
#include <random>

using namespace std;

vector<int> s;
int n;

void swap(int from,int to){
    int apoyo;
    apoyo=s[from];
    s[from]=s[to];
    s[to]=apoyo;
}
int locate(int start){
    int min=s[start],mini=start;
    for(int i=start;i<n;i++){
        if(s[i]<min){
            min=s[i];
            mini=i;
        }
    }
    return mini;
}

int main()
{
    int Nmin,Nmax,runs,separacion,before,after;
    cin>>Nmin>>Nmax>>runs;
    separacion=(Nmax-Nmin)/(runs-1);
    cout<<"N - Segundos"<<endl;
    for(int i=0;i<runs;i++){
        before=time(0);
        srand(time(0));
        n=Nmin+separacion*i;
        int input;
        for(int i=0;i<n;i++){
            input=1+rand()%100;
            s.push_back(input);
        }
        for(int i=0;i<n-1;i++){
            swap(locate(i),i);
        }
        after=time(0);
        cout<<n<<" - "<<after-before<<endl;
    }

    return 0;
}
