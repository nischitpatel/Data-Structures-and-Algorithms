#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter length of word : ";
	cin>>n;
	char word[n+1];
	cout<<"Enter a word : ";
	cin>>word;
	
	int i=0;
	bool checked = 1;
	while(i<n/2){
		if(word[i]!=word[n-1-i]){
			checked = 0;
			break;
		}
		i++;
	}
	if(checked){
		cout<<"Word is palindrome";
	}
	else{
		cout<<"Word is not palindrome";
	}
	
	return 0;
}
