#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl "\n"

int main() {

int n;
cin >> n;
while(n--){
    ll x;
    ll ans=1;
    cin>>x;
    for(int i=2;i<=x;++i){
        ans=ans*i;
        
    }
    cout<<ans<<endl; 
}

return 0;
}