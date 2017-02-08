/*Define two functions Average and Small which take two input from the user.
WAP to use return by refrence to assigh the average value to small input*/



#include<iostream>
#include<conio.h>
using namespace std;
int Average(int n1,int n2){
	int avg;
	avg=(n1+n2)/2;
	return avg;
}
int &Small(int &n1,int &n2){
	if (n1>n2){
		return n2;
	}
	else{
		return n1;
	}
}
int main(){
	int n1,n2;
	cout<<"Enter the value of two numbers"<<endl;
	cin>>n1>>n2;
	cout<<"The average of two numbers is :"<<Average(n1,n2)<<endl;
	cout<<"The small number is :"<<Small(n1,n2)<<endl;
	Small(n1,n2)=Average(n1,n2);
	cout<<"The two numbers after assigning small number to average is:"<<endl<<n1<<endl<<n2;
	getch();
	return 0;
	
}
