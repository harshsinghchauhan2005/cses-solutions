#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vll;

void solve(){
    ll n,m;
    cin>>n>>m;

    multiset<ll> st;

    for(int i=0;i<n;i++){
        ll ele;
        cin>>ele;
        st.insert(ele);
    }

    for(int i=0;i<m;i++){
        int maxi;
        cin>>maxi;

        auto it=st.upper_bound(maxi);

        if(it==st.begin()){
            cout<<-1<<'\n';
        }
        else {
            it--;

            cout<<*it<<'\n';
            st.erase(it);
        }
    }
    cout<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}