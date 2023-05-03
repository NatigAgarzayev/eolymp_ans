#include<bits/stdc++.h>
using namespace std;

int findNecessaryNum(int num){
	int max = 0;
	while(num != 0){
		int q = num % 10;
		if(q > max){
			max = q;
		}
		num /= 10;
	}
	return max;
}

int main(){
	int n;
	cin >> n;
	int steps = 0;
	while(n != 0){
		n -= findNecessaryNum(n);
		steps++;
	}
	cout << steps << endl;
    return 0;
}
