#include<iostream>
#include<string.h>
using namespace std;

char str1[20],str2[20];
void stringcopy(char *txt1, char *txt2);
void stringcompare(string txt1, string txt2);
void exactCopy();
void TwoCopy();
void ThreeCompare();
void FourLength();


int main()
{
	string choice;
	cout << "\n[1] Exact Copy \n[2] String Copy \n[3] String Compare\n[4] String Length \n[5] Exit\n" << endl;
	getline(cin,choice);
	
	if(choice == "1") exactCopy();	
	else if(choice == "2")TwoCopy();	
	else if(choice == "3")	ThreeCompare(); 	
	else if(choice == "4")	FourLength(); 	
	else if(choice == "5") system("exit"); 
	else {
	 cout << "Invalid input of choice!"; system("pause>0"); system("cls"); main();
	}
	
	
	
}

void exactCopy(){
	int x(11), y(6), z(22), *p1, *p2;
	p1 = &z;
	p2 = &x;
	cout << "x:" << x << " y:" << y << " z:" << z << " *p1:" << *p1 << " *p2:" << *p2 << endl;
	*p1 = *p2;
	z = *p1 + 2;
	cout << "x:" << x << " y:" << y << " z:" << z << " *p1:" << *p1 << " *p2:" << *p2 << endl;
	p2 = p1;
	x = z - y;
	cout << "x:" << x << " y:" << y << " z:" << z << " *p1:" << *p1 << " *p2:" << *p2 << endl;
	*p1 = y;
	p1 = &y;
	cout << "x:" << x << " y:" << y << " z:" << z << " *p1:" << *p1 << " *p2:" << *p2 << endl;
	*p1 = y + x;
	cout << "x:" << x << " y:" << y << " z:" << z << " *p1:" << *p1 << " *p2:" << *p2 << endl;
	x = 1; y = 2; z = 3;
	p1 = p2;
	*p2 = *p1 + x;
	cout << "x: " << x << " y: " << y << " z: " << z << " *p1: " << *p1 << " *p2: " << *p2 << endl;
	system("pause>0");
}

void TwoCopy(){
	cout << "******************************\n";
	cout << "\tSTRING COPY\n";
	cout << "******************************\n";
	cout << "Enter a first word(str1):";
	cin.getline(str1,20);
	cout << "Enter a second word(str2):";
	cin.getline(str2,20);
	stringcopy(str1,str2);
	cout << "New first word(str1): " << str1;
}

void ThreeCompare(){
	cout << "******************************\n";
	cout << "\tSTRING COMPARE\n";
	cout << "******************************\n";
	cout << "Enter a first word(str1):";
	cin.getline(str1,20);
	cout << "Enter a second word(str2):";
	cin.getline(str2,20);
	stringcompare(str1,str2);
}
void FourLength(){
	
	char text[50];
	int number = 0;
	
	cout << "Enter String: ";
	cin.getline(text,50);
	for(int i=0; text[i] != '\0' ; i++){  
			number++;
	}
	cout << "String Length: " << number;
}
void stringcopy(char *txt1, char *txt2){
	
	while(*txt1++ = *txt2++);
}
void stringcompare(string txt1, string txt2){
	
	string user = txt1, user2 = txt2;
    int ascChar;
    int sum = 0, sum2 = 0;

    for (int i=0;i<user.length();i++)
    {
        ascChar = user[i];
        sum += ascChar;
    }
    
    for (int i=0;i<user2.length();i++)
    {
        ascChar = user2[i];
        sum2 += ascChar;
    }
    if(sum>sum2)
    	cout << "POSITIVE";
    else if (sum < sum2)
    	cout << "NEGATIVE";
    else
    	cout << "EQUAL";
    
}
