#include<bits/stdc++.h>
using namespace std;

typedef string s;
typedef vector<s> vs;

void solve(){
    s str;
    cin>>str;

    sort(str.begin(),str.end());

    vs permutations;

    do{
        permutations.push_back(str);
    } while(next_permutation(str.begin(),str.end()));

    cout<<permutations.size()<<'\n';
    for(auto it:permutations){
        cout<<it<<'\n';
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}