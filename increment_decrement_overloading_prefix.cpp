#include<iostream>
using namespace std;
class Marks{
	int mark;
	public:
		Marks(){
			mark =0;
		}
		Marks(int m){
			mark = m;
		}
	  void yourmarkplease()
	  {
	  	
	  	cout<<"My marks are "<<mark<<endl;
	  	
	  }
	  void operator++()
	  {
	  	mark+=1;
	  }
	  friend void operator--( Marks &);/*A refernce object is needed while using Friend operator*/
	
};

void operator--(Marks &m)/*Using the object of the class Marks*/
{
	
	m.mark-=1;
}

int main(){
	Marks anilsmark(80);
	anilsmark.yourmarkplease();
	++anilsmark;/*Increment anilsmark object which will increase the value of mark*/
	anilsmark.yourmarkplease();
	--anilsmark;
	anilsmark.yourmarkplease();
	
	
	
}
