/*Create an abstract class Faculty with fields name and ID. Provide a pure virtual function salary(). Derive a class 
Permanent Faculty from Faculty. The class has additional attributes years of service and basic pay. The salary of 
permanent faculty is computed as the sum of basic pay, medical allowance and house rent. Medical allowance is 10% of 
basic pay and house rent is 25% of the basic pay. Derive another class Visiting Faculty from Faculty. The class has 
attributes per hour rate and number of hours taught. The salary of visiting faculty is computed by multiplying the
per hour rate with the number of hours taught. Derive another class Contractual Faculty from Faculty. The class has 
additional attributes no of days worked and per day salary. The salary of contractual faculty can be calculated by 
multiplying no of days worked with per day salary. Write a program to declare three pointers of class Faculty. 
Create an object each of visiting, permanent, contractual faculty, assign their addresses to pointers of base 
class, set the values of data members and call the salary function for each.*/
#include<iostream>
#include<string>
using namespace std;

class faculty {
protected:
string name;
int ID;
public:
virtual int salary() = 0;
};
class P_F : public faculty {
int year_of_service, basic_pay;
public:
void setb_p(int bp)
{
basic_pay = bp;
}
int salary() {
return (basic_pay + (10 * basic_pay) + (25 * basic_pay));
}
};
class v_f : public faculty {
int h_r, no_of_h_taught;
public:
void set_values(int hr, int no_ht) {
h_r = hr;
no_of_h_taught = no_ht;
}
int salary() {
return (h_r * no_of_h_taught);
}
};
class c_f : public faculty {
int no_of_days, per_day_salary;
public:
void set_values(int days, int per_day_sal) {
no_of_days = days;
per_day_salary = per_day_sal;
}
int salary()
{
return (no_of_days * per_day_salary);
}
};
int main()
{
P_F pf;
v_f vf;
c_f cf;

pf.setb_p(1000); // Setting basic pay for P_F object
vf.set_values(20, 50); // Setting hourly rate and number of hours taught for v_f object
cf.set_values(30, 500); // Setting number of days and per day salary for c_f object
faculty* f1, * f2, * f3;
f1 = &pf;
f2 = &vf;
f3 = &cf;
int salary1 = f1->salary(); // Calculating salary for f1
int salary2 = f2->salary(); // Calculating salary for f2
int salary3 = f3->salary(); // Calculating salary for f3
cout << "Salary for f1: " << salary1 << endl;
cout << "Salary for f2: " << salary2 << endl;
cout << "Salary for f3: " << salary3 << endl;
return 0;
}
