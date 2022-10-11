#include <iostream>
#include <bits/stdc++.h>
//not completed yet
using namespace std;
void Tshirt(char first[],char second[],int p1x,int p2x,	char c1, char c2){
	int p1 = sizeof(first)/sizeof(*first);
	int p2 = sizeof(second)/sizeof(*second);

	if(first[0]=='\0' && second[0]=='\0'){
	
		if(c1>c2){
			cout<<"<";
		}
		else if(c1<c2){
			cout<<">";
		}
		else if(c1==c2){
			if(c1=='l'){
				if(p1x>p2x){
					cout<<">";
				}
				else if(p1x<p2x){
					cout<<"<";
				}
				else{
					cout<<"=";
				}
			}
				if(c1=='s'){
				if(p1x>p2x){
					cout<<"<";
				}
				else if(p1x<p2x) {
					cout<<">";
				}
				else{
					cout<<"=";
				}
			}
			if(c1=='m'){
				if(p1x>p2x){
					cout<<"<";
				}
				else if(p1x<p2x) {
					cout<<">";
				}
				else{
					cout<<"=";
				}
			}
		}
	}
	
	if(first[0]!='\0' && second[0]!='\0'){
		
			if(first[0]=='x'){
				p1x++;
			}
			if(second[0]=='x'){
				p2x++;
			}
			if(first[0]=='s'){
				c1='s';
			}
			else if(first[0]=='m'){
				c1='m';
			}
			else if(first[0]=='l'){
				c1='l';
			}
			if(second[0]=='s'){
				c2='s';
			}
			else if(second[0]=='m'){
				c2='m';
			}
			else if(second[0]=='l'){
				c2='l';
			}
			
		
	}
	if(first[0]!='\0'){
		
			if(first[0]=='x'){
				p1x++;
			}
			if(first[0]=='s'){
				c1='s';
			}
			else if(first[0]=='m'){
				c1='m';
			}
			else if(first[0]=='l'){
				c1='l';
			}
	}
		if(second[0]!='\0'){
		
			if(second[0]=='x'){
				p2x++;
			}
			if(second[0]=='s'){
				c2='s';
			}
			else if(second[0]=='m'){
				c2='m';
			}
			else if(second[0]=='l'){
				c2='l';
			}
	}
	Tshirt(first+1,second+1,p1x,p2x, c1,c2);
	
}



int main(){
	int t;
	char c1,c2;
	cin>>t;
	while(t--){
	char first[100],second[100];
	cin>>first;
	cin>>second;
	Tshirt(first,second,0,0,c1,c2);
	}
	return 0;
}

