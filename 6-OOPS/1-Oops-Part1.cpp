//  Oops 
//  classes 
//  constructor destructor 

//  Oops - It is programming paradigms which revolves around object 
//  Objects is an entity have has properties and behaviors 
//  hero - properties - name / level / health
//       - behavoir - attack / defence / dance 

#include <iostream>
using namespace std;

class Hero{
    // access modifier - public and private 
    private:
        int health;
    public:
        char level;
    
    // parameterless constructor 
    Hero()
    {
        cout << "Constructor called " << endl;
    }

    // parameter constructor 
    Hero(int health, char level)
    {
        // health = health   --> This will assigned it value to itself and not to class properties 
        this->health = health;  // so, this keyword is used to access the class properties
        this->level = level;
        // this is pointer that point to current object instance
        cout << "this point to " << this << endl;
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

    void print()
    {
        cout << "value of hero is " << health << endl;
        cout << "level of hero is " << level << endl;
    }

};

// Note - size of empty class would be 1 byte 
//  size of other class is sum of size of properties into it 
//  size may increase considering padding added by compiler for efficient use of memory of class 

int main() {
    // static allocation 
    Hero batman;
    batman.setHealth(10);
    cout << "Health of batman " << batman.getHealth()<< endl;

    batman.level = 'A';
    cout << "Level of batmen " << batman.level << endl;
    cout << "size of batman " << sizeof(batman) << endl;

    // dynamic allocation
    Hero *flash = new Hero;
    flash->level = 'B';   // access dynamic allocated properties 
    cout <<  "Level of flash " << flash->level << endl;
    (*flash).setHealth(20);   // access dynamic allocated properties - 2 way  
    cout <<  "Health of flash " << (*flash).getHealth() << endl;

    Hero *spiderman = new Hero(30, 'S');
    cout << "address of spiderman " << spiderman << endl;
    // this will same as this address as currently it is pointing to this object 
    spiderman->print();
    // NOTE - If we comment the parameter less constructor the flash and batman instance creation will fail. 
    // Because once we have any user defined constructor in class, the default constructor is ignored 

}

