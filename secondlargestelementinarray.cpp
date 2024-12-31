#include<bits/stdc++.h>
using namespace std;
void Slargestelement(int arr[],int n){
	int largest=arr[0];
	int slargest =-1;
	for(int i=0;i<n;i++){
	if(arr[i]>largest){
		largest = arr[i];
		}
	}
	int Slargest=0;
	for(int i=0;i<n;i++){
	if(arr[i]>Slargest &&arr[i]!=largest){
	Slargest=arr[i];
	}
	}cout << Slargest;
}
//time complexity=O(2n) for two passes
//optimal apporach solution
void slargest(int arr[] ,int n){
	int largest=arr[0];
	int slargest =-1;
	for(int i=0;i<n;i++){
	if(arr[i]>largest){
	slargest=largest;
	largest=arr[i];
	}
	else if(arr[i] < largest && arr[i] > slargest){
	slargest=arr[i];
	}

	}cout << slargest;
}
//time complexity of this approach=O(n)
//calculate second smallest element in an arrya
void Ssmallest(int arr[],int n){
	int smallest=arr[0];
	int ssmallest=INT_MAX;
	for(int i=0;i<n;i++){
	if(arr[i]<smallest){
	ssmallest=smallest;
	smallest=arr[i];
	}
	else if(arr[i]!=smallest&&arr[i]<ssmallest){
	ssmallest=arr[i];
	}
	}cout << ssmallest;
}
	
	

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++) cin >> arr[i];
//	Slargestelement(arr,n);
//	slargest(arr,n);
	Ssmallest(arr,n);	
}
