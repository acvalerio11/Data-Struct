#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	a:	int first, second;
	cout << "Enter the first number: ";
	cin >> first;
	cout << "Enter the second number: ";
	cin >> second;
	
	if(cin.fail()){
			
			cin.clear();
			cin.ignore(1000, '\n');
			system("CLS");
			cout << "\nINPUT INVALID (X)\n";
			goto a;
			
	}
	else if(!cin.fail()){
		
		if(first > second){
			
			cout << first << " is greater than " << second;
		}
		else if (second > first){
			
			cout << second << " is greater than " << first;
		}
		else if(first == second){
			
			cout << "Both numbers are equal";
		}
		char choice1;
		b:			cout << "\nEnter [Y] to continue\nEnter [N] to Exit\n";
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
}
