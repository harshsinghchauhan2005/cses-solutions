#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n;
    cin>>n;

    vll nums(n);
    for(auto &ele:nums) cin>>ele;

    sort(nums.begin(),nums.end());

    ll mid=nums[n/2];

    ll ans=0;

    for(ll i=0;i<n;i++){
        ans+=abs(nums[i]-mid);
    }

    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}