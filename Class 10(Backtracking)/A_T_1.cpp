#include<bits/stdc++.h>
using namespace std;
int a[22];
int n;
bool visited[22];
int mn;
int total;
void backTrack(vector<int> &v){
    int s=0;
    for(int val:v){
        s += val;
    }
    int s2=total-s;
    mn = min(mn,abs(s-s2));
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            visited[i]=true;
            v.push_back(a[i]);
            backTrack(v);
            v.pop_back();
            visited[i]=false;
        }
    }
}
int main()
{   
    cin>>n;
    total=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        total += a[i];
    }
    int sum=0;
    mn=INT_MAX;
    memset(visited,false,sizeof(visited));
    vector<int> v;
    backTrack(v);
    cout<< mn << endl;
    return 0;
}