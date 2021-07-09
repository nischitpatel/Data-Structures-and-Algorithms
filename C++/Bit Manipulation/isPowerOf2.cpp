#include<iostream>
using namespace std;

//To check number is power of two or not
/*	
	- Suppose num = 6 = 0110 (if we do change bits from right most 1 then we get 0101 i.e. 5 i.e. num-1 )
	  num-1 = 5 = 0101
	- AND of num which is power of 2 and num-1 is always zero
	- In above example num & num-1 = 0100 != 0
	- We know that 8 is power of 2 
	  num = 8 = 1000
	  num - 1 = 7 = 0111
	- Here 1000 & 0111 = 0000
	
*/
bool isPowerOf2(int num){
	if(num==1)
		return 1;
	else
		return !(num & num-1);	
}

int main(){
	cout<<"****** CHECK IF A NUMBER IS POWER OF TWO OR NOT ******"<<endl;
	int num;
	cout<<"\tEnter a number : ";
	cin>>num;
	bool checked = isPowerOf2(num);
	if(checked)
		cout<<"Entered numbers is power of 2"<<endl;
	else
		cout<<"Entered number is not power of 2"<<endl;
	
	return 0;
}
