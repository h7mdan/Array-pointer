#include<iostream>
	using namespace std;
	
	int main()
	{
		int p[5];
		
		cout<<"Enter elements: "<<endl;
		
		for(int i=0; i<5;i++)
		cin>>p[i];
		
		cout<<"\nYou entered:"<<endl;
		for(int i=0;i<5;i++)
			cout<<endl<<*(p+i);
			return 0;
	}
