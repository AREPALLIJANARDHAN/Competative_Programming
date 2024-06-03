#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i=0;i<n;i++){
			cin >> a[i];
		}
		vector<int> b(n+1);
		for(int i=0;i<=n;i++){
			cin >> b[i];
		}
		int flag=0;
		for(int i=0;i<n;i++){
			if((b[n]>=a[i]&&b[n]<=b[i])||(b[n]<=a[i]&&b[n]>=b[i])){
				flag=1;
				break;
			}
		}
		long long sum=0;
		for(int i=0;i<n;i++){
			sum += (abs(a[i]-b[i]));
		}
		if(flag==1){
			cout << sum + 1 << endl;
		}
		else{
			int mi=INT_MAX;
			for(int i=0;i<n;i++){
				mi = min(mi,(abs(b[n]-a[i])));
			}
			for(int i=0;i<n;i++){
				mi = min(mi,(abs(b[n]-b[i])));
			}
			cout << sum + mi + 1 << endl;
		}	
	}
}