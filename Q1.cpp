#include <iostream>
using namespace std;

class Bank{
	public:
		static int empId;
		static int totalEmp;
		int RealID;
		string empName;
		int salary;
		Bank(string x, int y){
			empName = x;
			salary = y;
			empId++;
			totalEmp++;
			RealID = empId;
		}
		void display(){
			cout << "Name: " << empName << endl;
			cout << "Salary: " << salary << endl;
			cout << "Employee ID: " << RealID << endl; 
		}
};

int Bank :: empId = 1001;
int Bank :: totalEmp = 0; 


int main(){

	Bank b1("Husnain", 50000);
	b1.display();
	Bank b2("Emaan", 300000);
	b2.display();
	Bank b3("Zunaira", 200000);
	b3.display();
	cout << "Total Employee number: " <<Bank :: totalEmp << endl;
	
	return 0;
}


