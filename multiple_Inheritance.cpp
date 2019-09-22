#include<iostream>
using namespace std;
class father
{   public:
	int height;
	
	
};
class mother
{   public:
	string skincolor;
	
	
};
class child:public father,public mother{/*This is how multiple inheritance is used in the programme*/
	public:
	void setproperties(int iheight,string iskincolor)
	{
		height=iheight;
		skincolor=iskincolor;
	}
	void display()
	{
		
		cout<<"Height is "<<height<<" feet"<<" and skin color is "<<skincolor<<". "<<endl;
	}
};

int main()
{
	child kaku;
	kaku.setproperties(6,"White");
	kaku.display();
	return 0;
}
