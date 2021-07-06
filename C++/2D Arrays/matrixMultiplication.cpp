#include<iostream>
using namespace std;

int main(){
	int n,p,r;
	cout<<"Enter values of n,p,r (1st matrix is of order nxp 2nd matrix is of order pxr): ";
	cin>>n>>p>>r;
	int m1[n][p], m2[p][r];
	
	cout<<"Enter 1st matrix : \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			cin>>m1[i][j];
		}
	}
	cout<<"Enter 2nd matrix : \n";
	for(int i=0;i<p;i++){
		for(int j=0;j<r;j++){
			cin>>m2[i][j];
		}
	}
	
	//matrix multiplication
	int ans[n][r];
	for(int i=0;i<n;i++){
		for(int j=0;j<r;j++){
			ans[i][j]=0;
		}
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<r; j++){
			for(int k=0; k<p; k++){
				ans[i][j] += m1[i][k]*m2[k][j];	
			}
		}
	}
	cout<<"Final Matrix is : \n";
	for(int i=0;i<n;i++){
		for(int j=0;j<r;j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}
	
		
	return 0;
}
