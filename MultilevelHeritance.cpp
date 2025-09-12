//Program-3
#include<iostream>
#include<string>
using namespace std;

//Parent Class-1
class Device 
{
    public:
    string brand = "Apple";
    void category() {
        cout << "Electronics" << endl;
    }
};

class Mobile : public Device 
{
    public:
    string model = "iPhone 15";
};

class Store : public Mobile 
{
    public:
    string shop = "Reliance Digital";
};

int main() 
{
    //Multilevel Inheritance
    Store s1;
    s1.category();
    cout << "Brand: " << s1.brand << endl;
    cout << "Model: " << s1.model << endl;
    cout << "Available at: " << s1.shop << endl;
    return 0;
}
