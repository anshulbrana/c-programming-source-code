#include<iostream>
#include<conio.h>
using namespace std;
float Area(int length, float breadth){
	float TotalArea;
	TotalArea=length*breadth;
	return TotalArea;
}
float Area(float radius){
	float TotalArea;
	TotalArea= 2*(22/7)*radius*radius;
	return TotalArea;
}
float Area(float base,float height){
	float TotalArea;
	TotalArea= 0.5*base*height;
	return TotalArea;
}
int main(){
	float breadth,radius,base,height;
	int length;
	cout<<"Enter the value of length and breadth of rectangle"<<endl;
	cin>>length>>breadth;
	cout<<"Enter the value of radius of a circle"<<endl;
	cin>>radius;
	cout<<"Enter the value of base and height of a traingle"<<endl;
	cin>>base>>height;
	cout<<"The area of a rectangle is :"<<Area(length,breadth)<<endl;
	cout<<"The area of a cirlcle is :"<<Area(radius)<<endl;
	cout<<"The area of a triangle is :"<<Area(base,height)<<endl;
	getch();
	return 0;
}
