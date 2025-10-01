/** Date : 29-9-25
 * Author : Fahim uddin Mukim
 * problem link:https://codeforces.com/problemset/problem/1903/A?mobile=true
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
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        vector<int> sortedarray(n);
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
            sortedarray[i] = arr[i];
        }
        sort(sortedarray.begin(), sortedarray.end());
        bool shoman = true;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != sortedarray[i])
            {
                shoman = false;
                break;
            }
        }
        if (shoman == true)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (k > 1)
            {
                cout << "YES" << endl;
            }
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}