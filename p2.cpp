/** Date : 30-9-25
 * Author : Fahim uddin Mukim
 * problem link:https://codeforces.com/problemset/problem/1901/A
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
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max_dis = arr[0];

        for (int i = 0; i < n - 1; i++)
        {
            max_dis = max(max_dis, (arr[i + 1] - arr[i]));
        }
      
        int last_dis=(k-arr[n-1])*2;
        max_dis=max(max_dis,last_dis);

        cout << max_dis << endl;
    }

    return 0;
}