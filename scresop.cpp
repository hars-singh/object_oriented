#include<iostream>
using namespace std;
class book
{
   public:
   string name;
   void method();
};
void book::method()/*It is use of resolution operator in case of defining the method outside the class*/
{
  cout<<book::name<<endl;/*Its is example of acessing the variable in the function which is defined out of the scope of calss*/
}

int main()
{
  book *book1 =new book();
  book1->name="Harsh Singh";
  book1->method();
  return 0;
}

