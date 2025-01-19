# Access Modifiers

- Private
- Public
- Protected

## Private
hidden and cannot be used outside the class

## Public
is accessible outside the class

## Protected
somewhere between public and private. everything inside a classes is private by default


# Constructor

A special type of method that is invoked  each time that an instance of a class is created.

## Default Constructor
A constructor that is automatically created by the compiler if no constructor is created manually

## Rules of constructor
1. it does not have a return type
2. it has the same name as the class
3. it is always 'public'

```
class Employee {
public:
    Employee() {} //constructor
};
```