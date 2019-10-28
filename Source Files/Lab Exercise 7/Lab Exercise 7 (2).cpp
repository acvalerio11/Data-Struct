#include <iostream>
#include <iomanip>
using namespace std;

struct Subject
{
	char code[10];
	char description[50];
	float units;
};

void newLine();

int main()
{
	int noOfSubject;
	cout << "How many subjects do you want to enter? ";
	cin >> noOfSubject;
	newLine();
	Subject* subj = new Subject[noOfSubject];
	
	for(int i=0; i<noOfSubject; i++)
	{
		cout << "Enter subject " << i+1 << endl;
		cout << "Code: ";
		cin.getline(subj->code,9);
		cout << "Description: ";
		cin.getline(subj->description,49);
		cout << "Unit(s): ";
		cin >> subj->units;
		newLine();
		subj++;
	}
	subj-=noOfSubject;
	cout << "\n\nList of subjects\n";
	
	cout << setw(10) << "Code"
		<< setw(40) << "Description"
		<< setw(10) << "Units";
	cout << endl;
	for(int i=0; i<noOfSubject; i++)
	{
		cout << setw(10) << subj->code
			<< setw(40) << subj->description
			<< setw(10) << subj->units << endl;
		subj++;
	}
	system("pause>0");
	return 0;
}

void newLine()
{
	char s;
	do{cin.get(s);}while(s!='\n');
}
