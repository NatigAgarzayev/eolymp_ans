#include <bits/stdc++.h>
using namespace std; 
int main (){ 
	string str;
	cin >> str;
	int res = 0;
	for(int i = 1; i < str.length(); i++){
		if(str[i] == '+' or str[i] == '-' or str[i] == '*'){
			res++;
		}
	}
	cout << res;
}