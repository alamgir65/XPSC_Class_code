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
class WormHole{
    public:
    int si,sj,di,dj,c;
};
using namespace std;
bool visited[15];
int si,sj,di,dj;
int mn;
vector<WormHole> a(15);
void backtracking(int n,vector<int> &v){

    int sum=0;
    int lastI=si,lastJ=sj,r;
    for(int x:v){
        int tmp=abs(a[x].si-lastI)+abs(a[x].sj-lastJ)+a[x].c;
        lastI=a[x].di;
        lastJ=a[x].dj;
        sum += tmp;
    }
    int tmp=abs(lastI-di)+abs(lastJ-dj);
    sum += tmp;
    //mn=min(sum,mn);

    int sum2 = 0;
    int lasti2 = si, lastj2 = sj;
    for (int x : v)
    {
        int tmp = abs(lasti2 - a[x].di) + abs(lastj2 - a[x].dj) + a[x].c;
        lasti2 = a[x].si;
        lastj2 = a[x].sj;
        sum2 += tmp;
    }
    sum2 += abs(lasti2 - di) + abs(lastj2 - dj);
    mn = min({sum,sum2,mn});

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
    int n; cin>>n;
    cin>>si>>sj>>di>>dj;
    for(int i=1;i<=n;i++){
        cin>>a[i].si>>a[i].sj>>a[i].di>>a[i].dj>>a[i].c;
    }
    memset(visited,false,sizeof(visited));
    vector<int> v;
    mn=INT_MAX;
    backtracking(n,v);
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