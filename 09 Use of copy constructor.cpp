/*WAP to demostrate copy constructor*/

#include<iostream>
#include<conio.h>
using namespace std;
class Book{
	private:
		int id;
		string author;
		float price;
	public:
		Book(){}
		Book(int i,string a,float p):id(i),author(a),price(p){
		}
		void getdata(){
			cout<<"Enter book id :";
			cin>>id;
			cout<<"Enter book author :";
			cin>>author;
			cout<<"Enter book price :";
			cin>>price;
		}
		Book(Book &b){
			id=b.id;
			author=b.author;
			price=b.price;
		}
		void showdata(){
			cout<<endl<<"Book id is :"<<id<<endl;
			cout<<"Book author is :"<<author<<endl;
			cout<<"Book price is :"<<price;
		}
		
};
int main(){
	Book b1;
	b1.getdata();
	b1.showdata();
	Book temp(b1);
	temp.showdata();
	getch();
}
