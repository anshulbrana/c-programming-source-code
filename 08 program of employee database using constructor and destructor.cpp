/*WAP to demostrate constructor and destructor. Create a class Employee with address age and salary and display them*/

#include<iostream>
#include<conio.h>
using namespace std;
class Employee{
	private:
		string name,address;
		int age;
		float salary;
	public:
		Employee(){}
		Employee(string n,string a,int e,float s):name(n),address(a),age(e),salary(s){
		}
		void getvalue(){
			cout<<"Enter the name of employee :"<<endl;
			cin>>name;
			cout<<"Enter the address of employee :"<<endl;
			cin>>address;
			cout<<"Enter the age of employee :"<<endl;
			cin>>age;
			cout<<"Enter the salary of employee :"<<endl;
			cin>>salary;
		}
		void showdata(){
			cout<<"Employee name :"<<name<<endl;
			cout<<"Employee address :"<<address<<endl;
			cout<<"Employee age :"<<age<<endl;
			cout<<"Employee salary :"<<salary<<endl;
		}
		~Employee(){
			cout<<endl<<"Destructor called";
		}
};
int main(){
	Employee e1;
	e1.getvalue();
	e1.showdata();
	getch();
	return 0;
}
