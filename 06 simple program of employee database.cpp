#include<iostream>
#include<conio.h>
using namespace std;
class Employee{
	private:
		char name[20],address[40];
		int age;
		float salary;
	public:
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
		
};
int main(){
	Employee e1;
	e1.getvalue();
	e1.showdata();
	getch();
	return 0;
}
