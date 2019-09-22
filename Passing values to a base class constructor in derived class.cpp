#include<iostream>
using namespace std;
class mother
{   public:
	int height;
	mother(int x)
	{    height =x;
		cout<<"Mother calss constructor is called"<<endl;
	}
	
};
class child:public mother{
	public:
    child(int iheight):mother(iheight){/*This is how we pass value of iheight into base constructor in derived constructor*/
    	cout<<"Child class constructor is called"<<endl;
	}
	
	void display()
	{
		
		cout<<"Height is "<<height<<" feet"<<" and skin color is "<<". "<<endl;
	}
};

int main()
{
	child kaku(26);
	kaku.display();
	return 0;
}
