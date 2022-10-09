//all indices
#include <iostream>
#include <vector>
using namespace std;
int j=0,final=0;
int allIndexes(int input[], int size, int x, int output[]) {
	if(j==size){
		return final;
	}
	if(input[j]==x){
		output[final]=j;
		final++;
	
	}
		j++;
	allIndexes(input, size, x, output);
	
}
int main(){
	int arr[100],i,n,x,out[100];
	cin>>n;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>x;
	int s = allIndexes(arr,n,x,out);
	for(i=0;i<s;i++){
		cout<<out[i]<<" ";
	}
	return 0;
}
