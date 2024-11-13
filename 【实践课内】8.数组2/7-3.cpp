/*
Undo the destiny.
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FO(x) {freopen(#x".in","r",stdin);freopen(#x".out","w",stdout);}
#define pii pair<int,int>
#define pll pair<ll,ll>
#define mp make_pair
const int N = 1e3 + 10;
int a[N][N],n;

void solve() {
    cin >> n;
    for (int i = 1;i <= n;++i) {
        for (int j = 1;j <= n;++j) {
            cin >> a[i][j];
        }
    }
    bool flag = 0;
    for (int i = 2;i <= n;++i) {
        for (int j = 1;j < i;++j) {
            flag |= (a[i][j] != 0);
        }
    }
    if (flag) cout << "NO\n";
    else cout << "YES\n";
}


signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);//cout.tie(0);
    int T;cin >> T;
    while (T--) solve();
    return 0;
}