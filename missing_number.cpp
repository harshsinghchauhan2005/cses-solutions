#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin>>n;

    ll sum=0;

    for(int i=1;i<n;i++){
        int ele;
        cin>>ele;
        sum+=ele;
    }

    ll ans=n*(n+1)/2-sum;

    cout<<ans<<'\n';

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}