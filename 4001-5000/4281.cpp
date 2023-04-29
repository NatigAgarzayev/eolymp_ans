#include <iostream>
using namespace std; 
int main (){ 
	string s; 
	getline(cin, s); 
	for(int i=0; i<s.length(); i++){ 
		if(s[i] == tolower(s[i])){
			s[i] = toupper(s[i]);
		}
		else{
			s[i]=tolower(s[i]); 	
		}
		cout<<s[i]; 
	} 
}