#include<bits/stdc++.h>
#define ll long long
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define all(x) x.begin(), x.end()
#define nl cout<<endl;
#define endl '\n'
#define vtr vector
#define vii vector<int> 
#define vll vector<ll>
#define imax INT_MAX
#define imin INT_MIN
#define pb push_back
#define Alamgir ios_base::sync_with_stdio(false), cin.tie(0),cout.tie(0);
using namespace std;
int n;
int a[15][15];
bool visited[15];
int mn;
void backtracking(int n,vector<int> &v){
    if(v.size()==n){
        int sum=0;
        int last=0;
        for(int x:v){
            sum += a[last][x];
            last=x;
        }
        sum += a[last][0];
        mn=min(mn,sum);
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            v.push_back(i);
            visited[i]=true;
            backtracking(n,v);
            visited[i]=false;
            v.pop_back();
        }
    }
}
void solve(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    mn=INT_MAX;
    memset(visited,false,sizeof(visited));
    vii v;
    backtracking(n-1,v);
    cout<< mn <<endl;
}
int main(){
    Alamgir
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;    
}