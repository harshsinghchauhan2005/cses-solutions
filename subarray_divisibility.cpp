#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n;
    cin>>n;

    vll nums(n);
    for(auto &ele:nums) cin>>ele;

    map<ll,ll> mpp;
    mpp[0]++;

    ll sum=0;
    for(int i=1;i<=n;i++){
        sum+=nums[i-1];
        mpp[((sum%n)+n)%n]++;
    }

    ll ans=0;
    for(auto it:mpp){
        ans+=((it.second)*(it.second-1))/2;
    }

    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}