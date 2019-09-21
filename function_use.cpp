#include<iostream>
using namespace std;
class book{/*defining a class which consist of a function pop*/

public:/*defining type of a class*/
void pop()
{
  cout<<"Your name is anthony gonsalways"<<endl;
}
};
int main()
{
      book book1;/*creating a object corrosponding to a particular class*/
      book1.pop();/*calling the function with the help of te object created*/
}
