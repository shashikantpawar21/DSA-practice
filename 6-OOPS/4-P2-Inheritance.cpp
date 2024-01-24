// Inheritance  
// Inheritance in C++ allows a class (derived class) to inherit attributes and behaviors from another class (base class). The derived class can extend or modify inherited properties and have its own unique features. It promotes code reuse, extensibility, and modeling of relationships between classes. Access specifiers (public, protected, private) control visibility. Constructors and destructors follow a hierarchical order in inheritance. Types include single, multiple, and multilevel inheritance.

//  Advantages 


// *** Implementation of Inheritance  ****************

#include<iostream>
using namespace std;

class Human
{
    public: 
        string name;
        int weight; 

    private:
        int age;

    void setName(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
};

class Male : public Human{
    public: 
        string color;
};

int main()
{
    Male *batmen = new Male();
    cout << batmen->color  << endl;
    // cout << batmen->age  << endl; //gives compile time error 
}


// ************* Access Modifier role in inheritance*********************

// Access modifiers (public, protected, private) in C++ play a crucial role in determining the visibility and accessibility of the members of a base class in a derived class during inheritance. Here's a concise explanation of their roles:

// Public Inheritance (public):

// Role: Public members of the base class become public members of the derived class.
// Access:
// Public members remain accessible to everyone.
// Protected members become protected in the derived class.
// Private members remain inaccessible.

    // class Base {
    // public:
    //     int publicMember;
    // protected:
    //     int protectedMember;
    // private:
    //     int privateMember;
    // };

    // class Derived : public Base {
    //     // publicMember is public
    //     // protectedMember is protected
    //     // privateMember is inaccessible
    // };


// Protected Inheritance (protected):

// Role: Public and protected members of the base class become protected members of the derived class.
// Access:
// Public and protected members become protected in the derived class.
// Private members remain inaccessible.

    // class Base {
    // public:
    //     int publicMember;
    // protected:
    //     int protectedMember;
    // private:
    //     int privateMember;
    // };

    // class Derived : protected Base {
    //     // publicMember is protected
    //     // protectedMember is protected
    //     // privateMember is inaccessible
    // };


// Private Inheritance (private):

// Role: Public and protected members of the base class become private members of the derived class.
// Access:
// Public and protected members become private in the derived class.
// Private members remain inaccessible.

    // class Base {
    // public:
    //     int publicMember;
    // protected:
    //     int protectedMember;
    // private:
    //     int privateMember;
    // };

    // class Derived : private Base {
    //     // publicMember is private
    //     // protectedMember is private
    //     // privateMember is inaccessible
    // };

//  In case any private member cannot be accessed outside it class no matter what inheritance mode we use