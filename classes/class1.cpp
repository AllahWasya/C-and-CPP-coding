// C++ program to demonstrate
// accessing of data members

#include<iostream>
#include<string.h>
using namespace std;
class ninth
{
	public:
	int rno;
	string name;
	void print()
	{
		cout<<"Name of Student with Roll "<<rno<<" is "<<name<<endl;
	}

};
class engineers
{
	public:
	int no;
	string name1;
	void print1()
	{
		cout<<"Name of Student with engineer no. "<<no<<" is "<<name1<<endl;
	}

};

int main()
{
	ninth obj;
	obj.name="Wasaya";
	obj.rno=125;
	obj.print();

	engineers obj1;
	obj1.name1="Ali";
	obj1.no=45;
	obj1.print1();
}
