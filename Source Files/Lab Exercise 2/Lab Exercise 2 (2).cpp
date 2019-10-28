#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	a:	int factorial;
	int result = 1;
	
	cout << "Enter a number: ";
	cin >> factorial;
	
	if(factorial < 0 || cin.fail()){
			
		cin.clear();
		cin.ignore(1000, '\n');
		system("CLS");
		cout << "\nINPUT INVALID (X)\n";
		goto a;
		
	}
	else if(!cin.fail()){
		
		for(int a = factorial; a>0; a--){
			
			result *= a;
		}
		
		cout << "The factorial of " << factorial << " is " << result;
		
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
}
