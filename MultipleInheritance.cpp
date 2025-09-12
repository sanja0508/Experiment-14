//Program-2
#include<iostream>
#include<string>
using namespace std;

//Parent Class-1
class Teacher {
    public:
    string tname = "Dr. Sharma";
    void subject() {
        cout << "Subject: Physics" << endl;
    }
};

//Parent Class-2
class Experience {
    public:
    int years = 15;
    void qualification() {
        cout << "Qualification: PhD" << endl;
    }
};

//Child Class (derived from parent-1 & 2)
class Professor : public Teacher, public Experience {
    public:
    string dept = "Applied Sciences";
};

int main() {
    //Multiple Inheritance
    Professor p1;
    p1.subject();
    p1.qualification();
    cout << "Name: " << p1.tname << endl;
    cout << "Department: " << p1.dept << endl;
    cout << "Experience: " << p1.years << " years" << endl;
    return 0;
}
