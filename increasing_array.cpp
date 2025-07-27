#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {
    int n; cin >> n;
    int cnt = 0;
    int prev;
    cin >> prev;
    
    for(int i=1; i<n; i++){
        int temp; cin >> temp;
        if(temp < prev){
            cnt += abs(prev-temp);
        }
        else prev = temp;
    }
    
    cout << cnt << endl;

    return 0;
}
