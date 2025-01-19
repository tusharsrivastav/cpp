#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
private:
    string Name;
    string Company;
    int Age;

public:
    void setName(string name) { //setter
        Name = name;
    }
    string getName() { //getter
        return Name;
    }

    void setCompany(string company) {
        Company = company;
    }
    string getCompany() {
        return Company;
    }

    void setAge(int age) {
        if (age >= 18) Age = age;
    }
    int getAge() {
        return Age;
    }

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

    void AskForPromotion() {
        if (Age > 30) {
            cout << Name << " is promoted!" << endl; 
        } else {
            cout << Name << ", sorry NO promotion for you!" << endl;
        }
    }

};

int main() {
    Employee employee1 = Employee("Tushar", "TusharDevelops", 21);
    employee1.Introduce();

    Employee employee2 = Employee("John", "Amazon", 25);
    employee2.Introduce();

    employee2.setAge(39);
    cout << employee2.getName() << " is " << employee2.getAge() << " years old." << endl;

    employee1.AskForPromotion();
    employee2.AskForPromotion();


    return 0;
}
