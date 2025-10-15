/** Date : 12-10-25
 * Author : Fahim uddin Mukim
 * Problem link: https://codeforces.com/problemset/problem/1873/C
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
        char a[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> a[i][j];
            }
        }
        int total = 0;
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                if (a[i][j] == 'X')
                {
                    int ring = min({i, j, 9 - i, 9 - j}) + 1;
                    total += ring;
                }
            }
        }

        cout << total << endl;
    }
    return 0;
}
