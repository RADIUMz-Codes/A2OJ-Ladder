#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(int i=0;i<n;i++)
#define Fo(i,k,n) for(int i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define int long long
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define endl "\n"
#define sp(n) fixed<<setprecision(n)
#define countBits(x) __builtin_popcount(x)
#define ctz(x) __builtin_ctz(x)// no. of unset bits before first setBit
typedef pair<int, int>	pii;
typedef vector<int>		vi;
typedef vector<pii>		vpii;
typedef vector<vi>		vvi;
const int mod = 1'000'000'007;
vector<int> sieve(int n) {int*arr = new int[n + 1](); vector<int> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = (i * i); j <= n; j += i)arr[j] = 1;} return vect;}
int mpow(int base, int exp) {base %= mod;int result = 1;while (exp > 0) {if (exp & 1) result = (result * base) % mod;base = (base * base) % mod;exp >>= 1;}return result;}
int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

void solve(){
    vvi h;
    fo(i,5){
        vi row;
        fo(j,5){
            int x;
            cin>>x;
            row.pb(x);
        }
        h.pb(row);
    }
    vi a{0,1,2,3,4};

    vvi p;

    int c=0;
    do{
        p.pb(a);
    }while(next_permutation(all(a)));
    int maxi=0;
    for(auto x:p){
        int sum = 0;
        fo(i,4){
            sum+= h[x[i]][x[i+1]] + h[x[i+1]][x[i]];

            if(i+4<=5){
                sum += h[x[i+2]][x[i+3]] + h[x[i+3]][x[i+2]];
            }
        }
        maxi = max(maxi,sum);

    }
    cout<< maxi;
    

}

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t=1;
    // cin>>t;
    while (t--)
    {
        solve();
    }   
}

