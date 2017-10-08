#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;


int QE(double a, double b, double c)
{
	float x;
	
	ofstream f2;
	f2.open("output.txt");
	
	if(a==0) 
	{
		x=-c/b;
		cout<<"x= "<< x <<endl;
		return 1;
	}
	
	if(c==0)
	{
		x=-b/a;
		cout<<"x= "<<x<<endl;
		return 1;
	}	
	
	else
	{
		float d;
		
		d = b*b-4*a*c;
	
		if(d<0)   //if d<0 then the quadratic equation has no solution
		{
			//cout<<-1<<endl;
			f2<<-1<<endl;
			return -1;
		}
		
		if(d==0)  //if d=0 then the quadratic equation has only one solution
		{
			x=-b/(2*a);
			//cout << 1 << " "<< x << endl;
			f2 << 1 << " "<< x << endl;
			float s = (a*(x*x)+b*x+c);
			
			//cout << "Solution is " << s << endl;
			return 1;
		}
		
		if(d>0)   //if d=0 then the quadratic equation has TWO solution
		{
			float x1=(-b+sqrt(d))/(2*a);
			float x2=(-b-sqrt(d))/(2*a);
			
		//	cout<< "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
 		/*	cout << 2 << " ";
			if(x1<x2) cout << x1 << " " << x2 << endl;
			if(x2<x1) cout << x2 << " " << x1 << endl;*/
			
			
			f2 << 2 << " ";
			if(x1<x2) f2 << x1 << " " << x2 << endl;
			if(x2<x1) f2 << x2 << " " << x1 << endl;
			
			
			
			float s1 = (a*(x1*x1)+b*x1+c);
			float s2 = (a*(x2*x2)+b*x2+c);
			
			//if(s1<s2) cout << s1 << " " << s2 << endl;
			//if(s2<s1) cout << s2 << " " << s1 << endl;
			
			return 2;
		}
	}
	 f2.close();
	
}


int main()
{

	ifstream f1;
	f1.open("input.txt");
	
	
  int a, b, c;
  f1>>a>>b>>c;
  
  
  
  /*cout << " Enter a value a: \n";
    cin >> a;
  cout << " Enter a value b: \n";
    cin >> b;
  cout << " Enter a value c: \n";
    cin >> c;*/
    
	QE(a,b,c);
  f1.close();
 
}
