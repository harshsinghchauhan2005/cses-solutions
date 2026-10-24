#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n,q;
    cin>>n>>q;

    vll nums(n+1);
    vll pref(n+1);
    for(int i=1;i<=n;i++){
        cin>>nums[i];
        pref[i]=pref[i-1]+nums[i];
    }

    while(q--){
        ll a,b;
        cin>>a>>b;

        ll sum=pref[b]-pref[a-1];

        cout<<sum<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}