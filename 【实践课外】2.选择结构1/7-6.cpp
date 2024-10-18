/*
Undo the destiny.
*/
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cassert>
#include <cstring>
#include <cstdio>
#include <cctype>
#include <vector>
#include <cmath>
#include <queue>
using namespace std;
#define ll long long
#define FO(x) {freopen(#x".in","r",stdin);freopen(#x".out","w",stdout);}
#define pii pair<int,int>
#define mp make_pair

const ll mod = 998244353;
const double eps = 1e-10;
const int N = 110;

int sgn(double x) {
    if (fabs(x) < eps) return 0;
    return x > 0 ? 1 : -1;
}

struct point {
    int x,y;
    friend point operator - (const point &a,const point &b) {
        point c;
        c.x = a.x - b.x;
        c.y = a.y - b.y;
        return c;
    }
    friend double operator * (const point &a,const point &b) {
        double ans = (double)a.x * b.x + a.y * b.y;
        return ans;
    }
    friend double operator ^ (const point &a,const point &b) {
        return (double)a.x * b.y - b.x * a.y;
    }
}P[N];

double len(point a) {
    return sqrt(a*a);
}

double area(point a,point b,point c) {
    return (double)fabs((b-a) ^ (c-a)) / 2.0;
}

bool judge(point a,point b,point c) {
    return !sgn((b-a) ^ (c-b));
}
int n;
 
void solve() {
    cin >> P[1].x >> P[1].y >> P[2].x >> P[2].y >> P[3].x >> P[3].y;
    cin >> n;
    for (int i = 1;i <= n;++i) cin >> P[i].x >> P[i].y;
    bool flag = 0;
    double ans = 1e18;
    if (!judge(P[1],P[2],P[3])) {
    ans = area(P[1],P[2],P[3]);
        flag = 1;
    }

    double L = len(P[1]-P[2]) + len(P[2]-P[3]) + len(P[1] - P[3]);
    if (!flag) cout << "Impossible\n";
    else cout << fixed << setprecision(2) << "L = " << L << ", A = " << ans << "\n";
} 

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(0);//cout.tie(0);
    solve();
    return 0;
}