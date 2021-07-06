#include<iostream>
using namespace std;

void insertionSort(int a[], int size){
	int i,j;
	for(i=1; i<size; i++){
		int current=a[i];
		j=i-1;
		while(a[j]>current && j>=0){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=current;
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
	insertionSort(a, size);
	return 0;
}
