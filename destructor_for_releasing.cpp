#include<iostream>
using namespace std;
class book
{ private:
  int *age;
  string *name;
   public:
   book(int iage , string iname)
   { 
     age =new int;
     name = new string;
     *age=iage;
     *name=iname;
     cout<<"Constructor called"<<endl;
   }
   ~book()
   { 
     delete age;/*when destructor is called age and name of that object are deleted*/
     delete name;
     cout<<"Destuctor called"<<endl;

   }
};



int main()
{
  book *book1 =new book(20, "Harsh Singh");
  delete book1;/*Here destructor is used for releasing variable's related to particular object book1 of class book*/
  return 0;
}

