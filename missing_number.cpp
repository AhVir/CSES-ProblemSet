#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> flag(n, 0);
    
    for(int i=0; i<n-1; i++){
        int temp; cin >> temp;
        flag[temp-1] = 1;
    }
    
    for(int i=0; i<n; i++){
        if(flag[i] == 0){
            cout << i+1 << endl;
            return 0;
        }
    }

    return 0;
}
