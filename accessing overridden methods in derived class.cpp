#include<iostream>
using namespace std;
class student
{   public:
	void introduce()
	{
		 cout<<"Hey ! you are seeing a base class method"<<endl;
	}
	
};
class teacher:public student{
	public:
	void introduce()
	{
		cout<<"Hey ! you are seeing a derived class method"<<endl;
	}
};

int main()
{
	teacher kaku;
	kaku.introduce();
	kaku.student::introduce();
	return 0;
}
