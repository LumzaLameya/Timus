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

    ll n;
    cin >> n;
    
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    else if (n == 0)
    {
        cout << 10 << endl;
        return 0;
    }
    ll x = 9;
    vector<int> a;
    for (; x > 1; x--)
    {
        while (n % x == 0 && n > 1)
        {
            a.push_back(x);
            n /= x;
        }
    }
    if (n==1)
    {
        for (int i = a.size() - 1; i >= 0; i--)
            cout << a[i];
        cout << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}
