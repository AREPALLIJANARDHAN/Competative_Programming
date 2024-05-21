#include <bits/stdc++.h>
using namespace std;
string decode(string str){
     set <char > unique(str.begin(),str.end());
     string temp(unique.begin(),unique.end());
     sort(temp.begin(),temp.end());
   // just sort unique characters
   
   map<char, char> decode_map;
    int len = temp.size();
 
    for (int i = 0; i < len; ++i)
    {
        decode_map[temp[i]] = temp[len - 1 - i];
       // decode_map[temp[len - 1 - i]] = temp[i];
    }
 
    string s;
    for (char c : str)
    {
        s += decode_map[c];
    }
 
    return s;
}

int main(){
     int t;
    cin >> t;
 
    while (t--)
    {
        int n;
        string b;
        cin >> n >> b;
 
        cout << decode(b) << endl;
       
}
 return 0;
}