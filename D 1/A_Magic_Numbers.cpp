#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    bool flag = true;
    cin >> s;
    for (ll i = 0; i < s.size() && flag; i++)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
            i += 2;
        else if (s[i] == '1' && s[i + 1] == '4')
            i += 1;
        else if (s[i] == '1')
            ;
        else
            flag = false;
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}