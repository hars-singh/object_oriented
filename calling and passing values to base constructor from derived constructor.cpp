#include<iostream>
using namespace std;
class father
{   public:
	int height;
	father()
	{
		
	cout<<"Father class constructor is called"<<endl;
	}
	
};
class mother
{   public:
	string skincolor;
	mother()
	{
		cout<<"Mother calss constructor is called"<<endl;
	}
	
};
class child:public mother,public father{
	public:
    child(int iheight,string iskincolor):mother(),father(){
    	cout<<"Child class constructor is called"<<endl;
	}
	
	void display()
	{
		
		cout<<"Height is "<<height<<" feet"<<" and skin color is "<<skincolor<<". "<<endl;
	}
};

int main()
{
	child kaku(26,"White");
	kaku.display();
	return 0;
}
