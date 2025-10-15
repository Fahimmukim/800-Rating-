/** Date : 11-10-25
 * Author : Fahim uddin Mukim
 * problem link:https://codeforces.com/problemset/problem/1866/A
 */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int mn = INT_MAX;
    bool zero = false;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0)
        {
            zero = true;
            break;
        }
        else
            mn = min(mn,abs(x));
    }
    if(zero) cout<<"0"<<endl;
    else cout<<mn<<endl;

    return 0;
}