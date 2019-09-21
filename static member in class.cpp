#include<iostream>
using namespace std;
class book{
public:
static int my_book;/*static variable declaration inside a public class*/
book()
{

  cout<<my_book<<endl;
}
};

int book::my_book=20;/*This is the way of intializing a static member of a class,coz it can not be intialized inside the class where it is declared*/
int main()
{
	  book book1;
    return 0;
}

