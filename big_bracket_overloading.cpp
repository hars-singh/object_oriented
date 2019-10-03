#include<iostream>
using namespace std;
class Marks{
	int marks[3];
	public:
		Marks(int m1, int m2, int m3){
			marks[0] = m1;
			marks[1] = m2;
			marks[2] = m3;
		}
      int operator[](int i)/*This function is non static function*/
      {
      	return marks[i];
	  }
	/*We can not overload it by friend operator*/
};

int main(){
	Marks anilsmark(80, 20, 45);
	cout<<anilsmark[1]<<endl<<anilsmark[2]<<endl<<anilsmark[0];
}
