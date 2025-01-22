#include <iostream>
using namespace std;

class AbstractEmployee {
    virtual void AskForPromotion()=0;
};

class Employee:AbstractEmployee {
private:
    string Company;
    int Age;

protected:
    string Name;

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

    void Work() {
        cout << Name << " is checking emails, task backlog, performing tasks..." << endl;
    }

};

class Developer: public Employee {
public:
    string FavProgrammingLanguage;
    Developer(string name, string company, int age, string favProgrammingLanguage) 
    : Employee(name, company, age)
    {
        FavProgrammingLanguage = favProgrammingLanguage;
    };

    void Work() {
        cout << Name << " is fixing bugs and writing " << FavProgrammingLanguage << " code" << endl;
    }
};

class Teacher: public Employee {
private:
    string Subject;
public:
    Teacher(string name, string company, int age, string subject) 
    : Employee(name, company, age) 
    {
        Subject = subject;
    }

    void PrepareLesson() {
        cout << Name << " is preparing " << Subject << " lesson" << endl;
    }
    void Work() {
        cout << Name << " is teaching " << Subject << " class" << endl;
    }
};

int main() {
    // Employee employee1 = Employee("Tushar", "TusharDevelops", 21);
    // employee1.Introduce();

    // Employee employee2 = Employee("John", "Amazon", 25);
    // employee2.Introduce();

    // employee2.setAge(39);
    // cout << employee2.getName() << " is " << employee2.getAge() << " years old." << endl;

    // employee1.AskForPromotion();
    // employee2.AskForPromotion();

    Developer d = Developer("Tushar", "TusharDevelops", 21, "C++");
    Teacher t = Teacher("Saldina", "Amazon", 35, "Computer Science");
    // t.PrepareLesson();
    // t.AskForPromotion();
    // d.AskForPromotion();

    d.Work();
    t.Work();


    return 0;
}
