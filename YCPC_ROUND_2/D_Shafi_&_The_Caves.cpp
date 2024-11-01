#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fst                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long 
#define endl '\n'
#define yes cout << "YES\n";
#define no cout << "NO\n";
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define e4 int32_t main()
#define Infinite void
#define PI 2.0 * acos(0.0)
using namespace std;
#ifdef LOKAL
#include "Debug_Template.h"
#else
#define HERE
#define debug(args...) 
#endif 
using namespace __gnu_pbds;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;

Infinite Void() {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0;
    bool ok = false;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        cin >> a[i];
        mp[a[i]]++; 
        mx = max(mx,a[i]);
        if(a[i] == 1) ok = true;
    }
    if(ok){
        cout << n << endl;
        return; 
    }
    ll ans = 1;
    for(ll i=0;i<n;i++){
        ll tmp = a[i],j = 1,cnt = 0;
        while(tmp <= mx){
            cnt += mp[tmp];
            j++;
            tmp = a[i] * j;
        }
        ans = max(ans,cnt);
    }
    cout << ans << endl;
}
e4{
    fst ll t = 1;
    cin >> t;
    for (ll i=1;i<=t;++i){
        // cout << "Case " << i << ": ";
        Void();
    }
    return 0;
}