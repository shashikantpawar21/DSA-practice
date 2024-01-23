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

// Note - size of empty class would be 1 byte 
//  size of other class is sum of size of properties into it 
//  size may increase considering padding added by compiler for efficient use of memory of class 

int main() {
    
    Hero *batman = new Hero;
    batman->setHealth(10);
    batman->level = 'A';
    char name[7] = "batman";
    batman->setName(name);
    batman->print();
    // Copy constructor

    Hero batman1;
    batman1.setHealth(20);
    batman1.level = 'A';
    char name1[8] = "batman1";
    batman1.setName(name1);

    batman1.print();

    Hero batmanCopy(batman1);
    cout << endl << "Batman copy values" << endl;
    batmanCopy.print();

    Hero *batmanCopy2 = new Hero(batman);
    cout << endl << "Batman copy 2 values" << endl;
    batmanCopy2.print();
}

