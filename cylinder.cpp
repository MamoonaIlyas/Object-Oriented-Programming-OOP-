/*Create a class Point with two data members x and y. Provide appropriate constructors, get, set and display methods. 
Derive a class Circle from Point. The circle, in addition to the center (Point) also has radius as its data member. 
Provide constructors, get and set methods in the circle class. Also provide methods to compute area and circumference
of the circle. (Area of circle is PI * r * r and Circumference is: 2 * PI * r). Derive a class Cylinder from circle 
with a data member height. Provide constructors and set/get methods to set/get height of the cylinder. 
Provide a function to compute area of cylinder. (A = 2 x area of circle + 2*PI*r*height). Also provide a function to 
compute the volume of cylinder (PI * r*r*h). Create an object of class Cylinder and compute its volume and surface 
area. Print your name, reg,no, section, semester in main using cout statements.*/
#include<iostream>
using namespace std;
class Point
{
protected:
	double x;
	double y;
	public:
        Point()
		{ }
		Point(double a,double b)
		{ 
			x=a;
			y=b;
		}
		double getx()
		{
		    return x;
		}
		double gety()
		{
			return y;
		}
		void set_values(double c,double d)
		{
			x=c;
			y=d;
		}
		void display()
		{
		     cout << "Point (" << x << ", " << y << ")";
		}
};
class Circle : public Point {
public:
    double radius;
public:
	Circle():radius(0.0)
	{ 
	}
	Circle(double r):radius(r)
	{  }
	double get_radius()
	{
		return radius;
	}
	void set_radius(float g)
	{
		radius=g;
	}
	double Area_circle()
	{
		return 3.14*radius*radius;
	}
	double circumference_circle()
	{
		return 2*3.14*radius;
	}
};
class cylinder:public Circle
{
  private:
	  double height;
 public:
	 cylinder(double r,double h):Circle(r),height(h)
	 {  }
	 double get_height()
	 {
		 return height;
	 }
	 void set_height(double t)
	 {
		 height=t;
	 }
	 double Area_cylinder()
	 {
		 return 2*Area_circle()+2*3.14*radius*height;
	 }
	 double Volume_cylinder()
	 {
		 return 3.14*radius*radius*height;
	 }
};
int main()
{

	cylinder c1(5.6,7.8);
	cout<<"volume of cylinder:"<<c1.Volume_cylinder()<<endl;
	cout<<"area  of cylinder:"<<c1.Area_cylinder()<<endl;
	cout<<"MY NAME IS MAMOONA"<<endl;
	cout<<"my section is 2_B"<<endl;
	cout<<"my roll no is BSE_2022_080"<<endl;
	system("pause");
	return 0;
}
