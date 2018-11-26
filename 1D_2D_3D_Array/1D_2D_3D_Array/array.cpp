#include<iostream>
using namespace std;


class OneDimentional
{
private:
	int iSize;
	int *p;
public:
	OneDimentional(int);
	OneDimentional(OneDimentional &);
	~OneDimentional();
	void Accept();
	void Display();
};

OneDimentional::OneDimentional(int iLength=4)
{
	iSize=iLength;
	p=new int[iSize];
}

OneDimentional::OneDimentional(OneDimentional &ref)
{
	this->iSize=ref.iSize;
	this->p=new int[iSize];
	for(int i=0;i<iSize;i++)
	{
		this->p[i]=ref.p[i];
	}
}

OneDimentional::~OneDimentional()
{
	delete[]p;
}

void OneDimentional::Accept()
{
	cout<<"Enter the Elements:-\n";
	
	for(int i=0;i<iSize;i++)
	{
		cin>>p[i];
	}
}


void OneDimentional::Display()
{
	cout<<"Elements of 1D Array:-\n";
	
	for(int i=0;i<iSize;i++)
	{
		cout<<p[i];
	}
}

int main()
{
	OneDimentional oobj1(5);
	oobj1.Accept();
	oobj1.Display();


	OneDimentional *optr=new OneDimentional(5);
	optr->Accept();
	optr->Display();
	delete optr;

	return 0;
}












