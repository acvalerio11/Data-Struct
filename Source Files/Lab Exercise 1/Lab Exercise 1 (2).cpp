#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	a:	int a[10], n, i;    
	cout<<"Enter the number to convert: ";    
	cin>>n;  
	  
	  
	if(cin.fail()){
			
			cin.clear();
			cin.ignore(1000, '\n');
			system("CLS");
			cout << "\nINPUT INVALID (X)\n";
			goto a;
			
	}
	
	else if (!cin.fail()){
		
		for(i=0; n>0; i++)    
		{    
			a[i]=n%2;    
			n= n/2;  
		}   
		 
		cout<<"Binary of the given number: ";    
	
		for(i=i-1 ;i>=0 ;i--)    
		{    
			cout<<a[i];    
		}    
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
