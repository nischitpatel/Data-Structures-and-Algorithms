#include<iostream>
using namespace std;

int main(){
	char arr[100];
	cout<<"Enter a sentence : ";
	cin.getline(arr, 100);
	
	int currLen=0, maxLen=0,i=0;
	int start=0, maxStart=0;
	while(1){
		
		if(arr[i]==' ' || arr[i]=='\0'){
			if(currLen>maxLen){
				maxLen = currLen;
				maxStart=start;
			}
			currLen=0;
			start=i+1;
		}
		else{
			currLen++;
		}
		if(arr[i]=='\0'){
			break;
		}
		i++;
	}
	cout<<"Maximum length : "<<maxLen<<endl;
	cout<<"Word with maximum length is : ";
	for(i=0; i<maxLen; i++){
		cout<<arr[i+maxStart];
	}
	
	return 0;
}
