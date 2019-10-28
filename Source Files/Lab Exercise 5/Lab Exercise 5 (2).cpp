#include<iostream>
#include<string.h>
using namespace std;

char userInput[20];

class Students{
	private:
		int id;
		float grades;
		string name;
	public:
		void getInput(int studentId, string  studentName, float average){
			id = studentId ;
			name = studentName;
			grades = average;
		}
		
		void setInput(){
			int studentId; string studentName; float average, quizzes[3];
			
			
			cout << "\nEnter Student Record: " << endl;
			cout << "ID: ";
				cin.getline(userInput,20);
				studentId = atoi(userInput);
			cout << "Name: ";
				cin.getline(userInput,20);
				studentName = userInput;
				
			for(int x = 1; x<=3; x++){
				cout << "Quiz " << x  << ": ";
					cin.getline(userInput,20);
					quizzes[x] = atoi(userInput);
			}
			average = (quizzes[1]+quizzes[2]+quizzes[3])/3;
			
			getInput(studentId,studentName,average);
			
		}
		
		void showInput(){
			int studentId; string studentName, x;
			
	
			cout << "\t" << id << "\t\t\t" << name << "\t\t\t" << grades << "\t\t"  ;
			
			if(grades >= 75 && grades <= 100){
				cout << "Passed!";
			}else if(grades < 75){
				cout << "Failed!";
			}else{
				cout << "Over Graded!";
			}	
			cout << endl;
		}
		void remarks(){
//				
		}
};


int main (){
	Students a, b, c, d, e;
	a.setInput();
	b.setInput();
	c.setInput();
	d.setInput();
	e.setInput();
	
	cout << "\nNO.\tStudent No\t\tName\t\t\tGrades\t\tRemarks" << endl;
	
	cout << "1";
	a.showInput();
	cout << "2";
	b.showInput();
	cout << "3";
	c.showInput();
	cout << "4";
	d.showInput();
	cout << "5";
	e.showInput();
		

	
}


