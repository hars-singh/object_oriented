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
     cout<<"This is not a miracle"<<endl;
   }
   book(string name ,int age =10)
   {
     cout<<name<<endl;
     cout<<age<<endl;
   }
   book(int age)
   {
    cout<<age<<endl;

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
  book *book2 =new book("Harsh Singh",54);
  book *book3=new book(34);
  book1->setage(25);
  book1->takeage();
  return 0;
}

