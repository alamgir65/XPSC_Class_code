#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int s; cin>>s;
    int i=0,j=0,sum=0;
    map<int,int> mp;
    while(i<n){
        sum+=a[i];
        if(sum==s){
            cout<<i+1<<endl;
        }
        if(sum>s){
            if(mp.find(sum-s) != mp.end()){
                cout<<i-mp[sum-s]<<endl;
            }
        }
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }
        i++;
    }
    return 0;
}