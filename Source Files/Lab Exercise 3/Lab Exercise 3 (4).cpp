#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool sentencePalindrome(string str){
	int l=0, h = str.length();
	
	for(int i=0; i<h; i++)
	str[i] = tolower(str[i]);
	
	while(l <= h){
		if(!(str[l] >= 'a' && str[l] <= 'z')){
		l++;
		}
		else if(!(str[h] >= 'a' && str[h] <= 'z')){
		h--;
		}
		else if (str[l]==str[h]){
			l++, h--;
		}
		else{
			return false;
		}
	}
	return true;	
}

int main(){
	string str = "";

	cout << "Enter a string: ";
	getline(cin,str);
	
	if(sentencePalindrome(str)){
		cout << str << " is a palindrome";
	}
	else{
		cout << str << " is not a palindrome";
	}
}
