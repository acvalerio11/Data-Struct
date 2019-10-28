#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	char str1[20],str2[20];
	int result;
	
	cout << "Enter a string(str1):";
	cin.getline(str1,20);
	int length = strlen(str1);
	
		char up = str1[0];							
		str1[0] = toupper(up);
	
	for(int i = 0; i <= length; i++){				
		char up = str1[i];
		str1[i] = tolower(up);
	}
		
	for(int i = 0; i <= length; i++){				
	if(str1[i] == ' '){
		char up = str1[i+1];
		str1[i+1] = toupper(up);
	}
	}
	
	cout << "\nNew string value: " << str1 ;
}
