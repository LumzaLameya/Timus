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

double x[100],y[100];
double border(int i,int j)
{
    return sqrt( ( x[i] - x[j] ) * ( x[i] - x[j] )
                + ( y[i] - y[j] ) * ( y[i] - y[j] ) );
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    ll n;
    double r;
    cin >> n >> r;
    
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    double c= 2*acos(-1.0)*r + border(n-1,0);

    for(int i=1;i<n;i++)
    {
        c+=border(i-1,i);
    }

    cout<<setprecision(2)<<fixed<<c<<endl;
    return 0;
}
