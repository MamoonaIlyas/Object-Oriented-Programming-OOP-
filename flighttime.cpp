/*Write a complete C++ program with the following features. 
a.	Declare a class Time with three fields hour, minute and second 
b.	Provide appropriate constructors to initialize the data members. 
c.	Provide separate get() an set()methods for each of the data members. 
d.	Provide a method display() to print the time. 
e.	In the main(), using dynamic memory allocation, allocate memory for two Time                           
    objects, currentTime and FligthTime. 
f.	From main(), call the function getHour() for both the Time objects and provide the     
    estimated number of hours in the departure of your flight. (No need to take into account  
    minutes or seconds)  
*/
#include<iostream>
using namespace std;
class Time {
  private:
    int hour;
    int minute;
    int second;

  public:
    Time(int h, int m, int s) {
      hour = h;
      minute = m;
      second = s;
    }

    void setHour(int h) {
      hour = h;
    }
    int getHour() {
      return hour;
    }

    void setMinute(int m) {
      minute = m;
    }
    int getMinute() {
      return minute;
    }

    void setSecond(int s) {
      second = s;
    }
    int getSecond() {
      return second;
    }

    void display() {
      cout << hour << ":" << minute << ":" << second << endl;
    }
};
int main()
{
	 
	Time *ct,*ft;
	ct = new Time(9, 7, 8);
	ft = new Time(13, 5, 6);
	ct->display();
	ft->display();
cout << "the  estimated number of hours in the departure of your flight is " << endl;
cout << ft->getHour() - ct->getHour() << endl;
	system("pause");
	return 0;
}

