#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n, m, currPos = 1, count = 0;
    cin >> n >> m;
    vector<ll> v(m);
    for (auto &i : v)
        cin >> i;
    for (auto i : v)
    {
        if (i >= currPos)
            count += i - currPos;
        else
            count += n - (currPos - i);
        currPos = i;
    }
    cout << count << "\n";
    return 0;
}