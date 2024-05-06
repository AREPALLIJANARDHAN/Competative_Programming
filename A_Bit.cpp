#include<bits/stdc++.h>
using namespace std;
int main(){
    int noOfInputs;
    int x=0;
    cin >> noOfInputs;
   while(noOfInputs--){
    string s;
    cin>> s;
     if(s[0]== '+' || s[1]=='+') x=x+1;
     if(s[0]== '-' || s[1]=='-') x=x-1;
   }
   cout<<x<<endl;
   return 0;
}