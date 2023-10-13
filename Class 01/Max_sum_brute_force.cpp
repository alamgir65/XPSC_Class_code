#include<bits/stdc++.h>
using namespace std;
#define forI(i,s,n) for(i=s;i<n;i++)
int main()
{   
    int n; cin>>n;
    int a[n]; int i;
    forI(i,0,n) cin>>a[i];
    int k; cin>>k;
    int j;
    int mx=INT_MIN;
    forI(i,0,n-k+1){
        int sum=0;
        forI(j,i,i+k){
            sum+=a[j];
        }
        mx=max(sum,mx);
    }
    cout<<mx<<endl;
    return 0;
}