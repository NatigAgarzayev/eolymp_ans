#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(int argc, char** argv) {
	string str;
	cin >> str;
	int sum = 0;
	
	for(int i = 0; i < str.length(); i++){
		sum += stoi(string(1, str[i]));
	}
	
	if(sum % 3 == 0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

	return 0;
}