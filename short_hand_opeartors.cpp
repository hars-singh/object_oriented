#include<iostream>
using namespace std;
class student{
	int maths;
	public:
		student(){
			
			maths=0;
		}
		student(int m)
		{
			maths=m;
		}
	
		
	
  int  operator +=(int bonus)
{
	maths=maths+bonus;
	return maths;
}
	void display()
		{
			cout<<maths<<endl;
		}
 friend int operator-=(student &curobj,int lonus);/*While declaring friend function current object is required along with variabl*/
};

 int operator-=(student &curobj,int lonus)/*
 {
 	curobj.maths =curobj.maths-lonus;
 }
int main()
{
   student m1(20);
   m1.display();
   m1+=20;
   m1.display();
   m1-=20;
   m1.display();
   return 0;
}
