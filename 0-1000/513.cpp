#include <bits/stdc++.h>
#define ll long long
using namespace std; 
int main (){ 
	ll n, m, ans, i;
	cin >> n >> m;
	if(n >= m){
		ans = 0;
	}
	else{
		for(ans = i = 1; i <= n; i++){
			ans = (ans * i) % m;
		}
	}
	
	cout << ans;
	
}