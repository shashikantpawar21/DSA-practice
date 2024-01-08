//  TO MORE SIMPLIFY RECURSION 

// Just thing about one case to solve 
// And other cases will be solved by itself recursively 
//  Think about base condition in all cases 

// Eg. we need to reach home which is 10km from source 
//  To solve this, recursively we will just solve moving 1km ahead 
//  Until we reach home - i.e 10 km -- This shld be some base condition 

//  Let solve this in code 

#include<iostream>
using namespace std;

void reachHome(int source, int destination)
{
    cout << "source " << source << " destination " << destination << endl;
    // Base condition 
    if(source == destination)
        return;
    // processing 
    source++;
    // Recursive relation
    reachHome(source, destination);
}

int main()
{
    int source = 1, destination = 10;
    reachHome(source, destination);
}