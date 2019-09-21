#include<iostream>
using namespace std;
class book{
public:
static int my_book;
book()
{
  my_book++;
  cout<<my_book<<endl;
}
};

int book::my_book=20;
int main()
{   cout<<book::my_book<<endl;
	  book book1;
    return 0;
}

