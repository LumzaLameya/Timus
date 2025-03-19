#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi(v)          \
    for (auto &it : v) \
        cin >> it;
#define vo(v)              \
    for (auto it : v)      \
        cout << it << " "; \
    cout << endl;
#define yout cout << "YES" << endl;
#define nout cout << "NO" << endl;
#define org(v) sort(v.begin(), v.end());
#define rorg(v) sort(v.rbegin(), v.rend());
#define rvr(v) reverse(v.begin(), v.end());

int gcd(int x, int y)
{
    if (x % y == 0)
        return y;
    else
        return gcd(y, x % y);
}

int lcm(int x, int y)
{
    return x * y / gcd(x, y);
}

const ll mod = 1e9;
const int N = 2e6 + 5;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    vector<int> a(n);
    int sum = 0, ans = 1 << 30, c, x;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < (1 << n); i++)
    {
        c = 0;
        for (int j = 0; j < n; j++)
        {
            //for combination
            if (i & (1 << j))
                c += a[j];
        }
        // x = abs(c - (sum - c));
        //  one pile c, another pile sum-c
        x = abs(2 * c - sum);
        ans = min(x, ans);
    }
    cout << ans << endl;
    return 0;
}
