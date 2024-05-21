#include <bits/stdc++.h>
using namespace std;
int screen(){
        int x;
        int y;
        cin >> x >> y;
       
        int remainingCellsAfter2 = 15 * ((y + 1) / 2)- 4 * y; 
        int remaining1 = x - remainingCellsAfter2;
   
        int screensFor1 = 0;
        if (remaining1 > 0) {
            screensFor1 = (remaining1 + 14) / 15; 
        }
        
        return  ((y + 1) / 2) + screensFor1;
    }

int main(){
    int test;
    cin >> test;
    while(test--){
      int num= screen();
      cout << num <<"\n";
    }
}