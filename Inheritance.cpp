#include<iostream>
using namespace std;
class student
{
public:
int age;
string name;
void setage(int iage){age =iage;}
void setname(string iname){name =iname;}
};

class puppy:public student{/*This is how we declare puppy class whic inherit all the prperty of student class in itself*/
  public:
int id;
void setid(int iid){
id =iid;
}
void display()
{

  cout<<name<<" is a brilliant guy of my class and his age is"<<endl<<age<<" years"<<" and his roll number is "<<id<<"."<<endl;
}
};
int main()
{
puppy student1;/*We will create only the object pf puppy class which will be having acess of age, name and id variable and setage, setname and display function.
student1.setage(23);
student1.setname("Harsh Singh");
student1.setid(90788);
student1.display();



}
