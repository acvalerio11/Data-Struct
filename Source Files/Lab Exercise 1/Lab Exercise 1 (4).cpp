#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	string a;
	string b;
	
	cout << "Input a string: ";
	cin >> a;
	
	for(int i = a.size()-1; i >= 0; i--){
		
		b = b + a[i]; 
	}
	
	if(a==b){
		
		cout << a << " is Palindrome";
	}
	else if(a!=b){
		
		cout << a << " is not Palindrome";
	}
	
	char choice1;
		b:	cout << "\nEnter [Y] to continue\nEnter [N] to Exit\n";
			cin >> choice1;
			
			switch(choice1) {
				case 'Y':
					system("CLS");
					main();
					break;
				
				case 'y':
					system("CLS");
					main();
					break;	
				
				case 'N':
					cout << "EXITING......";
					break;
				
				case 'n':
					cout << "EXITING......";
					break;	
					
				default:
					system("CLS");
					cout  << "INPUT INVALID (X)";
					goto b;
			}
}
