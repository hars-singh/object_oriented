#include <iostream>
using namespace std;
class animal{
  public:
  int age;
  class monkey{
   public:
   int pincode;
   string name;
  };
 monkey mon;/*Here we are creating object of inner class monkey as mon*/
 void display()
 {
   cout<<"Hello my age is "<<age<<" and pincode of my house is "<<mon.pincode<<". My name is "<<mon.name<<"."<<endl;
 }
 
};
int main() {
animal anil;
anil.mon.pincode=208014;/*As we have already created object of base class then for accessing the nested class we need to use dot operator which will agin dotted by variable name or function name*/
anil.mon.name="Harsh Singh";
anil.age =24;
anil.display();
return 0;
}
