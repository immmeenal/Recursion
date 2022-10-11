#include <iostream>
using namespace std;
int lengthi(char s[]){
	if(s[0]=='\0'){
		return 0;
	}
	
	int j = lengthi(s+1);
	return 1+j;
}


int main(){
	char s[100];
	cin>>s;
	cout<<lengthi(s);
}
