#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll a,b;
    cin>>a>>b;

    if((a+b)%3==0 && 2*min(a,b)>=max(a,b)) cout<<"YES"<<'\n';
    else cout<<"NO"<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--) solve();

    return 0;
}