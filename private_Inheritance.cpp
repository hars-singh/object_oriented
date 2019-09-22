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

class puppy:private student{
  public:
int id;
void setid(int iid){id =iid;}
void display(){

  cout<<"My name is "<<name<<"and my age is "<<age<<". I do have a shop which was named as"<<shop_name<<" by my grand father "<<"and one more thing that regestration number of my shop is "<<id<<"."<<endl;
}
void ssetage(int iage){
  setage(iage);
  }

};

class petro: public puppy{
  public:
void sssetage(int age)
{
ssetage(age);/*As in private inheritance all the protected and public members of base class behaves like private members of that derived class so they will not be accessible furthur vy any derived class. We need to use some function indirectly in the class to access those functions.*/

}


};
int main()
{
puppy student1;
student1.ssetage(20);
student1.setid(234678);
student1.display();
}
