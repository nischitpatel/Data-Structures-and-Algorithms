/*																						Example
	2D matrix search																	1  4  7  11
	Given nxm matrix.																	2  5  8  12
	write an algorithm to find that the given values exists in matrix or not.			3  6  9  16
	integers in each row are sorted in ascending from left to right.					10 13 14 17
	integers in each column are sorted in ascending from top to bottom.
*/

#include<iostream>
using namespace std;

int main(){
	int n,m;
	cout<<"Enter order of matrix : ";
	cin>>n>>m;
	int mat[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>mat[i][j];
		}
	}
	//matrix search
	int x;
	cout<<"Enter number to be searched : ";
	cin>>x;
	int row=0, col=m-1;
	bool flag=0;
	for(int i=0;i<n;i++){
		if(x==mat[row][col]){
			flag=1;
			break;
		}
		else if(x<mat[row][col]){
			col--;
		}
		else{
			row++;
		}
	}
	if(flag){
		cout<<"Number found";
	}	
	else{
		cout<<"Number does not exist";
	}
	
	return 0;
}
