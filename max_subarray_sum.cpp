#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n;
    cin>>n;

    ll maxi=INT_MIN;

    ll temp=0;

    for(ll i=0;i<n;i++){
        ll ele;
        cin>>ele;

        temp=max(ele,temp+ele);
        maxi=max(maxi,temp);
    }

    cout<<maxi<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}