/** Date : 08-10-25
 * Author : Fahim uddin Mukim
 * problem link: https://codeforces.com/problemset/problem/1877/A
 */
//  duita value dea ache  arekta ber korte hobe.. so 
//                                                     // #a+b+x=0;
//                                                     // x=-(a+b);
#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        for(int i = 0; i < n - 1; i++){
            int x;
            cin >> x;
            sum += x;
        }
        cout <<-sum <<endl;
    }
    return 0;
}



