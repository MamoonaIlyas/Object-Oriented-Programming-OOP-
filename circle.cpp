//Define a class Circle with its radius and center(x,y) as data members. Provide 
//appropriate constructors and methods to compute the area and circumference of the
//circle. Call these methods from the main() program.
#include<iostream>
using namespace std;
class circle
{
    private:
    int x,y;
    float r;
    public:
    circle()
    {
        x=0,y=0;
        r=0.0;
    }
    circle(int a,int b, int c)
    {
        x= a,y= b,r=c;
    }
    float area()
        {
            return 3.14*r*r;
        }
        float circumference()
        {
            return 2*3.14*r;
        }
    
};
int main()
{
    circle c1(2,8,6.6);
    cout<<"Radius "<<c1.area()<<endl;
    cout<<"Circumference "<<c1.circumference()<<endl;
    return 0;
}