#include<bits/stdc++.h>
using namespace std;
int si,sj,di,dj;
vector<pair<int,int>> a(12);
bool visited[12];
int mn;
void backtracking(int n,vector<int> &v){
    if(v.size()==n){
        int sum=0;
        int lastI=si;
        int lastJ=sj;
        for(auto x:v){
            int tmp=abs(a[x].first-lastI) + abs(a[x].second-lastJ);
            sum += tmp;
            lastI=a[x].first;
            lastJ=a[x].second;
        }
        int tmp=abs(lastI-di)+abs(lastJ-dj);
        sum += tmp;
        mn=min(sum,mn);
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            v.push_back(i);
            visited[i]=true;
            backtracking(n,v);
            visited[i]=false;
            v.pop_back();
        }
    }
}
int main()
{   
    int t=10;
    for(int i=1;i<=t;i++){
        int n; cin>>n;
        cin>>si>>sj>>di>>dj;
        for(int i=1;i<=n;i++){
            cin>>a[i].first>>a[i].second;
        }
        memset(visited,false,sizeof(visited));
        mn=INT_MAX;
        vector<int> v;
        backtracking(n,v);
        cout<<"# "<<i<<" "<<mn<<endl;
    }
    return 0;
}