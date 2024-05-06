#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>> test;
    while(test>0){
        int n;
        cin>> n;
        int arr[n];
        for(int i=1;i<=n;i++){
            int ele;
            cin>> ele;
            arr[i]=ele;
        }
         int count=0;
          for(int i=1;i<=n;i++){
            if(arr[i]+1==i){
                count++;
            }
          }
        cout << count << endl;
        test=test-1;
    }
     return 0;
}