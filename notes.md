# Access Modifiers

- Private
- Public
- Protected

## Private
hidden and cannot be used outside the class. everything inside a classes is private by default

## Public
is accessible outside the class

## Protected
Protected data members of the class can be accessed in derived classes.


# Constructor

A special type of method that is invoked  each time that an instance of a class is created.

## Default Constructor
A constructor that is automatically created by the compiler if no constructor is created manually

## Rules of constructor
1. it does not have a return type
2. it has the same name as the class 
3. it is always 'public'

``` cpp
class Employee {
public:
    Employee() {} //constructor
};
```

# 4 Pillars of OOPS
## 1. Encapsulation
It is the wrapping of data and information in a single unit.
It is the binding together of data and functions that manipulate them, so that no one outside the entity can directly access them.

**Two Important properties of encapsulation**
1. **Data protection**: Encapsulation protects the internal state of objects by keeping its data members private. It ensures controlled and secure data manipulation by restricting the manipulation to class's public methods(getter and setter).

2. **Data hiding**: It hides the internal implementation details of a class from external code.

``` cpp
void setName(string name) { //setter
    Name = name;
}
string getName() { //getter
    return Name;
}
```

## 2. Abstraction
Abstraction refers to providing only the essential information and hiding the unnessecary details or implementation.

In C++, abstraction can be achieved by using abstract classes.

An abstract class is a class that has at least one 'pure virtual' function.

``` cpp
class AbstractEmployee {
    virtual void AskForPromotion()=0; //pure virtual function
};
```

- An abstract class introduces a contract which ensure that derived classes provide specific implementation for the abstract methods.

## 3. Inheritance
The capability of a class to derive properties and characteristics of another class is called inheritance.
``` cpp
class B : access_specifier A {}; // class A derives from class B
```

### Mode of Inheritance
Mode of inheritance controls the access level of the inherited members of the base class in the derived class.
- **public mode**: public members of A become public and protected members of A become protected in class B
- **protected mode**: both public and protected members of class A become protected in class A 
- **private(default) mode**: both public and protected members of class A become private in class B

### Types of Inheritance

1. **Single**
    - one base class is inherited by one derived class only

        ::: mermaid
        flowchart TD;
            A[class A] --> B[class B];
        :::

2. **Multiple**
    - one subclass is inherited from more than one base class

        ::: mermaid
        flowchart TD;
            A[class A] --> C[class C];
            B[class B] --> C[class C];
        :::

3. **Multilevel**
    - a derived class is created from another derived class and that derived class can be derived from a base class or any other derived class

        ::: mermaid
        flowchart TD;
            A[class A] --> B[class B] --> C[class C];
        :::

4. **Heirarchical**
    - more than one subclass is inherited from a single base class

        ::: mermaid
        flowchart TD;
            A[class A] --> B[class B];
            A[class A] --> C[class C];
            A[class A] --> D[class D];
        :::

5. **Hybrid**
    - implemented by combining more than one type of inheritance
    
        ::: mermaid
        flowchart TD;
            A[class A] --> B[class B] --> D[class D];
            A[class A] --> C[class C] --> D[class D];
        :::
    - the above situation is also called as the Diamond problem.

### Diamond Problem
- When a subclass inherits from two different parent classes that inherit from a single parent class, this causes ambiguity. To solve this problem, we use 'virtual' keyword.
- The virtual keyword only copies the grandparent class once even if the two parent classes explicitly call parameterized constructor for the grandparent class.

    ``` cpp
    class A {};
    class B: virtual public A {};
    class C: virtual public A {};
    class D: public B, public C {};
    ```

    > In general, it is not allowed to call the grandparent’s constructor directly, it has to be called through parent class. It is allowed only when ‘virtual’ keyword is used.