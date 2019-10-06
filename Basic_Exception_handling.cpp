#include<iostream>
#include<exception>
using namespace std;

int main()
{
	int a =10;
	int b= 0;
	try{/*This is how you write try block for exception handling*/
		if (b == 0)
		throw"Divide by zero error occure";
		int c = a/b;
		cout<<c<<endl;
}catch(const char *e){/*This is how we write catch block*/
	cout<<"Exception Occured "<<endl<<e<<endl;
}
 return 0;

}
