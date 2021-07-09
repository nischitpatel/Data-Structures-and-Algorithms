#include<iostream>
using namespace std;

/*
	num = 19 = 01011					num = 18 = 01010					num = 16 = 01000
	num-1 = 18 = 01010					num-1 = 17 = 01001					num-1 = 15 = 00111
						----------->>>						----------->>>
	num = num & num-1					num = num & num-1					num = num & num-1
	num = 01011 & 01010					num = 01010 & 01001					num = 01000 & 00111
	num = 01010 = 18					num = 01000 = 16					num = 00000 = 0
	
	As shown above, we will do num & num-1 and save it in num till we get num=0 and every time we will increment counter by 1
*/
int numberOfOnesInBinary(int num){
	int counter = 0;
	while(num!=0){
		num = num & num-1;
		counter++;
	}
	
	return counter;
}

int main(){
	cout<<"***************************************************************************"<<endl;
	cout<<"***** COUNT NUMBER OF ONES IN BINARY REPRESENTATION OF ENTERED NUMBER *****"<<endl;
	cout<<"***************************************************************************"<<endl;
	int num;
	cout<<"\tEnter a number : ";
	cin>>num;
	cout<<"Number of ones in binary representation of given number are : "<<numberOfOnesInBinary(num)<<endl;
	
	return 0;
}
