#include<iostream>
#include<string>
using namespace std;

string lowerToUpper(string str){
	for(int i=0;i<str.length();i++){
		if(str[i]>='a' && str[i]<='z'){
			str[i]-=32;
		}
	}
	return str;
}

string upperToLower(string str){
	for(int i=0;i<str.length();i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]+=32;
		}
	}
	return str;
} 


int main(){
	string str="abcdefghi";
	
	string upperCase=lowerToUpper(str);
	string lowerCase=upperToLower(upperCase);
	
	cout<<"Input string : "<<str<<endl;
	cout<<"Uppercase Conversion of input string : "<<upperCase<<endl;
	cout<<"Lowercase conversion of uppercase string : "<<lowerCase<<endl;
	
	return 0;
}
