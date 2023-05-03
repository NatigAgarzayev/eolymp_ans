#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int *arr = new int[n];
	int max = -101;
	for(int i = 0; i < n; i++){
		cin >> arr[i];
		if(arr[i] > max){
			max = arr[i];
		}
	}
	for(int i = 0; i < n; i++){
		if(arr[i] != max){
			cout << arr[i] << " ";
		}
	}
	for(int i = 0; i < n; i++){
		if(arr[i] == max){
			cout << arr[i] << " ";
		}
	}
    return 0;
}
