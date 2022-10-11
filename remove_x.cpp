#include <iostream>
using namespace std;
void remove(char s[]){
	if(s[0]=='\0'){
		return;
	}
	if(s[0]!='x'){
		remove(s+1);
	}
	else{
		int i=1;
		for(;s[i]!='\0';i++){
			s[i-1]=s[i];
		}
		s[i-1]=s[i];
		remove(s);
	}
}

int main(){
	char s[100];
	cin>>s;
	remove(s);
	cout<<s;
	
	return 0;
}
