#include<bits/stdc++.h>
using namespace std;

#define for(n) for(int i = 0; i < n; i++)

int main(){
	int n;
	cin >> n;
	double *arr = new double[n];
	
	for(n){
		cin >> arr[i];
		if(arr[i] < 0) arr[i] = abs(arr[i]);
	}
	
	cout << fixed << setprecision(2) << *max_element(arr, arr + n) << endl;
}