#include <iostream>
using namespace std;

//with both using friend
class c2;
class c1
{
	int roll,r;
public:
	void ff(c2 f1);//------now member  of c1 class------//
	void setroll(int r);	
};

class c2{
	char name[100];
public:
	friend void c1::ff(c2  f1);//--now friend of c2 class--//
	void setname(char* n);
};

void c2::setname(char* n)
{
	strcpy(name,n);
}

void c1::setroll(int r)
{
	roll= r;
}

void c1::ff(c2 f1)
{
	cout<<"Name : "<<f1.name<<"\nRoll : "<<roll;
}

int main(int argc, char const *argv[])
{
	c1 a;
	c2 b;
	a.setroll(1830087);
	b.setname("Afzalur Rahaman");
	a.ff(b);//---------object pass to c2 class--------//
	        //-----calling by c1 class's objects because it is member function of c1 class------//

	return 0;
}