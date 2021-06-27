#include    <bits/stdc++.h>
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
#define __unique(V) (V).resize(unique((V).begin(),(V).end())-(V).begin())
#define cntbit(X)   __builtin_popcount((X))
#define bit(S,i) (((S)>>(i))&1)
#define PI	acos(-1)
#define fi  first
#define se  second
#define LL  long long
#define ii  pair<int,int>
#define iii pair<int,ii>
#define eb  emplace_back
#define TASK "start"
using namespace std;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
///--------------------------
int     main(){
    ///
        srand(time(NULL));
        ios::sync_with_stdio(0);
        cin.tie(0);cout.tie(0);
        #ifndef ONLINE_JUDGE
            freopen(TASK".inp", "r", stdin);
        #endif // ONLINE_JUDGE
    ///
    int a = 5, b = 6;
    int ans = 0;
    for(int x = a + 10; x <= 12345; ++x)
        for(int y = a + 20; y <= 12345 - x - 2 * b - 70; ++y)
            for(int z = b + 30; z <= 12345 - x - y - b - 40; ++z)  ans++;
    cout << ans << '\n';
}




