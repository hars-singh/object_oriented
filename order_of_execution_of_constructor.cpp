#include<iostream>
using namespace std;
class student{
public:
int age;
student()
{
	cout<<"Constructor of this base is called"<<endl;
}
~student()
{
	cout<<"Destructor of the base is called"<<endl;
}
};

class puppy: student{
public:
puppy()
{
	cout<<"Constructor of the derived class is called"<<endl;
}
~puppy()
{
	
	cout<<"Destructor of the derived class is called"<<endl;
}


};

int main()
{
puppy student;
return 0;
}
