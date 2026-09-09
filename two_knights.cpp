#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin>>n;

    for(ll i=1;i<=n;i++){
        ll tot=i*i*(i*i-1)/2;
        ll att=4*(i-1)*(i-2);

        cout<<tot-att<<'\n';
    }
    cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}