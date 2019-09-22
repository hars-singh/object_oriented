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

class puppy:protected student{
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
int main()
{
puppy student1;
student1.ssetage(20);/*We can not access setage function directly here as it is procted and can be accessed only in base and derived class so we accessed it through ssetage function in derived class*/
student1.setid(234678);
student1.display();
}
