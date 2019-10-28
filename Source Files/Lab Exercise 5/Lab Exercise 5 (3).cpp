#include<iostream>
#include<iomanip>

using namespace std;

struct item{
	int id;
	string name;
	float price;
};

struct date{
	int day;
	int month;
	int year;
};

struct name{
	string firstname;
	string lastname;
};

struct order{
	date d;
	item i[3];
	int q[3];
	float fprice = 0;
};

struct customer{
	name n;
	string contactnum;
	order o;
};

struct customers{
	customer c[3];
	
};

item inputi();
date inputd();
order inputo();
name inputn();
customer inputc();
customers maininput();
customers display(customers cs);
int again();
int fail(int temp);

int ctr0 = 1;
int ctr2 = 1;

int main(){
	customers cs;
	
	LOOP6:
	
	int ctr = 0;
	
	cs = maininput();
	cs = display(cs);
	ctr = again();
	
	
	if(ctr == 1){
		goto LOOP6;
	}else{
		return 0;
	}
	
}

customers maininput(){
	int ctr1 = 0;
	customers temp;
	
	while (ctr1 < 3){	
		temp.c[ctr1] = inputc();
		ctr0++;
		ctr1++;
	}
	
	return temp;
	
}

customer inputc(){
	customer temp;
	
	temp.n = inputn();
	
	LOOP3:
	
	cout	<< "Enter Contact Num: ";
	cin		>> temp.contactnum;
	
	if(cin.fail()){
		fail(1);
		goto LOOP3;
	}
	
	temp.o = inputo();
	
	return temp;
	
}

name inputn(){
	name temp;
	LOOP1:
	
	cout	<< "\t\t\tEnter Cunstomer " << ctr0 << " Info :\n";
	cout	<< "Enter First Name: ";
	cin		>> temp.firstname;
	
	if(cin.fail()){
		fail(1);
		goto LOOP1;
	}
	
	cout	<< "Enter Last Name: ";
	cin		>> temp.lastname;
	
	if(cin.fail()){
		fail(1);
		goto LOOP1;
	}
	
	return temp;
	
}

order inputo(){
	ctr2 = 0;
	order temp;
	
	temp.d = inputd();
	
	cout	<< "Enter 3 Items: ";
	
	while (ctr2 < 3){	
		temp.i[ctr2] = inputi();
		
		LOOP4:
		
		cout	<< "Enter Item Quantity: ";
		cin		>> temp.q[ctr2];
		
		if(cin.fail()){
			fail(0);
			goto LOOP4;
		}
		
		temp.fprice = temp.fprice + (temp.i[ctr2].price * temp.q[ctr2]);
		
		ctr2++;
	}
	
	
	
	return temp;
	
}

date inputd(){
	LOOP3:
		
	date temp;

	cout	<< "\nOrder Date: \n"
			<< "Year: ";
	cin		>> temp.year;
			
	if(cin.fail()){
		fail(0);
		goto LOOP3;
	}
	
	if(temp.year < 0){
		cout	<< "\nPlease input positive integer!\n\n";
		goto LOOP3;
	}
	
	
	
	cout	<< "Month: ";
	cin		>> temp.month;
	
	if(cin.fail()){
		fail(0);
		goto LOOP3;
	}
	
	
	if(temp.month < 1 || temp.month > 12){
		cout	<< "There are only 12 months ranging from 1 - 12!\n\n";
		goto LOOP3;
	}
	
	
	
	cout	<< "Day: ";
	cin		>> temp.day;
			
	if(cin.fail()){
		fail(0);
		goto LOOP3;
	}
	
	if(temp.day < 0){
		cout	<< "\nPlease input positive integer!\n\n";
		goto LOOP3;
	}
	
	int month = temp.month;
	
	switch(month){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			if(temp.day < 1 || temp.day > 31){
				cout	<< "There are only 31 days in month "
						<< month
						<< " ranging from 1 - 31!\n\n";
				goto LOOP3;
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(temp.day < 1 || temp.day > 30){
				cout	<< "There are only 30 days in month "
						<< month
						<< " ranging from 1 - 30!\n\n";
				goto LOOP3;
			}
			break;
		case 2:
			if(temp.year % 4 == 0 && !(temp.year % 100 == 0) || temp.year % 400 == 0){
				if(temp.day < 1 || temp.day > 29){
				cout	<< "There are only 29 days in month "
						<< month
						<< " ranging from 1 - 29 as year "
						<< temp.year
						<< " is a LEAP YEAR!\n\n";
				goto LOOP3;
				}
			}else{
				if(temp.day < 1 || temp.day > 28){
				cout	<< "There are only 28 days in month "
						<< month
						<< " ranging from 1 - 28!\n\n";
				goto LOOP3;
				}
			}
		break;
	}
	
	cout	<< "\n";
	
	return temp;
}

item inputi(){
	item temp;
	LOOP5:
	
	cout	<< "\nEnter Item " << ctr2 + 1 << " Info :\n";
	cout	<< "Enter Id: ";
	cin		>> temp.id;
	
	if(cin.fail()){
		fail(0);
		goto LOOP5;
	}
	
	cout	<< "Enter Name: ";
	cin		>> temp.name;
	
	
	if(cin.fail()){
		fail(1);
		goto LOOP5;
	}
	
	cout	<< "Enter price: ";
	cin		>> temp.price;
	
	if(cin.fail()){
		fail(0);
		goto LOOP5;
	}
	
	if(temp.price < 0){
		cout	<< "\nPlease input positive integers!\n\n";
		goto LOOP5;
	}
	
	return temp;
}

customers display(customers cs){
	
	int ctr3 = 0;
	int ctr4 = 0;
	string fname;
	
		
	cout	<< "\n\n\n"
			<< "-----------------------------------------------------SUMMARY REPORT-----------------------------------------------------\n"
			<< setw(3)
			<<	"No. "
			<< setw(40)
			<< "Customer Name: "
			<< setw(15)
			<< "Order Date: "
			<< setw(30)
			<< "Items: "
			<< setw(15)
			<< "Price: "
			<< setw(15)
			<< "Quantity: \n";
			
			
	while(ctr3 < 3){
		fname = cs.c[ctr3].n.lastname + ", " + cs.c[ctr3].n.firstname;
		cout	<< setw(3)
				<< ctr3+1
				<< setw(40)
				<< fname
				<< setw(10)
				<< cs.c[ctr3].o.d.month << "/" << cs.c[ctr3].o.d.day << "/" << cs.c[ctr3].o.d.year << "\n";
		
		while (ctr4 < 3){
			cout 	<< setw(58)
					<< " "
					<< setw(30)
					<< cs.c[ctr3].o.i[ctr4].name
					<< setw(15)
					<< cs.c[ctr3].o.i[ctr4].price
					<< setw(15)
					<< cs.c[ctr3].o.q[ctr4]
					<< "\n";
			ctr4++;
		}
		
		cout	<< setw(58)
				<< " "
				<< setw(30)
				<< "TOTAL PRICE:"
				<< setw(30)
				<< cs.c[ctr3].o.fprice
				<< "\n";
		ctr3++;
		ctr4 = 0;
	}
	
	return cs;
	
}

int again(){
	
	string choice = "";
	ctr0 = 1;
	LOOP7:
	
	cout	<< "\n\n"
			<< "***Input Another?***\n"
			<< "y/n: ";
	cin		>> choice;
	
	if(choice == "y" || choice == "Y"){
		cout	<< "\n";
		return 1;
	}else if (choice == "n" || choice == "N"){
		cout	<< "\n";
		return 0;
	}else{
			cout	<< "\n\n"
					<< "Please Input within specified Choices: \n";
			goto LOOP7;
	}
}


int fail(int temp){
        cin.clear(); 
		cin.ignore(100,'\n');
		if(temp == 1){
			cout	<< "\nPlease input proper letters!\n";
		}else{
			cout	<< "\nPlease input real numbers!\n";
		}
		
}
