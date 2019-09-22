#include<iostream>
using namespace std;
class student
{   public:
	int age;
	void introduce()
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
void whothis(student p)/*this is part where base class type object is feeded.*/
{
	p.introduce();
	
}
int main()
{
	teacher kaku;
	kaku.introduce();
	whothis(kaku);
}
