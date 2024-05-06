#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n; 
    int countOfSolvingProblems=0;
    while(n--){
        int sum=0;
        for(int i=0;i<3;i++){
            int mem;
         cin>>  mem;
        sum=sum+mem;
        }
        if(sum>=2){
            countOfSolvingProblems++;
        }

    }
    cout<< countOfSolvingProblems<<endl;
    return 0;
}