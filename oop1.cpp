#include <iostream>
using namespace std;

class Employee {
public:
    string Name;
    string Company;
    int Age;

    Employee(string name, string company, int age) {
        Name = name;
        Company = company;
        Age = age;
    }

    void Introduce() {
        cout << "Name: " << Name << endl;
        cout << "Company: " << Company << endl;
        cout << "Age: " << Age << endl;
    }

};

int main() {
    Employee employee1 = Employee("Tushar", "TusharDevelops", 21);
    employee1.Introduce();

    Employee employee2 = Employee("John", "Amazon", 25);
    employee2.Introduce();

    return 0;
}
