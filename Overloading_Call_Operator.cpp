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

marks operator()(int mk)/*This is how you can define the call operator*/
{
	
	mark =mk;
	return mark;
	}	
};

int main()
{
	
    marks anil(10);
    anil.whatisyourmark();
    anil(20);/*Through object we call call operator*/
    anil.whatisyourmark();
	return 0; 	  
	}
