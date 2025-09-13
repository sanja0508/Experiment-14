# Experiment-14

Aim: To understand and implement the concepts of Single Inheritance, Multiple Inheritance, and Multilevel Inheritance in C++.

Software Required: Visual Studio

Theory: Inheritance is one of the four fundamental concepts of Object-Oriented Programming (OOP). It allows a new class (derived class) to take on the attributes and behaviors of an existing class (base class). This mechanism promotes reusability, extendability, and makes code more modular and easier to maintain.
In C++, inheritance allows a derived class to inherit data members and member functions from a base class. The derived class can modify or extend the functionality of the base class.
There are several types of inheritance in C++:
Single Inheritance: In single inheritance, a derived class inherits from only one base class. This is the most straightforward form of inheritance where a class extends the functionality of a single class.
Example: A Student class can inherit properties from a College class.

Multiple Inheritance: In multiple inheritance, a derived class can inherit from more than one base class. This allows a class to inherit characteristics and behaviors from multiple classes.
Example: A Professor class can inherit from both Teacher and Experience classes, enabling the professor to have properties and methods of both the teacher and the experience.

Multilevel Inheritance: In multilevel inheritance, a class derives from another class, which in turn is derived from another class. This creates a hierarchy of classes.
Example: A Store class inherits from Mobile, and Mobile in turn inherits from Device. This establishes a chain of inheritance from Device → Mobile → Store.

Concepts Covered:
Single Inheritance: One class inherits from another.
Multiple Inheritance: A derived class inherits from two or more base classes.
Multilevel Inheritance: A class inherits from another class, forming a chain of inheritance.
Access Control: Inherited members of a base class are inherited with different access specifiers. In C++, public inheritance allows the derived class to access the public and protected members of the base class.

Constructor and Destructor Behavior: In inherited classes, constructors and destructors are automatically invoked for the base class and derived class. The constructor of the base class is called first, followed by the constructor of the derived class.

Algorithms:
1. Single Inheritance Algorithm:
Input: None.
Process: Create a base class College with attributes and methods.
Create a derived class Student inheriting from College.
Initialize the attributes and call the methods from the base class in the derived class.
Display the inherited properties and additional properties of the derived class.
Output: The details of the college and student are displayed.

2. Multiple Inheritance Algorithm:
Input: None.
Process: Create two base classes: Teacher and Experience, each with their respective attributes and methods.
Create a derived class Professor inheriting from both Teacher and Experience.
Initialize the attributes and call methods from both base classes in the derived class.
Display the details of the professor, including their experience and subject taught.
Output: The details of the professor are displayed with attributes from both base classes.

3. Multilevel Inheritance Algorithm:
Input: None.
Process: Create a base class Device with common attributes and methods.
Create a derived class Mobile that inherits from Device.
Create a further derived class Store that inherits from Mobile.
Display the details of the store, including the device and mobile properties.
Output: The details of the store, including its available mobile device, brand, and category, are displayed.

Conclusion: In this experiment, we successfully implemented and observed the behavior of the following types of inheritance in C++:
Single Inheritance: A derived class inherits from one base class, allowing the reuse of functionality from the base class.
Multiple Inheritance: A derived class inherits from two or more base classes, combining functionalities from multiple sources.
Multilevel Inheritance: A chain of inheritance where a class inherits from another class, which in turn inherits from another, forming a hierarchy.

Understanding inheritance is key to writing reusable and maintainable code in object-oriented programming. It allows us to build a class hierarchy, making our code more modular, and enabling us to extend or modify existing code easily.
