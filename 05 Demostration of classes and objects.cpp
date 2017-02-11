/*WAP to enter the name and percentage of students using classes and objects*/

#include<iostream>
#include<conio.h>
using namespace std;
class Student{
	private:
		char name[20];
		int number;
		int percentage;
	public:
		void getdata(){
			cout<<"Enter the name of a student"<<endl;
			cin>>name;
			cout<<"Enter the phone number of a student"<<endl;
			cin>>number;
			cout<<"Enter the percentage of a student"<<endl;
			cin>>percentage;
		}	
		void showdata(){
			cout<<"The name of a student is :"<<name<<endl;
			cout<<"The phone number of a student is :"<<number<<endl;
			cout<<"The percentage of a student is :"<<percentage<<endl;
			}
};
int main(){
	Student s1,s2,s3;
	s1.getdata();
	s2.getdata();
	s3.getdata();
	s1.showdata();
	s2.showdata();
	s3.showdata();
	getch();
	return 0;
}
