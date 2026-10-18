#include <bits/stdc++.h>
using namespace std;
using ll=long long;
bool isValid(ll mid,ll money,ll bread_price,ll sausage_price,ll cheese_price,ll b,ll s,ll c,ll bhave,ll shave,ll chave){
    ll b_need ,s_need,c_need,totalCost=0;
    b_need=max(0ll,mid*b-bhave);
    s_need=max(0ll,mid*s-shave);
    c_need=max(0ll,mid*c-chave);
    totalCost=b_need*bread_price + s_need*sausage_price + c_need*cheese_price;
    if(totalCost <= money) return true;
    return false;

}
int main(){
    string str;
    cin >> str;
    ll no_bread , no_sausage, no_cheese;
    cin >> no_bread >> no_sausage >> no_cheese;
    ll bread_price,sausage_price,cheese_price;
    cin >> bread_price >> sausage_price >> cheese_price;
    ll money=0;
    cin >> money;

    ll b=0,s=0,c=0;
    for(char x:str){
        if(x == 'B') b += 1;
        else if(x == 'S') s += 1;
        else c += 1;
    }
ll low=0,high=1e13 , max_burgers=0;
while(low <= high){
    ll mid=low+(high-low)/2;
    if(isValid(mid,money,bread_price,sausage_price,cheese_price,b,s,c,no_bread,no_sausage,no_cheese)){
        max_burgers=mid;
        low=mid+1;
    }
else high=mid-1;
}
cout << max_burgers << endl;

return 0;
}