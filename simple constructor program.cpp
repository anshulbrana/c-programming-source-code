#include<iostream>
#include<conio.h>
using namespace std;
class Sum{
	private:
		int first_num,second_num,sum;
		public:
			Sum():first_num(0),second_num(0){
			}
			void getdata(){
				cout<<"Enter first number"<<endl;
				cin>>first_num;
				cout<<"Enter second number"<<endl;
				cin>>second_num;
			}
			int calculation(){
				sum=first_num+second_num;
				return sum;
			}
			void showdata(){
				cout<<"The sum is :"<<sum;
			}
};
int main(){
	Sum s1;
	s1.getdata();
	s1.calculation();
	s1.showdata();
	getch();
	return 0;
}
