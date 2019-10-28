#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	char word1[20],word2[20];
	int result;
	
	cout << "Enter a first word:";
	cin.getline(word1,20);
	cout << "Enter a second word:";
	cin.getline(word2,20);
	
	result = strcmp(word1,word2);
	
	switch(result){
		case 1: cout << "Positive"; break;
		case 0:	cout << "Equal"; break;
		case-1: cout << "Negative"; break;
	}
}
