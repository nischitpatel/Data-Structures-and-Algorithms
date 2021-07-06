#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"Enter number of rows and colums : ";
	cin>>r>>c;
	int arr[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>arr[i][j];
		}
	}
	int num;
	cout<<"Enter number to be searched : ";
	cin>>num;
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			if(num==arr[i][j]){
				cout<<"Number found";
				return 0;
			}
		}
	}
	
	cout<<"Number does not exist";
	return 0;
}
