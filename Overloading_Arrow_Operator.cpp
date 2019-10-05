#include<iostream>
using namespace std;
class marks{
int mark;
public:
	marks(int m)
     {
     	mark=m;
	 }

void whatisyourmark()
{
	cout<<"Hey! I got"<<mark<<"In the exam"<<endl;
}

marks *operator->()/*This is how you can return the same object*/
{
	return this;
}
	
};


int main()
{
	
    marks anil(10);
    anil.whatisyourmark();
    marks iolk(30);
    iolk->whatisyourmark();
	  return 0; 	  
	}
