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
bool visited[25];
int n,k;
int cnt;
void backTrack(vector<int> &v){
    if(cnt>=k) return;
    if(v.size()==n){
        for(auto u:v){
            cout<<char(u+64);
        }
        cout<<endl;
        cnt++;
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            v.push_back(i);
            visited[i]=true;
            backTrack(v);
            v.pop_back();
            visited[i]=false;
        }
    }
}
void solve(){
    cin>>n>>k;
    vector<int> v;
    cnt=0;
    memset(visited,false,sizeof(visited));
    backTrack(v);
}
int main(){
    Alamgir
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        cout<<"Case "<<i<<":"<<endl;
        solve();
    }
    return 0;    
}