#include<iostream>
using namespace std;
class book{
public:
string name;
void caller()
{
  cout<<"Your name is anthony "<<name<<endl;
}
};
int main()
{
   book book1;
   book book2;
   book1.name ="Harsh";/*This will initialize the name variable corrosponding to object book1 of class book*/
   book2.name ="Arpit";/*This will initialize the name variable corrosponding to object book2 of class book*/
   book1.caller();/*Now calling the function caller where we are calling it through object book1 and value of name is giving as "harsh"*/
   book2.caller();/*Now calling the function caller where we are calling it through object book1 and value of name is giving as "harsh"*/
}
