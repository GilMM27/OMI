#include <iostream>

using namespace std;

/*long long meo[10000][10000]={0};

long long grid(long long x,long long y){
    if(meo[x][y]!=0){
        return meo[x][y];
    }else if(x==1 && y==1){
        return 1;
    }else if(x<1 || y<1){
        return 0;
    }
    meo[x][y]=grid(x-1,y)+grid(x,y-1);
    meo[y][x]=meo[x][y];
    return meo[x][y];
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);
    long long x,y;
    cin>>x>>y;
    cout<<grid(x,y);
  return 0;
}*/

long long memo[1000001]={0};

long long marco(long long a, long long b, long long c){
    if(memo[c]!=0){
        return memo[c];
    }else if(c==1){
        return a;
    }else if(c==2){
        return b;
    }else{
        memo[c]=marco(a,b,c-1)+marco(a,b,c-2);
        return memo[c]%1000000007;
    }
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    long long p;
    cin>>p;
    long long ins[p][3];
    for(int i=0;i<p;i++){
        cin>>ins[i][0]>>ins[i][1]>>ins[i][2];
    }
    for(int i=0;i<p;i++){
        cout<<marco(ins[i][0],ins[i][1],ins[i][2])<<endl;
        for(int j=0;j<=ins[i][2];j++){
            memo[j]=0;
        }
    }
}
