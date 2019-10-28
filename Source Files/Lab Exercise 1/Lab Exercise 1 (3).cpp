#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
	int i[10];
	
	cout << "Enter 10 numbers: \n";
	for(int a = 1 ; a <= 10; a++){
		
		if(cin.fail()){
			
			
			
			cin.clear();
			cin.ignore(1000, '\n');
			cout << endl;
			a -= 1;	
			system("CLS");
			cout << "\nINPUT INVALID (X)\n";
		}
		cout << a << ": ";
		cin >> i[a];
	}
	
	for(int b = 1; b <= 10; b++){
		
		for(int c = 1; c <= 10-b; c++){
			
			if(i[c] > i[c+1]){
				
				int d = i[c];
				i[c] = i[c+1];
				i[c+1] = d;
			}
		}
	}
	
	cout << "\nfirst to the highest " << i[10] << endl
		 << "second to the highest " << i[9] << endl
		 << "\nfirst to the lowest " << i[1] << endl
		 << "second to the lowest " << i[2];
		 
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
