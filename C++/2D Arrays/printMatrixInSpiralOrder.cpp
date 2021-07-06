#include<iostream>
using namespace std;

int main(){
	int r,c;
	cout<<"Enter number of rows and colums : ";
	cin>>r>>c;
	int m[r][c];
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>m[i][j];
		}
	}
	
	//print matrix in spiral order
	int row_start=0, row_end=r-1, col_start=0, col_end=c-1;
	while(row_start<=row_end && col_start<=col_end){
		//for starting row
		for(int i=col_start; i<=col_end; i++){
			cout<<m[row_start][i]<<" ";
		}
		row_start++;
		//for end column
		for(int i=row_start; i<=row_end; i++){
			cout<<m[i][col_end]<<" ";
		}
		col_end--;
		//for end row
		for(int i=col_end;i>=col_start;i--){
			cout<<m[row_end][i]<<" ";
		}
		row_end--;
		//for starting column
		for(int i=row_end; i>=row_start; i--){
			cout<<m[i][col_start]<<" ";
		}
		col_start++;
	}
	
	 
	return 0;
}
