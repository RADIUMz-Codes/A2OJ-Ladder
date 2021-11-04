#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t, count0 = 0, count5 = 0;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n == 5)
            count5++;
        else
            count0++;
    }
    if (count0 == 0)
        cout << "-1\n";
    else if (count5 == 0)
        cout << "0\n";
    else
    {
        ll c = floor(count5 / 9);
        if (c == 0)
            cout << "0\n";
        else
        {
            while (c--)
                cout << "555555555";
            while (count0--)
                cout << "0";
        }
        cout << "\n";
    }
    return 0;
}