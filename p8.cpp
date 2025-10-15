/** Date : 06-10-25
 * Author : Fahim uddin Mukim
 * problem link:https://codeforces.com/problemset/problem/1878/A
 */
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

     int t;
     cin>>t;
     while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        bool ache=false;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==k){
                ache=true;
            }
        }
        if(ache) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
     }

    return 0;
}