#include<bits/stdc++.h>
using namespace std;

int main(){
    int test ;
    cin >> test;
    while(test--){
    int a, b, c, d;
        cin >> a >> b >> c >> d;

        int count = 0;
        int f = min(a, b);
        int g = max(a, b);
        for(int i = f; i <= g; i++) {
            if(i == c || i == d) count++;
        }
        
        if(count == 1) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
    }
