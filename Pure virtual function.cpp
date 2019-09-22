#include<iostream>
using namespace std;
class student
{   public:
	int age;
	virtual void introduce()=0;/*Pure virtual function*/
};
    void student::introduce()
	{    cout<<"Hey from base class method"<<endl;
	}
class doctor:public student{
	public:
		void introduce()
		{
			cout<<"Hey from farmer class"<<endl;
		}
};
void whothis(student &p)
{
	p.introduce();
	
}
int main()
{   student ram;/*you can not create object of any abstract class*/
	doctor kaku;
	whothis(kaku);
	
}
