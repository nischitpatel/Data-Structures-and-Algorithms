#include<iostream>
using namespace std;

void selectionSort(int a[], int s){
	int temp,i,j;
	for(i=0; i<s-1; i++){
		for(j=i+1; j<s; j++){
			if(a[j]<a[i]){
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
	cout<<"Sorted array : \n";
	for(i=0; i<s; i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int size;
	cout<<"Enter size of an array : ";
	cin>>size;
	cout<<"Enter elements of an array : ";
	int arr[size];
	for(int i=0; i<size; i++){
		cin>>arr[i];
	}
	selectionSort(arr, size);
	
	return 0;
}

