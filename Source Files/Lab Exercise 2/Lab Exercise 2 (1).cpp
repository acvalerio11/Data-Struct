#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main ()
{
		char choice;
	int side;
	float base, height;
	int length, width;
	float pi = M_PI;
	float r;
	cout << "[1] - Area of square\n[2] - Area of rectangle\n[3] - Area of triangle\n[4] - Area of circle\n[5] - exit"
		 << "\nEnter your choice: ";
		 	 
	cin >> choice;
	
	switch(choice){
		
		case '1':
			
az:			cout << "AREA OF SQUARE\nEnter the side of the square: ";
			cin >> side;
			
			if(side <= 0 ||cin.fail()){
				
				cin.clear();
				cin.ignore(1000, '\n');
				system("CLS");
				cout << "\nINPUT INVALID (X)\n";
				goto az;
				
		}
			cout << "The area is " << side*side << " sq. units";
			char choice1;
a:			cout << "\nEnter [Y] to continue\nEnter [N] to Exit\n";
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
					cout  << "WINPUT INVALID (X)";
					goto a;
			}
			break;
		
		case '2':
			
			cout << "AREA OF RECTANGLE";
bz:			cout	 << "\nEnter the length: ";
			cin >> length;
		if(length <= 0 ||cin.fail()){
				
				cin.clear();
				cin.ignore(1000, '\n');
				system("CLS");
				cout << "\nINPUT INVALID (X)\n";
				goto bz;
				
		}	
			
bx:			cout << "Enter the width: ";
			cin >> width;
			
		if(width <= 0 ||cin.fail()){
				
				cin.clear();
				cin.ignore(1000, '\n');
				system("CLS");
				cout << "\nINPUT INVALID (X)\n";
				goto bx;
				
		}	
			cout << "The area is " << length * width << " sq. units";
			char choice2;
b:			cout << "\nEnter [Y] to continue\nEnter [N] to Exit\n";
			cin >> choice2;
			
			switch(choice2) {
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
			break;
			
		case '3':
			
			cout << "AREA OF TRIANGLE";
cz:			cout << "\nEnter the base: ";
			cin >> base;
			
		if(base <= 0 ||cin.fail()){
				
				cin.clear();
				cin.ignore(1000, '\n');
				system("CLS");
				cout << "\nINPUT INVALID (X)\n";
				goto cz;
				
		}	
			
cx:			cout << "Enter the height: ";
			cin >> height;
			
			if(height <= 0 || cin.fail()){
				
				cin.clear();
				cin.ignore(1000, '\n');
				system("CLS");
				cout << "\nINPUT INVALID (X)\n";
				goto cx;
				
		}	
			cout << fixed;
			cout << "The area is " << setprecision(2) << (base*height)/2 << " sq. units";
			char choice3;
c:			cout << "\nEnter [Y] to continue\nEnter [N] to Exit\n";
			cin >> choice3;
			
			switch(choice3) {
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
					goto c;
			}
			break;
			
		case '4':
			
			cout << "AREA OF CIRCLE\n";
dz:			cout << "Enter the radius: ";
			cin >> r;
		
		if(r <= 0 || cin.fail()){
				
				cin.clear();
				cin.ignore(1000, '\n');
				system("CLS");
				cout << "\nINPUT INVALID (X)\n";
				goto dz;
				
		}	
			
			cout << fixed;
			cout << "The area is " << setprecision(2) << r*r*pi << " sq. units";
			char choice4;
d:			cout << "\nEnter [Y] to continue\nEnter [N] to Exit\n";
			cin >> choice4;
			
			switch(choice4) {
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
					goto d;
			}
			break;
		
		case '5':
			system("CLS");
			cout << "EXITING.......";
			break;
		
		default:
			system("CLS");
			cout << "INPUT INVALID (X)" << endl;
			main();
	}
}
