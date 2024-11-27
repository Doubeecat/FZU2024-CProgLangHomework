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
const int N = 10;
int a[N][N],n,m,ans[N];

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);//cout.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;++i) {
        for (int j = 1; j <= m;++j) {
            cin >> a[i][j];ans[i] += a[i][j];
        }
    }
    for (int i = 1;i <= n;++i) {
        cout << ans[i] << "\n";
    }
    return 0;
}