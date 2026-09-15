#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n,x;
    cin>>n>>x;

    vll nums(n);
    for(auto &ele:nums) cin>>ele;

    map<ll,ll> mpp; // Best is to sort(by making pair so that index dont changes) and use two pointer 

    for(ll i=0;i<n;i++){
        if(mpp.find(x-nums[i])!=mpp.end()){
            cout<<i+1<<" "<<mpp[x-nums[i]]+1<<'\n';
            return;
        }
        mpp[nums[i]]=i;
    }

    cout<<"IMPOSSIBLE"<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}