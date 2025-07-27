#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    string str; cin >> str;
    int n = str.length();
    int cnt = 1;
    
    for(int i=0; i<n-1; i++){
        if(str[i] == str[i+1]){
            int temp = 2;
            char st = str[i];
            int start = i+2;
            while(start < n && str[start] == st){
                temp++;
                start++;
            }
            cnt = max(cnt, temp);
            i = start-1;
        }
    }
    
    cout << cnt << endl;

    return 0;
}
