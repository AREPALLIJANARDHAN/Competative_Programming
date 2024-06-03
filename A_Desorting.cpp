#include<bits/stdc++.h>
using namespace std;
void solve (){
   int size;
   cin >> size;
    int prev=-1;
    int min_value=INT_MAX;
   int first=0;
   int second=0;
    for(int i=0;i<size;i++){
        int ele;
        cin >> ele;
       if(i==0) prev=ele;
        if(i>0){
            int diff=ele-prev;
             if (min_value > diff) {
                first=prev;
                second=ele;
                min_value=diff;
            }
            prev=ele;
        }
    }
    int res=second - first ;

if(res<0) cout << 0 <<'\n';
else cout <<(res)/2 + 1 << '\n';
return ;
}
int main(){
    int test ;
    cin >> test;
    while(test--){
    solve ();
    }
}