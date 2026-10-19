#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>a(n);
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++){
            cin >> a[i];
            mp[a[i]] += 1;
        }
    if(mp.size()>2) cout << "NO" << endl;
    else if(a.size() == 2 || mp.size() == 1) cout << "YES" << endl;
    else{
        int first=1,second=0,t=a[0];
        for(int i=1;i<n;i++){
            if(a[i] != t) second += 1;
            else first += 1;
        }
    if((first == (n+1)/2 && second == n/2) || (second == (n+1)/2 && first == n/2)) cout << "YES" << endl;
    else cout << "NO" << endl;
}
}
return 0;
}
