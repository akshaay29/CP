#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t=0;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int x_change=c-a , y_change=d-b , total_cost=0;
        if(x_change>y_change || y_change<0) cout << -1 << endl;
        else{
            total_cost=2*y_change-x_change;
            cout << total_cost << endl;
        }
}
return 0;
}