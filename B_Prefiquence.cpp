#include <iostream>
#include <string>
using namespace std;

int main() {
    long long test;
    cin>> test;
    long long  n,m,ans=0,j=0;
    cin>>n>>m;
    string a,b;
    cin>>a;
    cin>>b;
    while (test--){
    for(int i=0;i<n&&j<m;)
    {
        if(a[i]==b[j])i++,j++,ans++;
        else j++;
    }
    cout<<ans<<endl;
    
}
   
   
return 0;
}

