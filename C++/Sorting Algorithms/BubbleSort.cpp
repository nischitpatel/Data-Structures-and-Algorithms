#include<iostream>
using namespace std;

void bubbleSort(int a[], int size){
	int i,j;
	for(i=0; i<size; i++){
		for(j=0; j<size-i; j++){
			if(a[j]>a[j+1]){
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array is : ";
	for(i=0; i<size; i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	int size;
	cout<<"Enter size of an array : ";
	cin>>size;
	int a[size];
	cout<<"Enter elements of an array : ";
	for(int i=0; i<size; i++){
		cin>>a[i];
	}
	bubbleSort(a, size);
	return 0;
}
