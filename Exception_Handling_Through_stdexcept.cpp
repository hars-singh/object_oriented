#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	int a =10;
	int b= 0;
	try{
		if (b == 0)
		throw runtime_error("Divide by zero error occure");/*We are using the class runtime error for stdexcept header file*/
		int c = a/b;
		cout<<c<<endl;
}catch(runtime_error &error){/*Here given the reference of error*/
	cout<<"Exception Occured "<<endl<<error.what()<<endl;/*error.what() function gives the value that we pass in the object of the class runtime error*/
}
 return 0;

}
