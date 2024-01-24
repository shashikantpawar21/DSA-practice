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
    
    // parameterless constructor 
    Hero()
    {
        name = new char[100];
        cout << "Constructor called " << endl;
    }
    
    // Custom copy constructor written can implement deep copy 
    //  avoid the shallow copy issue by copy constructor 
    //  Default copy constructor gets ignored when custom copy constructor is added
    Hero(Hero& hero)
    {
        cout << "custom copy constructor called" << endl;
        char *ch = new char[strlen(hero.name) + 1];
        strcpy(ch, hero.name);
        this->name = ch;
        this->level = hero.level;
        this->health = hero.health;
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

int main() {
    
    Hero *batman = new Hero;
    batman->setHealth(10);
    batman->level = 'A';
    char name[7] = "batman";
    batman->setName(name);
    batman->print();

    // Default Copy constructor
    // Hero batmanCopy(*batman);
    Hero *batmanCopy = new Hero(*batman);
    //  It talkes argument as class instance and copy the value to this instance properties 
    cout << endl << "Batman copy values" << endl;
    batmanCopy->print();

    batman->name[0] = 'g';

    cout << "batman name updated value " << batman->name << endl;
    cout << "batman copy name updated value " << batmanCopy->name << endl;
   
    // Default C++ copy constructors perform a shallow copy, copying member variables directly. Shallow copying can lead to issues with classes containing pointers, as it shares the same memory address, causing unintended modifications. To address this, consider providing a custom copy constructor to ensure a deep copy and avoid problems related to shared dynamic memory.

    // After we added our custom copy constructor the issue with name pointer shwoing same value will not happen 
    // as we deep copy all the value and they have diference space in memory 

    

    Hero *batmanV2 = new Hero;
    batmanV2->setHealth(20);
    batmanV2->level = 'B';
    char name1[10] = "batman V2";
    batmanV2->setName(name1);
    batmanV2->print();
    // **** Copy assingment operator 
    batman = batmanV2;
    // Copy values from batman v2 to batman // shallow copy 

    batman->print(); 
}

