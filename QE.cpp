#include <iostream>
#include <cmath>

using namespace std;


void QE(double a, double b, double c)
{
	float x;
	
	if(a==0) 
	{
		x=-c/b;
		cout<<"x= "<< x <<endl;
		return;
	}
	
	if(c==0)
	{
		x=-b/a;
		cout<<"x= "<<x<<endl;
		return;
	}	
	
	else
	{
		float d;
		
		d = b*b-4*a*c;
		cout<<d<<endl; //test
	
		if(d<0)   //if d<0 then the quadratic equation has no solution
		{
			puts("The equation has no solution");
			return;
		}
		
		if(d==0)  //if d=0 then the quadratic equation has only one solution
		{
			x=-b/(2*a);
			cout << "x= " << x << endl;
			
			float s = (a*(x*x)+b*x+c);
			
			cout << "Solution is " << s << endl;
			return;
		}
		
		if(d>0)   //if d=0 then the quadratic equation has TWO solution
		{
			float x1=(-b+sqrt(d))/(2*a);
			float x2=(-b-sqrt(d))/(2*a);
			
			cout<< "x1 = " << x1 << ", " << "x2 = " << x2 << endl;
 			
			float s1 = (a*(x1*x1)+b*x1+c);
			float s2 = (a*(x2*x2)+b*x2+c);
			
			cout << "First solution is " << s1 << "\nSecond solution is " << s2 << endl;
			return;
		}
	}
	
}


int main()
{
  float a, b, c;
  cout << " Enter a value a: \n";
    cin >> a;
  cout << " Enter a value b: \n";
    cin >> b;
  cout << " Enter a value c: \n";
    cin >> c;
    
	QE(a,b,c);
  
}
