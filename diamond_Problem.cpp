#include <iostream>
using namespace std;
class animal{
  public:
  int age;
  animal(){

cout<<"Inside animal Comstructo"<<endl;

  }
void method(){
cout<<"This is the method that I wanted to call"<<endl;
}
};
class tiger:virtual public animal{/*For implementing diamond problem this virtual keyword is used*/
  public:
  tiger(){
  cout<<"You are inside tiger constructor"<<endl;
  }
};

class lion:virtual public animal{/*For implementing diamond problem this virtual keyword is used in second level classes*/
  public:
  lion(){
  cout<<"You are inside lion constructor"<<endl;
  }
};

class liger:public tiger,public lion{
  public:
  liger()
  {
  cout<<"You are inside liger constructor"<<endl;
  }

};


int main() {
liger anil;/*As we are creating the object corrosponding to last level of class so when we call any base class method with the help of this object then it will be a diamond problem which is resolved with the help of the virtual keyword*/
anil.method();  
}
