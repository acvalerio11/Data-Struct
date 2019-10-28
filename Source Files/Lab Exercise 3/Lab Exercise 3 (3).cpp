#include<iostream>
#include<string.h>
using namespace std;

int main(){
	
	char str1[20],str2[20];
	int result;
	
	cout << "Enter a first word (str1):";
	cin.getline(str1,20);
	cout << "Enter a second word (str2):";
	cin.getline(str2,20);
	
	strcat(str1,str2);
	cout << "\nNew string value for str1: " << str1 ;
}
