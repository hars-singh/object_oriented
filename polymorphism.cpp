#include<iostream>
using namespace std;
class student
{   public:
	int age;
	virtual void introduce()/*This virtual keyword is used in polymorphism*/
	{    cout<<"Hey from base class method"<<endl;
	}
};

class teacher:public student{
	
	public:
		void introduce()
		{
		
		cout<<"Hey from derived class method"<<endl;
}

};
class doctor:public student{
	public:
		void introduce()
		{
			cout<<"Hey from farmer class"<<endl;
		}
};
void whothis(student &p)/*This pointer will help us in going to derived class*/
{
	p.introduce();
	
}
int main()
{
	teacher kaku;
	doctor ram;
	whothis(kaku);
	whothis(ram);
}
