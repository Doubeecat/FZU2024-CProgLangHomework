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
int n,buc[1010];
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);//cout.tie(0);
    cin >> n;
    for (int i = 1;i <= n;++i) {
        int k;cin >> k;
        while (k--) {
            int x;cin >> x;
            buc[x]++;
        }
    }
    int maxx = 0,cnt = 0;
    for (int i = 1;i <= 1000;++i) {
        if (buc[i] > maxx || (buc[i] == maxx)) {
            maxx = buc[i];cnt = i;
        }
    }
    cout << cnt << " " << maxx;
    return 0;
}