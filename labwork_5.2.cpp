#include<iostream>
using namespace std;

class Hasti
{
	private:
		int h;
		int p;
		
	public:
		void setData()
		{
			cout << "Enter the value of h : ";
			cin >> this -> h;
		}
		
		void setData2()
		{
			cout << "Enter the value of p : ";
			cin >> this -> p;
		}
		
		Hasti operator<(Hasti n)
		{
			if(this -> h < n.p)
			{
		        cout << "h is smaller than p...";
	        }
	        else
	        {
		        cout << "p is smaller than h...";
	        }
	
		}
 	
};

int main()
{
	Hasti h1,h2,h3;
	
	h1.setData();
	h2.setData2();
	
	h1 < h2;
	
	return 0;
	
}
