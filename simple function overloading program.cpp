#include<iostream>
#include<conio.h>
using namespace std;
int Add(int n1,float n2){
	float sum1;
	sum1=n1+n2;
	return sum1;
}
float Add(int n3,int n4){
	float sum2;
	sum2=n3+n4;
	return sum2;
}
int main(){
	int n1,n3,n4;
	float n2;
	float TotalSum;
	cout<<"Enter the four numbers :"<<endl;
	cout<<"n1 :"<<endl;
	cin>>n1;
	cout<<"n2 :"<<endl;
	cin>>n2;
	cout<<"n3:"<<endl;
	cin>>n3;
	cout<<"n4 :"<<endl;
	cin>>n4;
	TotalSum=Add(n1,n2)+Add(n3,n4);
	cout<<"The total sum is "<<TotalSum;
	getch();
	return 0;
	
}
