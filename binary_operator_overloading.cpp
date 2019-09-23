#include<iostream>
using namespace std;
class complex{
private:
int real;
int img;
public:
	complex()/*This is necessary coz if we will not form this empty constructor then we can not create temp object in the operator function*/
	{
		real=0;
		img=0;
	}
	complex(int r,int i)
	{
		
		real=r;
		img=i;
	}
	void display()
	{
		cout<<real<<endl<<img<<endl;
	}
	complex operator +(complex k){/*In this programme we are passing m2 as k and real and img are corrosponding to m1 "Go to Saurabh Shukla sir's youtube video to get conceptual clarity" */
		complex temp;
		teamp.real=real+k.real;
		temp.img=img+k.img;
		return temp;
	}
	
};
int main()
{
	complex m1(10,20);
	complex m2(29,30);
	complex m3=m1+m2;
	m3.display();
}
