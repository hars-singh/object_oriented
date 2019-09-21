#include<iostream>
using namespace std;
class book
{ 
  private:/*We can not directly access private variales and methods outside of the class*/
  int age;/*So if we have to access private variables and methods outside the class then we build methods inside the public classes which communicates with the private classes for their methods and variables*/ 
  int getage(int value)
 { 
  age =value;
  return (age-5);
 }
   public:/*we can only access public variable and methods outside the class*/
   string name;
   void takeage();
   void setage(int value);
};


void book::takeage()
{
  cout<<book::age<<endl;
}

void book::setage(int value)
{
  book::age=book::getage(value);
}

int main()
{
  book *book1 =new book();
  book1->setage(25);
  book1->takeage();
  return 0;
}

