#include <iostream>
using namespace std;
void methedology(){/*The class animal is inside methedology function.So it is called local class*/
class animal{
  public:
  int age;
 
   int pincode;
   string name;
void display()
{
  cout<<pincode<<endl<<name<<endl;
}
 
};
animal lion;/*Here we are cretaing object of the local class inside the function and using this object to define the variables inside it*/
lion.pincode=2018014;
lion.name ="Harsh Singh";
lion.display(); 
}
int main() {
methedology();/*Here we are accesssing the local class through the methedology function*/
return 0;
}
