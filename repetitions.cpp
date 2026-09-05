#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef string s;

void solve(){
    s str;
    cin>>str;

    ll maxi=1;
    ll count=1;

    for(int i=1;i<str.size()-1;i++){
        if(str[i]!=str[i-1]){
            maxi=max(maxi,count);
            count=1;
        }
        count++;
    }

    cout<<maxi<<'\n';
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}