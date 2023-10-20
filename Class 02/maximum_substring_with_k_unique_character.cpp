#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s;
    cin>>s;
    int k; cin>>k;
    int n=s.size();
    int i=0,j=0,unq=0;
    int frq[26]={0};
    while(j<n){
        frq[s[j]-'a']++;
        if(frq[s[j]-'a']==1){
            unq++;
        }
        while(unq>k){
            frq[s[i]-'a']--;
            if(frq[s[i]]==0){
                unq--;
            }
            i++;
        }
        if(unq==k){
            cout<<j-i+1<<endl;
        }
        j++;
    }
    return 0;
}