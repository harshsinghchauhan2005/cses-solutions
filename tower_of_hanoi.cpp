#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void func(ll n,ll s,ll m,ll d){
    if(n==1){
        cout<<s<<" "<<d<<'\n';
    }
    else{
        func(n-1,s,d,m);
        cout<<s<<" "<<d<<'\n';
        func(n-1,m,s,d);
    }
}

void solve(){
    ll n;
    cin>>n;
    
    cout<<pow(2,n)-1<<'\n';

    func(n,1,2,3);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}