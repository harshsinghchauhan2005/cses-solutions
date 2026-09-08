#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;

    vll a(n);
    for(auto &ele:a) cin>>ele;

    vll b(m);
    for(auto &ele:b) cin>>ele;

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    ll i=0;
    ll j=0;

    ll ans=0;

    while(i<n && j<m){
        if(abs(a[i]-b[j])<=k){
            ans++;
            i++;
            j++;
        }
        else if(b[j]<a[i]-k){
            j++;
        }
        else i++;
    }

    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}