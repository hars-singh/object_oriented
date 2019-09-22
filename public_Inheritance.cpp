#include<iostream>
using namespace std;
class student{
protected:
string name;
public:
int age;
string shop_name;
void setage(int iage){age =iage;}
void setshop_name(string ishop_name){shop_name =ishop_name;}
void setname(string iname){
name =iname;
}
};

class puppy:public student{
  public:
int id;
void setid(int iid){id =iid;}
void display(){

  cout<<"My name is "<<name<<"and my age is "<<age<<". I do have a shop which was named as"<<shop_name<<" by my grand father "<<"and one more thing that regestration number of my shop is "<<id<<"."<<endl;
}

};
int main()
{
puppy student1;
student1.setage(20);
student1.setshop_name("kalrashukla");
student1.setname("Harsh Singh");
student1.setid(234678);
student1.display();
student1.name="Harsh Singh";/*In the protected access modifier case variable and functions are only acessible by the base class and derived class not by the object who is calling them out of the class*/ 
}
