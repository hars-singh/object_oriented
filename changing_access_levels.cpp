#include<iostream>
using namespace std;
class student{
protected:
string name;
public:
int age;
void setage(int iage){age =iage;}
};

class puppy:private student{
  public:
  student :: name;/*Now as it is under umbrella of public sso name will behave like public variable*/
  student :: age;/*age will also behave same*/
int id;
void setid(int iid){id =iid;}
void display(){

  cout<<"My name is "<<name<<"and my age is "<<age<<". I do have a shop which was named as"<<" by my grand father "<<"and one more thing that regestration number of my shop is "<<id<<"."<<endl;
}
void ssetage(int iage){
  setage(iage);
  }

};

int main()
{
puppy student1;
student1.name="Harsh Singh";/*Now as we have changed the access level of name varibale from private to public by using resolution operator so we can change it's value.*/
student1.ssetage(20);
student1.setid(234678);
student1.display();
}
