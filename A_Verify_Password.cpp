#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin >> test;
    while(test--){
            int len;
            cin >> len;
            string s;
            cin >> s;
            vector< char> v1;
            vector<char > v2;
            int n=s.length();
            bool start=false;
            int idx=0;
            for(int i=0;i<n;i++){
                    if(s[i]>='0' && s[i]<='9'){
                        v1.push_back(s[i]);
                    }
                    if(s[i]>='a' && s[i]<='z'){
                        idx=i;
                        break;
                    }
            }
            bool checking=true;
             for(int i=idx;i<n;i++){
                    if(s[i]>='a' && s[i]<='z'){
                       start=true;
                       v2.push_back(s[i]);
                    }
                    if(s[i]>='0' && s[i]<='9' && start==true){
                        checking=false;
                        break;
                    }
            }
            if(checking==false) cout << "NO"<<'\n';
            else {
                if(is_sorted(v1.begin(),v1.end())  && is_sorted(v2.begin(),v2.end())) cout<<"YES"<<'\n';
                else cout<<"NO\n";
            }

    }
       
    return 0;

}