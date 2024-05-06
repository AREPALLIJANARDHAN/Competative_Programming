#include <iostream>
using namespace std;
int main(){
    int row=0;
    int col=0;
    int arr[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin >>arr[i][j];
            if(arr[i][j]==1){
                row=i;
                col=j;
            } 
        }
    }
    int steps=0;
    if(row<2) 
    {
        int val=abs(row-2);
        steps+=val;
    }
    else if(row>2){
        int val=abs(row-2);
        steps+=val;
    }
   if(col<2) 
    {
        int val=abs(col-2);
        steps+=val;
    }
    else if(col>2){
        int val=abs(col-2);
        steps+=val;
    }
    cout<<steps<<endl;
    return 0;
}