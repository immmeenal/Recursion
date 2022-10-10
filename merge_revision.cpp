#include <iostream>
using namespace std;

void merge(int p1[],int s1,int p2[],int s2,int arr[],int n){
	int i=0,j=0,k=0,temp;
	while(i<s1&&j<s2){
		if(p1[i]<p2[j]){
			arr[k++]=p1[i++];
		}
		else{
			arr[k++]=p2[j++];
		}
	}
	while(i<s1){
		arr[k++]=p1[i++];
	}
	while(j<s2){
		arr[k++]=p2[j++];
	}
}


void merge_sort(int arr[],int n){
	if(n==1){
		return;
	}
	int *p1 = new int[n/2];
	int s1= n/2;
	int *p2 = new int[n-(n/2)];
	int s2= n-(n/2);
	for(int i=0;i<s1;i++){
		p1[i]=arr[i];
	}
	int k=0;
	for(int i=s1;i<n;i++){
		p2[k++]=arr[i];
	}
	merge_sort(p1,s1);
		merge_sort(p2,s2);
		merge(p1,s1,p2,s2,arr,n);
		
}

int main(){
	int arr[100];
	int n;
	cin>>n;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	merge_sort(arr,n);
	for(int i =0;i<n;i++){
		cout<<arr[i];
	}
	
	
	
	return 0;
}
