#include<iostream>
using namespace std;
class student
{   public:
	int age;
	void introduce(int age)
	{    this->age =age;
		 cout<<this->age<<endl;
	}
};


int main()
{
	student kaku;
	kaku.introduce(25);
}
