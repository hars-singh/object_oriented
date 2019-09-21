#include<iostream>
using namespace std;
void display();
int main()
{
	display();/*value 1 will be printed*/
	 display();/*value 2 will be printed*/
	  display();/*value 3 will be printed*/
	   display();/*value 4 will be printed*/
    return 0;
}

void display()
{
	static int counter =0;/*Here counter is static variable which stores the value of it at one place and not initialize counter to 0 at every iteration*/
	cout<<++counter<<endl;
}
