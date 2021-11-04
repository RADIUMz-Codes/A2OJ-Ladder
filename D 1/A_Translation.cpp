#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    for (ll i = 0, j = a.size() - 1; i < j; i++, j--)
    {
        char c = a[i];
        a[i] = a[j];
        a[j] = c;
    }
    if (a == b)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}