#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while (t--) {
        int n,m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;

        int ans=0;
        while(ans <= 5){
            if(ans == 5 && !x.contains(s)){
                ans=-1;
                break;
            }
        if(x.contains(s)){
            break;
        }
    x += x;
    ans += 1;
}
cout << ans << endl;
}
return 0;
}
