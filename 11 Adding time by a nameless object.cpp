/*WAP to add two times using nameless object*/

#include<iostream>
#include<conio.h>
using namespace std;
class Time{
	protected:
		int hour;
		int minute;
	public:
		Time(){}
		Time(int h,int m):hour(h),minute(m){}
		void showtime(){
			cout<<"The  total time is :"<<endl<<hour<<":"<<minute;
		}
		Time addtime(Time &x,Time &y){
		Time temp;
		temp.hour=x.hour+y.hour;
		temp.minute=x.minute+y.minute;	
		if(temp.minute>60){
			temp.minute=temp.minute%60;
			temp.hour=temp.hour+1;
		}
		return temp;
		}
};
int main(){
	int x,y;
	cout<<"Enter the value of first hour and minute "<<endl;
	cin>>x>>y;
	Time t1(x,y);
	cout<<"Enter the value of second hour and minute "<<endl;
	cin>>x>>y;
	Time t2(x,y);
	Time temp;
	temp=temp.addtime(t1,t2);
	temp.showtime();
	getch();
	return 0;
		
}
