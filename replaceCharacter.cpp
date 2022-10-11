#include <iostream>
#include <bits/stdc++.h>
using namespace std; 
// Function to replace all occurrences
// of character c1 with character c2
void replaceCharacter(char in[],
                    char c1, char c2)
{
	if(in[0]=='\0'){
		return;
	}
	if(in[0]==c1){
		in[0]=c2;
	}
	replaceCharacter(in+1,c1,c2);
	
}

int main(){
	char in[100],c1,c2;
	cin>>in>>c1>>c2;
	replaceCharacter(in,c1,c2);
	cout<<in;
	return 0;
}
