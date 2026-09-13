#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n,x;
    cin>>n>>x;

    vll p(n);
    for(auto &ele:p) cin>>ele;

    ll count=0;
    ll l=0;
    ll r=n-1;

    sort(p.begin(),p.end());

    while(l<=r){
        if(l==r){
            count++;
            break;
        }

        if(p[l]+p[r]<=x){
            l++;
            r--;
        }
        else r--;

        count++;
    }

    cout<<count<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}