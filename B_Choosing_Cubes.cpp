#include <bits/stdc++.h>
using namespace std;

string helper(int n, int f, int k, vector<int>& a) {
    int favV = a[f - 1]; 
    sort(a.begin(), a.end(), greater<int>());

    int favC = 0;
    for(auto &val:a){
        if(val==favV) favC++;
    }
    int favK = 0;
    for(int i=0;i<k;i++){
        if(a[i]==favV) favK++;
    }
    if (favK == 0) {
        return "NO";
    } else if (favK == favC) {
        return "YES";
    } else {
        return "MAYBE";
    }
}

int main() {
    int t;
    cin >> t; 
    
   while(t--){
        int n, f, k;
        cin >> n >> f >> k;
        vector<int> a(n);
        for (int j = 0; j < n; j++) {
            cin >> a[j];
        }
         cout << helper(n, f, k, a)<<'\n';
  
    }
    
    return 0;
}
