/*Program to demostrate pass by refrence*/



#include<iostream>
#include<conio.h>
using namespace std;
void swap(int &n1,int &n2){
	int temp;
	temp=n1;
	n1=n2;
	n2=temp;
}
int main(){
	int n1,n2;
	cout<<"Enter the value of two numbers"<<endl;
	cin>>n1>>n2;
	swap(n1,n2);
	cout<<"The numbers after swap is"<<endl<<n1<<endl<<n2;
	getch();
	return 0;
}
