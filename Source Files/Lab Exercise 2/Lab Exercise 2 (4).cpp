#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
		int array[10][10] = {0};
	int column, row, value;
	
	for(int x=0; x < 10; x++){
		
		array[x][x] = 1;
	}
	
a:	cout << "Enter column number: ";
	cin >> column;
	if(column < 1 || column > 10 || cin.fail()){
		
		cin.clear();
		cin.ignore(1000, '\n');
		system("CLS");
		cout << "Wrong Input\n";
		goto a;
	}
b:	cout << "Enter row number: ";
	cin >> row;
	if(row < 1 || row > 10 || cin.fail()){
		
		cin.clear();
		cin.ignore(1000, '\n');
		system("CLS");
		cout << "Wrong Input\n";
		goto b;
	}
c:	cout << "Enter value: ";
	cin >> value;
	if(cin.fail()){
		
		cin.clear();
		cin.ignore(1000, '\n');
		system("CLS");
		cout << "Wrong Input\n";
		goto c;
	}
	
	array[row-1][column-1] = value;
	
	for(int a = 0; a < 10; a++){
		
		for(int b = 0; b < 10; b++){
			
			cout << array[a][b] << "\t";
		}
		cout << endl;
	}
	char choice1;
f:	cout << "\nEnter Y to continue\nEnter N to Exit\n";
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
					cout  << "Wrong Input";
					goto f;
			}		
}
