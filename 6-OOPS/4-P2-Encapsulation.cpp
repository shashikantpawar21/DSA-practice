// Encapsulation 
//  Wrapping data member and behaviour into a entity - mainly class 
//  It helps hiding the data 
//  Fully encapsulated class is one with all the data member marked as private 

//  Advantages 
// 1. Data hiding - Increases security 
// 2. we can make class readonly by not adding the setter in class 
// 3. Increases code reusability 
// 4. Encapsulation helps in unit testing 

// *** Implementation of Encapsulation ****************

#include<iostream>
using namespace std;

class Hero
{
    private: 
        string name;
        int health =10; 
    
    public:
        int getHealth()
        {
            return this->health;
        }
};

int main()
{
    Hero *batmen = new Hero;
    cout << batmen->getHealth() << endl;
}