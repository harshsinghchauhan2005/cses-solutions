#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n;
    cin>>n;

    vll nums(n);
    for(auto &ele:nums) cin>>ele;

    ll count=0;

    for(int i=1;i<n;i++){
        if(nums[i]<nums[i-1]){
            count+=(nums[i-1]-nums[i]);
            nums[i]=nums[i-1];
        }
    }

    cout<<count<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}