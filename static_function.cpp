#include<iostream>
using namespace std;
class book{
public:
static int my_book;
book(){
my_book++;
}
static int books()
{ 
cout<<my_book<<endl;
return 0;

}
};

int book::my_book=20;
int main()
{   cout<<book::my_book<<endl;
	  book book1;
    book book2;
    book book3;
    book book4;
    book::books();/*This is how static functions are called*.
    return 0;
}

