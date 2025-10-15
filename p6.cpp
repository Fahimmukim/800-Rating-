/** Date : 04-10-25
 * Author : Fahim uddin Mukim
 * problem link: https://codeforces.com/problemset/problem/1890/A
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
        vector<int> arr(n);
        unordered_map<int, int> freq;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }

        if (freq.size() > 2)
        {
            cout << "No" << endl;
            continue;
        }
        if (freq.size() == 1)
        {
            cout << "Yes" << endl;
            continue;
        }

        auto it = freq.begin();
        int cnt1 = it->second;
        it++;
        int cnt2 = it->second;
        if (abs(cnt1 - cnt2) <= 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }

    return 0;
}
