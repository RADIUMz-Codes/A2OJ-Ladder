#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (int i = 0; i < n; i++)
#define Fo(i, k, n) for (int i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define int long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define endl "\n"
#define sp(n) fixed << setprecision(n)
#define countBits(x) __builtin_popcount(x)
#define ctz(x) __builtin_ctz(x) // no. of unset bits before first setBit
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<vi> vvi;
const int mod = 1'000'000'007;
vector<int> sieve(int n)
{
    int *arr = new int[n + 1]();
    vector<int> vect;
    for (int i = 2; i <= n; i++)
        if (arr[i] == 0)
        {
            vect.push_back(i);
            for (int j = (i * i); j <= n; j += i)
                arr[j] = 1;
        }
    return vect;
}
int mpow(int base, int exp)
{
    base %= mod;
    int result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}
int mod_add(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a + b) % m) + m) % m;
}
int mod_mul(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a * b) % m) + m) % m;
}
int mod_sub(int a, int b, int m)
{
    a = a % m;
    b = b % m;
    return (((a - b) % m) + m) % m;
}

void path(map<char, int> &m, int x1, int x2, int y1, int y2)
{
    if (x1 <= x2)
    {
        m['E'] = x2 - x1;
    }
    else
    {
        m['W'] = x1 - x2;
    }

    if (y1 <= y2)
    {
        m['N'] = y2 - y1;
    }
    else
    {
        m['S'] = y1 - y2;
    }
}

void solve()
{
    int t, x1, x2, y1, y2;
    cin >> t >> x1 >> y1 >> x2 >> y2;
    string s;
    cin >> s;
    int l = abs(x1 - x2) + abs(y1 - y2);
    if (t < l)
    {
        cout << -1;
        return;
    }
    map<char, int> m;
    int time=0;
    path(m, x1, x2, y1, y2);
    for (auto x : s)
    {
        if(l== 0) break;
        if (m.find(x) != m.end())
        {
            if (m[x] > 0)
            {
                m[x]--;
                l--;
            }
        }
        time++;
    }
    if(l==0){
        cout<<time;
    }
    else{
        cout<<-1;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
