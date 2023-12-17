#include<bits/stdc++.h>
using namespace std;
bool visited[20];
void backtrack(int n,vector<int> &v){
    if(v.size()==n){
        for(auto u:v) cout<<u<<" ";
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            v.push_back(i);
            visited[i]=true;
            backtrack(n,v);
            visited[i]=false;
            v.pop_back();
        }
    }
}
int main()
{   
    int n; cin>>n;
    memset(visited,false,sizeof(visited));
    vector<int> v;
    backtrack(n,v);
    return 0;
}