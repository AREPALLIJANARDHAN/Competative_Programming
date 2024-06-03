#include <bits/stdc++.h>
using namespace std;

int  main(){
    int test;
    cin >> test;
    while(test--){
        int n,m;
        cin >> n >> m;
        int freq[7]={0};
        for(int i=0;i<n;i++){
            char c;
            cin >> c;
            int num=c-'A';
            freq[num]++;
        }
        // for(auto &ele:freq){
        //     cout << ele <<"ele "<<'\n';
        // }
        int ans=0;
        for(int i=0;i<8;i++){
            if(freq[i]<m){
                ans+=m-freq[i];
            }
        }
        cout << ans <<'\n';

    }
    return 0;
}