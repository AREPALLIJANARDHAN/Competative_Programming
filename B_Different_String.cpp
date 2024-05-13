#include<bits/stdc++.h>
using namespace std;
void solve (){
    string name ;
    cin >> name;
    int n=name.length();
    for(int i=0;i<n-1;i++){
        if(name[i]!=name[i+1]){
            char temp=name[i+1];
            name[i+1]=name[i];
            name[i]=temp;
            cout << "YES"<<'\n';
            cout << name<<'\n';
           
            return ;
        }

    }
    cout<< "NO"<<'\n';
    return ;
}
int main(){
    int test ;
    cin >> test;
    while(test--){
    solve ();
    }
}