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
	  Marks operator++(int)
	  { 
	    Marks duplicate (*this);/* We build this duplicate object by passing current object in it which takes the copy which is in line while after the line effect is seen*/
	  	mark+=1;
	  	return duplicate;
	  }
	  friend Marks operator--( Marks &,int);
	
};

Marks operator--(Marks &m,int)
{
	Marks duplicate(m);
	m.mark-=1;
	return duplicate;
}

int main(){
	Marks anilsmark(80);
	anilsmark.yourmarkplease();
	(anilsmark++).yourmarkplease();
	anilsmark.yourmarkplease();
	
	
	
}
