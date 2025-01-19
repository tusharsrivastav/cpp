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

# 4 Pillars of OOPS
## 1. Encapsulation
It is the wrapping of data and information in a single unit.
It is the binding together of data and functions that manipulate them, so that no one outside the entity can directly access them.

**Two Important properties of encapsulation**
1. **Data protection**: Encapsulation protects the internal state of objects by keeping its data members private. It ensures controlled and secure data manipulation by restricting the manipulation to class's public methods(getter and setter).

2. **Data hiding**: It hides the internal implementation details of a class from external code.

```
void setName(string name) { //setter
    Name = name;
}
string getName() { //getter
    return Name;
}
```