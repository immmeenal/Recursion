#include<iostream>
#include<algorithm>
using namespace std;
void merge(int part1[],int s1,int part2[],int s2,int output[],int size){
	 int i=0;
    int j=0;
    int k=0;
    while(i<s1&&j<s2)
    {
        if(part1[i]<part2[j])
        {
            output[k++]=part1[i++];
        }
        else
        {
            output[k++]=part2[j++];
        }
    }
    while(j<s2)
    {
        output[k++]=part2[j++];
    }
    while(i<s1)
    {
        output[k++]=part1[i++];
    }
}
void mergeSort(int arr[], int size)
{
	
	if(size==1){
		return;
	}
	int *part1=new int[size/2];
	int s1=size/2;
	int *part2=new int[size - (size/2)];
	int s2=size - (size/2);
	
	for(int i =0;i<s1;i++){
		part1[i]=arr[i];
	}
	int k=0;
	for(int i =s1;i<size;i++){
		part2[k++]=arr[i];
	}
	mergeSort(part1,s1);
	mergeSort(part2,s2);
	merge(part1,s1, part2, s2,arr, size);
	
	
}
int main(){
	int arr[100],i,n;
	cin>>n;
	int end=n-1;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	 mergeSort( arr,n);
	for(i=0;i<n;i++){
		cout<<arr[i];
	}
	
	
	return 0;
}
