/** Date : 01-10-25
 * Author : Fahim uddin Mukim
 * problem link:https://codeforces.com/problemset/problem/1900/A
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool lagatar_3taspace = false;
        int total_dot = 0;
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] == '.' & (s[i - 1] == '.' & s[i + 1] == '.'))
            {
                lagatar_3taspace = true;
                break;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '.')
            {
                total_dot++;
            }
        }
        if (lagatar_3taspace == true)
        {
            cout << "2" << endl;
        }
        else
            cout << total_dot << endl;
    }

    return 0;
}