#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n,x;
    cin>>n>>x;

    vll nums(n);
    for(auto &ele:nums) cin>>ele;

    map<ll,ll> mpp;
    mpp[0]=1;

    ll sum=0;
    ll ans=0;
    for(int i=1;i<=n;i++){
        sum+=nums[i-1];
        if(mpp.find(sum-x)!=mpp.end()){
            ans+=mpp[sum-x];
        }

        mpp[sum]++;
    }

    cout<<ans<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}