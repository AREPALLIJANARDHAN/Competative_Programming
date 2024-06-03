#include<bits/stdc++.h>
using namespace std;
void solve (){
   int size;
   cin >> size;
   int arr[size];
   unordered_map <int ,int > mp;
   for(int i=0;i<size;i++){
        cin >> arr[i];
        mp[arr[i]]++;
   }
   if(mp.size()>2){
    cout << "No\n";
   }
   else if(mp.size() < 2) cout <<"Yes\n";
   else{
                int value1 = -1;
                int value2 = -1;
 
                for(auto & freq : mp) {
 
                    if(value1 == -1) value1 = freq.second;

                    value2 = freq.second;
                    cout << value1 << "       "<< value2;
                }
 
                if(abs(value2-value1) <= 1) cout <<"Yes\n";
                else cout<<"No\n";
   }
   return ;
}
int main(){
    int test ;
    cin >> test;
    while(test--){
    solve ();
    }
}