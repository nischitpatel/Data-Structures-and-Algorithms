#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	string s="nischitpatel";
	int freq[26];
	for(int i=0;i<26;i++)
		freq[i]=0;
	
	for(int i=0;i<s.size();i++)
		freq[s[i]-'a']++;
	
	char ans='a';
	int maxFreq=0;
	
	for(int i=0; i<26; i++){
		if(freq[i]>maxFreq){
			maxFreq=freq[i];
			ans+=i;
		}
	}
	cout<<"Maximum frequency : "<<maxFreq<<endl;
	cout<<"Letter with maximum frequency : "<<ans<<endl;
	return 0;
}
