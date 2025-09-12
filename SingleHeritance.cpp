//Program-1
#include<iostream>
#include<string>
using namespace std;

class College {
    public:
    string cname = "Symbiosis College";
    void location() {
        cout << "Location: Pune" << endl;
    }
};

class Student : public College {
    public:
    string sname = "Sanjana Pawar";
    int rollno = 25;
};

int main() {
    Student s1;
    s1.location();
    cout << "College: " << s1.cname << endl;
    cout << "Student Name: " << s1.sname << endl;
    cout << "Roll No: " << s1.rollno << endl;
    return 0;
}
