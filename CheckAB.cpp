//Check AB
//Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive function that checks if the string was generated using the following rules:
//a. The string begins with an 'a'
//b. Each 'a' is followed by nothing or an 'a' or "bb"
//c. Each "bb" is followed by nothing or an 'a'
//If all the rules are followed by the given string, return true otherwise return false.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool checkAB(char input[]) {
	
	if(input[0]=='\0'){
		return true;
	}
	
	if(input[0]=='a'){
		
	if(strlen(input+1)>1&&input[1]=='b'&&input[2]=='b'){
		checkAB(input+3);
	}
	else{
		checkAB(input+1);	
	}
	
	}
	else return false;
}
int main(){
	char s[100];
	cin>>s;
	cout<<checkAB(s);
	return 0;
}
