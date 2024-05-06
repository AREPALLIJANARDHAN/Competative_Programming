#include <bits/stdc++.h>
using namespace std;
int main(){
     string one ;
     string two;
     cin >> one >> two;
      for(int i=0;i<one.length();i++){
        if(one[i]>='A' && one[i]<='Z') one[i]+=32;
      }
        for(int i=0;i<two.length();i++){
        if(two[i]>='A' && two[i]<='Z') two[i]+=32;
      }
      //cout<< one <<two <<endl;
     int i=0;
     while (i<one.length()){
        if(one[i]> two[i]) {
            cout<<1<<endl;
            return 0;
        }
        else if(one[i] < two[i]){
             cout<<-1<<endl;
            return 0;
          }
        i++;
     }
     cout<< 0 <<endl;
    return 0;
}