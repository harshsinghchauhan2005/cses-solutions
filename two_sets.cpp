#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n;
    cin>>n;

    ll sum=n*(n+1)/2;

    if(sum%2!=0){
        cout<<"NO"<<'\n';
        return;
    }

    vll s1,s2;

    ll target=sum/2;

    for(ll i=n;i>=1;i--){
        if(i<=target){
            s1.push_back(i);
            target-=i;
        }
        else s2.push_back(i);
    }

    cout<<"YES"<<'\n';

    cout<<s1.size()<<'\n';
    for(auto it:s1){
        cout<<it<<" ";
    }
    cout<<'\n';

    cout<<s2.size()<<'\n';
    for(auto it:s2){
        cout<<it<<" ";
    }
    cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();

    return 0;
}