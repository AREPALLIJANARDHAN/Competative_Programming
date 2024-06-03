#include<bits/stdc++.h>
using namespace std;
#define int long long
signed main(){
	int t;
	cin >> t;
    while(t--){
    int n;
    cin >> n;
    vector <int > v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    vector<int > h;
    for(int i=1;i<n;i++){
        int g=__gcd(v[i],v[i-1]);
        h.push_back(g);
    }
    bool flag =false;
    for(int i=0;i<h.size();i++){
        vector <int > temp;
        for(int j=0;j<h.size();j++){
            if(i!=j){
               temp.push_back(h[j]);
            }
        }
       if(is_sorted(temp.begin(),temp.end())) {
        flag =true;
        break;
       }
    }
    if(flag==true) cout << "YES\n";
    else cout <<"NO\n";
    }
    return 0;
}