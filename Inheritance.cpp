#include <iostream>
using namespace std;

// Base class
class Person
{
public:
    void showPerson()
    {
        cout << "I am a person." << endl;
    }
};

// Single Inheritance
class Student : virtual public Person
{
public:
    void showStudent()
    {
        cout << "I am a student." << endl;
    }
};

class Teacher : virtual public Person
{
public:
    void showTeacher()
    {
        cout << "I am a teacher." << endl;
    }
};

// Multilevel Inheritance
class Monitor : public Student
{
public:
    void showMonitor()
    {
        cout << "I am a class monitor." << endl;
    }
};

// Multiple Inheritance
class TeachingAssistant : public Student, public Teacher
{
public:
    void showAssistant()
    {
        cout << "I am a teaching assistant." << endl;
    }
};

// Hierarchical Inheritance
class SportsStudent : public Student
{
public:
    void showSports()
    {
        cout << "I participate in sports." << endl;
    }
};

// Hybrid Inheritance
class CollegeRepresentative : public Monitor, public Teacher
{
public:
    void showRepresentative()
    {
        cout << "I am a college representative." << endl;
    }
};

int main()
{
    cout << "1. Single Inheritance" << endl;
    Student s;
    s.showPerson();
    s.showStudent();

    cout << "\n2. Multilevel Inheritance" << endl;
    Monitor m;
    m.showPerson();
    m.showStudent();
    m.showMonitor();

    cout << "\n3. Multiple Inheritance" << endl;
    TeachingAssistant ta;
    ta.showStudent();
    ta.showTeacher();
    ta.showAssistant();

    cout << "\n4. Hierarchical Inheritance" << endl;
    SportsStudent ss;
    ss.showPerson();
    ss.showStudent();
    ss.showSports();

    cout << "\n5. Hybrid Inheritance" << endl;
    CollegeRepresentative cr;
    cr.showPerson();
    cr.showStudent();
    cr.showMonitor();
    cr.showTeacher();
    cr.showRepresentative();

    return 0;
}
```
