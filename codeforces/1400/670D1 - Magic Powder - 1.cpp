#include<bits/stdc++.h>
using namespace std;
using ll=long long;
bool isValid(ll mid,ll k,ll n,vector<ll>&a,vector<ll>&b){
    ll totalCost=0;
    for(ll i=0;i<n;i++){
        ll res=max(0ll,mid*a[i] - b[i]);
        totalCost += res;
    }
if(totalCost <= k) return true;
return false;
}
int main(){
    int n,k;
    cin >> n >> k;
    vector<ll>a(n) , b(n);
    for(ll i=0;i<n;i++) cin >> a[i];
    for(ll i=0;i<n;i++) cin >> b[i];

    ll low=0,high=2000,max_cookies=0;
    while(low <= high){
        ll mid=low+(high-low)/2;
        if(isValid(mid,k,n,a,b)){
            max_cookies=mid;
            low=mid+1;
        }
    else high=mid-1;
}
cout << max_cookies << endl;
return 0;
}