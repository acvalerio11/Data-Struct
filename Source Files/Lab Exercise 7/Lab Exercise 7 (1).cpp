#include <iostream>
using namespace std;

struct Item
{
	int code;
	char name[50];
	double price;
};

void displayItem(Item* _itm);
void newLine();

int main()
{
	Item* itm;
	itm = new Item;
	cout << "Enter item info \n";
	cout << "Code: ";
	cin >> itm->code ;
	newLine();
	cout << "Name: ";
	cin.getline(itm->name,49);
	cout << "Price:  ";
	cin >> itm->price;
	displayItem(itm);
	system("pause > 0");
	return 0;
}

void displayItem(Item* _itm)
{
	cout << "\n\nItem Information:\n";
	cout << "Code: " << _itm->code << endl;
	cout << "Name: " << _itm->name << endl;
	cout << "Price: " << _itm->price << endl;
}

void newLine()
{
	char s;
	do{cin.get(s);}while(s!='\n');
}
