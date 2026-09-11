#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll binpow(ll a,ll b, ll m) {
    a%=m;
    ll res=1;
    while(b>0){
        if(b&1)
            res=res*a% m;
        a=a*a%m;
        b>>=1;
    }
    return res;
}

void solve(){
    ll n;
    cin>>n;

    ll m=1e9+7;

    cout<<binpow(2,n,m)<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}