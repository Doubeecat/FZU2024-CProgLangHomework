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
const int N = 2e3 + 10;
int a[N][N],n,m;
const int dx[4] = {0,1,0,-1};
const int dy[4] = {1,0,-1,0};
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);//cout.tie(0);
    cin >> n >> m;
    for (int i = 1;i <= n;++i) {
        for (int j = 1;j <= m;++j) {
            cin >> a[i][j];
        }
    }
    bool cnt = 0;
    for (int i = 2;i < n;++i) {
        for (int j = 2;j < m;++j) {
            bool flag = 1;            
            for (int k = 0;k < 4;++k) {
                int nx = i + dx[k],ny = j + dy[k];
                if (a[i][j] <= a[nx][ny]) {
                    flag = 0;
                    
                }
            }
            if (flag) {
                cnt = 1;
                cout << a[i][j] << " " << i << " " << j << "\n";
            }
        }
    }
    if (!cnt) {
        cout << "None " << n << " " << m;
    }
    return 0;
}