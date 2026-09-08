#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(){
    ll n;
    cin>>n;

    set<ll> st;

    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        st.insert(ele);
    }

    cout<<st.size()<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}