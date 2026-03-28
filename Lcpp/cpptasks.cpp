#include <iostream>
#include <string>
using namespace std;
 
class Person 
{
public:
    string name{};
    unsigned age;
    void print() 
    {
        cout << "Name: " << name << "\tAge: " << age << endl;
    }
};
int main()
{
    Person person;  // вызов конструктора
    person.name = "Sultan";
    person.age = 18;
    person.print();
}