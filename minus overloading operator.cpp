#include<iostream>
using namespace std;
class complex{
private:
int real;
int img;
public:
	complex()
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
	complex operator +(complex k){
		complex temp;
		temp.real=real+k.real;
		temp.img=img+k.img;
		return temp;
	}
	complex operator -(complex k);
	
};

complex	complex:: operator -(complex k)/*first return type then class name::(scope resolution operator) and then opeartor keyword */
	{
		complex teamp;
		teamp.real=real-k.real;
		teamp.img=img-k.img;
		return teamp;
	}
int main()
{
	complex m1(10,20);
	complex m2(29,30);
	complex m3=m1+m2;
	complex m4=m1-m2;
	m3.display();
	m4.display();
}
