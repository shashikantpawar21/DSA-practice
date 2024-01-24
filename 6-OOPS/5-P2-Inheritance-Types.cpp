// Certainly! Let's provide a concise description along with each use case:

// Single Inheritance:

// Description: Single inheritance is used to model a simple "is-a" relationship, where a derived class inherits from a single base class.
// Use Case: Representing fundamental relationships like shapes and specific shapes, where a derived class "is a" specialization of the base class.
// Example:
// cpp
// Copy code
class Shape {
public:
    void draw() {
        // Common drawing behavior for all shapes
    }
};

class Circle : public Shape {
    // Circle is a shape with additional properties/methods
};

// Multiple Inheritance:

// Description: Multiple inheritance allows a class to inherit from more than one base class, combining features from multiple sources.
// Use Case: Combining functionalities from different aspects, such as a class representing a car inheriting from both an engine class and a wheels class.
// Example:
// cpp
// Copy code
class Engine {
public:
    void start() {
        // Common behavior for starting an engine
    }
};

class Wheels {
public:
    void rotate() {
        // Common behavior for rotating wheels
    }
};

class Car : public Engine, public Wheels {
    // Car combines features of both Engine and Wheels
};

// Multilevel Inheritance:

// Description: Multilevel inheritance involves creating a hierarchy of specialization where a class is derived from another derived class.
// Use Case: Representing specialization levels, such as animals, mammals, and dogs, where each level adds specific features.
// Example:
// cpp
// Copy code
class Animal {
public:
    void eat() {
        // Common eating behavior for all animals
    }
};

class Mammal : public Animal {
    // Mammals are animals with additional properties/methods
};

class Dog : public Mammal {
    // Dogs are mammals with additional properties/methods
};

// Hierarchical Inheritance:

// Description: Hierarchical inheritance involves creating a base class with multiple derived classes.
// Use Case: Modeling a category with multiple subcategories, like a base shape class with derived classes for specific shapes.
// Example:
// cpp
// Copy code
class Shape {
public:
    void draw() {
        // Common drawing behavior for all shapes
    }
};

class Circle : public Shape {
    // Circle is a shape with additional properties/methods
};

class Square : public Shape {
    // Square is a shape with additional properties/methods
};

// Hybrid (Virtual) Inheritance:

// Description: Hybrid inheritance combines features of multiple inheritance with the use of virtual inheritance to address issues like the diamond problem.
// Use Case: Preventing ambiguity in multiple inheritance scenarios, ensuring a single copy of a common base class.
// Example:
// cpp
// Copy code
class Engine {
public:
    void start() {
        // Common behavior for starting an engine
    }
};

class Wheels {
public:
    void rotate() {
        // Common behavior for rotating wheels
    };

class Vehicle : virtual public Engine, virtual public Wheels {
    // Vehicle combines features of Engine and Wheels
};

// Multipath (Diamond) Inheritance:

// Description: Multipath inheritance occurs when a class indirectly inherits from a common base class through multiple paths, forming a diamond-shaped hierarchy.
// Use Case: Addressing ambiguity issues in multiple inheritance, ensuring a clear path for accessing common features.
// Example:
// cpp
// Copy code
class A {
public:
    void commonMethod() {
        // Common method in class A
    }
};

class B : public A {
    // Derived class B from A
};

class C : public A {
    // Derived class C from A
};

class D : public B, public C {
    // Class D inherits from both B and C, forming a diamond
};

// These examples highlight how different types of inheritance can be applied to address specific design requirements and relationships between classes in a software system. Each type has its own strengths and considerations in terms of code organization, maintainability, and flexibility.

//  *** INHERITANCE AMBUIGUITY ******

// Inheritance ambiguity in C++ occurs when there is a conflict or ambiguity in the accessibility or identification of a member inherited from multiple base classes. This often happens in scenarios of multiple inheritance, especially when there is a common ancestor class from which two or more classes are derived.

// The most common situation leading to ambiguity is the "diamond problem," where a class (let's call it Base) is inherited by two classes (let's call them Derived1 and Derived2), and then a fourth class (let's call it FinalDerived) inherits from both Derived1 and Derived2. This creates a diamond-shaped hierarchy, and if FinalDerived tries to access a member of Base without proper resolution, ambiguity arises.

// Here's an example:

// cpp
// Copy code
class Base {
public:
    void commonMethod() {
        // Common method in class Base
    }
};

class Derived1 : public Base {
    // Derived class from Base
};

class Derived2 : public Base {
    // Another derived class from Base
};

class FinalDerived : public Derived1, public Derived2 {
    // Class inheriting from both Derived1 and Derived2
};

int main() {
    FinalDerived obj;
    // obj.commonMethod();  // Error: Ambiguity - commonMethod is present in both Derived1 and Derived2
    return 0;
}
// In this example, FinalDerived inherits from both Derived1 and Derived2, both of which derive from Base. When trying to access commonMethod through an instance of FinalDerived, the compiler cannot determine whether to use the version from Derived1 or Derived2, leading to ambiguity.

// To resolve this ambiguity, you need to specify the path to the desired base class when accessing the member. For example:

// cpp
// Copy code
int main() {
    FinalDerived obj;
    obj.Derived1::commonMethod();  // Resolves ambiguity by specifying the path
    return 0;
}
// By using the scope resolution operator (::), you explicitly specify the path to the base class, resolving the ambiguity. It's crucial to provide a clear path to avoid confusion and ensure that the correct version of the member is accessed.

// To prevent such ambiguity, consider using virtual inheritance or restructuring the class hierarchy to eliminate the diamond-shaped inheritance structure. Virtual inheritance ensures that there is only one instance of the common base class shared among the derived classes, resolving ambiguity.