#include <bits/stdc++.h>
#define ll long long
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	string str;
	cin >> str;
	int sum = 0;
	
	for(int i = 0; i < str.length(); i++){
		int num = str[i] - '0';
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