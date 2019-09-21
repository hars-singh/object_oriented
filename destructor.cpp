#include<iostream>
using namespace std;
class book
{ 
  private:
  int age;
  int getage(int value)
 { 
  age =value;
  return (age-5);
 }
   public:
   string name;
   void takeage();
   void setage(int value);
   book()
   {
     cout<<"Constructor called"<<endl;
   }
   ~book()
   {
    cout<<"Destuctor called"<<endl;

   }
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
  delete book1;
  return 0;
}

