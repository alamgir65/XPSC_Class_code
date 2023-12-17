#include<bits/stdc++.h>
using namespace std;
bool visited[20];
void backTrack(int n,vector<int> &v){
    if(v.size()==n){
        for(auto val:v){
            cout<<val<<" ";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++){
        if(!visited[i]){
            v.push_back(i);
            visited[i]=true;
            backTrack(n,v);
            visited[i]=false;
            v.pop_back();
        }
    }
}
int main()
{   
    int n; cin>>n;
    vector<int> v;
    memset(visited,false,sizeof(visited));
    backTrack(n,v);
    return 0;
}