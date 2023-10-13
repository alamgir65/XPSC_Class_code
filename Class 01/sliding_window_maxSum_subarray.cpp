#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k; cin>>k;
    int mx=INT_MIN;
    int i=0,j=0;
    int sum=0;
    while(j<n){
        sum+=a[j];
        // ay loop ta e holo main sliding window
        if(k-1<=j){
            cout<<sum<<endl;
            
            mx=max(mx,sum);

            sum-=a[i];
            i++;
        }
        j++;
    }
    cout<<"Maximum Sub array : "<<mx<<endl;
    return 0;
}