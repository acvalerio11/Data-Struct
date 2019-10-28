#include<iostream>
using namespace std;

struct record{
	int id;
	string name;
	float quiz[3];
};

int main (){
	record student;
	float grades;
	
		cout << "Student Record: \n";
		cout << "ID: ";
			cin >> student.id;
		cout << "Name: ";
			cin >> student.name;
			
		for(int x = 1; x<=3; x++){
			cout << "Quiz " << x  << ": ";
				cin >> student.quiz[x];
		}
		grades = (student.quiz[1]+student.quiz[2]+student.quiz[3])/3;
		
		cout << "\nStudent Record:\n";
		cout << "ID: " << student.id << endl;
		cout << "Name: " << student.name << endl;
		cout << "Grades " << grades << endl;
		
		if(grades >= 75 && grades <= 100){
			cout << "Remarks: Passed!";
		}else if(grades < 75){
			cout << "Remarks: Failed!";
		}else{
			cout << "Remarks: Over Graded!";
		}		
			
	

}
