#include <bits/stdc++.h>
using namespace std; 

int sumOfDigits(int a){
	int sum = 0;
	while(a != 0){
		int q = a % 10;
		sum += q;
		a /= 10;
	}
	
	return sum;
}

int main() { 
	int n;
	cin >> n;
	int *arr = new int[n];
	long long min = 100000000000000;
	int minIndex = 0;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] == 0){
			cout << 0;
			return 0;
		}
		int temp_res = sumOfDigits(arr[i]);
		if(min >= temp_res){
			min = temp_res;
			minIndex = i;
		}
	}
	
	cout << arr[minIndex];
	
}