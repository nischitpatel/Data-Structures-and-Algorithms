#include<iostream>
using namespace std;

//to get a bit at given position
int getBit(int num, int pos){
	/*	here we use '&'(AND) operator to get a bit
		num=5=0101
		pos=2 i.e to get bit at 2nd position
		flow:
			- 1<<pos=1<<2=0001<<2=0100
			- 0101 & 0100 != 0 so, bit at 2nd position is 1
			  else bit at position is 0
	*/ 
	return ((num & (1<<pos))!=0);
}

//to set a bit at given position (i.e to set 1)
int setBit(int num, int pos){
	/*	here we use '|'(OR) operator to set a bit
		num=5=0101
		pos=1 i.e to set bit at 1st position
		flow:
			- 1<<pos=1<<1=0001<<1=0010
			- 0101 | 0100 = 0111
	*/
	return (num | (1<<pos)); 
}

//to clear a bit at given position (i.e to set 0 )
int clearBit(int num, int pos){
	/*	here we take once compliment after applying left shift in 1
		num=5=0101
		pos=2
		flow:
			- 1<<pos=1<<2=0001<<2=0100
			- ~0100 = 1011 (here we get 0 at position 2)
			- now 0101 & 1011 = 0001 
			so we have cleared bit at position 2
	*/
	return (num & (~(1<<pos)));
}

//to update a bit at given position
int updateBit(int num, int pos, int n){
	/*	num=5=0101
		Suppose we need to update bit at position 1 to 1 (ans we should get : 0111)
		here we first clear a bit at position and then set a bit
	*/
	num = clearBit(num, pos); 	//to clear a bit
	return (num | (n<<pos)); 	//to set a bit at position so we apply left shift in n 
}

int main(){
	int num,pos,choice;
	while(1){
		cout<<"\t\t\t\t*********BIT MANIPULATION*********"<<endl;
		cout<<"\t\t\t\t[1]. Get a bit at a position"<<endl;
		cout<<"\t\t\t\t[2]. Set a bit at a position"<<endl;
		cout<<"\t\t\t\t[3]. Clear a bit at a position"<<endl;
		cout<<"\t\t\t\t[4]. Update a bit at a position"<<endl;
		cout<<"\t\t\t\t[5]. Exit"<<endl;
		cout<<"Enter your choice : ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter a number : ";
				cin>>num;
				cout<<"Enter position : ";
				cin>>pos;
				cout<<"Bit at position "<<pos<<" is : "<<getBit(num, pos)<<endl;
				break;
			case 2:
				cout<<"Enter a number : ";
				cin>>num;
				cout<<"Enter position : ";
				cin>>pos;
				cout<<"Number we get after setting a bit at position "<<pos<<" is : "<<setBit(num, pos)<<endl;
				break;
			case 3:
				cout<<"Enter a number : ";
				cin>>num;
				cout<<"Enter position : ";
				cin>>pos;
				cout<<"Number we get after clearing a bit at position "<<pos<<" is : "<<clearBit(num, pos)<<endl;
				break;
			case 4:
				cout<<"Enter a number : ";
				cin>>num;
				cout<<"Enter position : ";
				cin>>pos;
				int n;
				cout<<"Enter updation bit : ";
				cin>>n;
				cout<<"Number we get after updating a bit at position "<<pos<<" is : "<<updateBit(num, pos, n)<<endl;
				break;
			case 5:
				break;
			default:
				cout<<"Enter valid choice!"<<endl;
				break;
		}
		if(choice==5)
			break;
	}		
	return 0;
}
