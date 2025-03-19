#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define vi(v) for (auto &it : v) cin >> it;
#define vo(v) for (auto it : v) cout << it << " "; cout << endl;
#define yout cout << "YES" << endl;
#define nout cout << "NO" << endl;
#define org(v) sort(v.begin(), v.end());
#define rorg(v) sort(v.rbegin(), v.rend());
#define rvr(v) reverse(v.begin(), v.end());
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / __gcd(a, b)))
const ll mod = 1e9;
const int N = 2e6+5;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    vector<ll>v;
    ll a;
    while(scanf("%lld",&a)!=EOF)
    {
        v.push_back(a);
        //cout<<a<<endl;
    }
    for(int i=v.size()-1;i>=0;i--)
    {
        //cout<<v[i]<<endl;
        printf("%.4lf\n",sqrt(v[i]));
    }
}
