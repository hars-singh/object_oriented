#include<iostream>
using namespace std;
class book{
  int age;
  int authorno;
public:
  book(){
            cout<<"Hola you are my love"<<endl;
         }
 friend void books(book book77);/*friend function is not the function of the class, actually it is function of another class*/
};

void books(book book77)/*That's how we define the friend function*/
{
cout<<"end of this world is near"<<endl;
}
int main()
{  
	  book book1;
    book book2;
    book book3;
    book book4;
    books(book1);/*That's how you call a friend function*/
    return 0;
}

