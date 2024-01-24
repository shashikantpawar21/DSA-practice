#include <iostream>
#include<cstring>
using namespace std;

class Hero{
    // access modifier - public and private 
    private:
        int health;
    public:
        char level;
        char *name;
        static int timeToComplete; // declaration of static member 
                                // No memory is allocated here 

    // static function 
    //  can be use to access static var 
    //  do not require instance for accessing it 
    int static getTimeToComplete()
    {
        // Below 2 comment stm gives error 
        //  As firstly static function can only access static var
        //  this is not available under static function as there is no object for static function 
        // cout << health << endl;
        // cout << this << endl;
        return timeToComplete;
    }

    // parameterless constructor
    Hero()
    {
        name = new char[100];
        cout << "Constructor called " << endl;
    }
    

    // getter and setter to  access private varible outside
    int getHealth()
    {
        return health;
    }

    void setHealth(int newHealth)
    {
        health = newHealth;
    }

    void setName(char name[])
    {
        strcpy(this->name, name);
    }

    void print()
    {
        cout << "value of hero is " << health << endl;
        cout << "level of hero is " << level << endl;
        cout << "name of hero is " << name << endl;
    }

};

int Hero::timeToComplete = 5; // Initialisation of static member

int main() {
    
    Hero *batman = new Hero;
    cout << Hero::timeToComplete << endl; // good practice

    cout << batman->timeToComplete << endl; // bad practice as this do not belong to any particular instance
    cout << Hero::getTimeToComplete() << endl; // static funtion calling 
}

// ***** Static member is used when property do not belong to any particular instance 
//  It should be same for all instances 
//  timeToComplete of game will be same for all the Heros so it is made static 


// ******** Why static member is initialized outside of class and not in any other function too 
// When you declare a static member in a class, it's like saying, "Hey, I have this static member, but I'm not allocating memory for it yet."

// cpp
// class MyClass {
// public:
//     static int myStaticVariable; // Declaration, but no memory is allocated yet
// };
// Memory Allocation and Initialization:
// The memory for the static member is allocated and initialized outside the class definition, typically in a source file. This is where the actual storage is set aside for the static member.

// cpp
// int MyClass::myStaticVariable = 42; // Memory allocation and initialization
// Now, why can't you do this inside main or another function?

// Multiple Definitions:
// If you allowed each function (like main) to initialize the static member, you might end up with multiple definitions of the same static member in different parts of your program. This is not allowed in C++. There should be exactly one definition for each static member in your entire program.

// Initialization Order:
// The order of initialization of static members matters. They need to be initialized before they are used. By specifying the initialization outside the class, you have more control over the order in which static members are initialized.

// In summary, static members are declared in the class to indicate their existence, but their memory is allocated and initialized outside the class to ensure proper memory allocation, initialization order, and to avoid multiple definitions.








