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

    // Like Constructor, every class has destructor also 
    // It called after scope of class instance ends to deallocate the stack allocated memory 
    //  used by class instance 
    // We can add custom destructor as below 
    // If we see the output it is only called automatically for spiderman which is statically allocated 
    // For heap allocated memory, destructor needs to be called manually 
    // no return type / no params / same name as class 
    ~Hero()
    {
        cout << "Destructor called" << endl;
    }

};

int main() {
    
    Hero *batman = new Hero;
    // Destructor called manually for heap allocated memory to be deallocated
    delete batman;

    Hero spiderman;

}

