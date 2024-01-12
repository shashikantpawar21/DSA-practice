// RECURSION 
// Defination --> Function calling itself 

// Where we have to apply it ?
// If we have a bigger problem at hand 
// where it seems that it is same type of smaller repetitive problem 
// we will use RECURSION

//  Factorial example
// For eg. 5! = 5 * 4! 
//         bigger prb = same type of smaller prb 
//         n! = n * (n-1)! 
//  coded this in 2nd cpp file 


// Power eg 
//  2^4 =  2 * 2^3 
    // bigger prb = same type of smaller prb 
//  2^n = 2 * 2^(n-1)

// Looking for the base case condition 

//  5! = 5 * 4!
    // 4! = 4 * 3!
    // 3! = 3 * 2! 
    // 2! = 2 * 1!
    // 1!= 1 * 0! 
    //         0! = 1 
    //         stop break here as it is a BASE CONDITION 

//  BASE CONDITION is important otherwise the code will run indefinitely until 
//  program crashes or fault segementation error comes because of stack overflow of functions calls 


// ******** RECURSION APPROACH *****************
//  Below 3 things mandatory for recursive approach 
// 1. Recursive relation --> breaking task in smaller task of same type 
// 2. Base Condition --> To come out of recursive loop once ans is obtained 
//        - Return is imp from base condition 
// 3. Processing part 


//  Recursion Function Structure 

// (Tail Recursion)                             // (Head Recursion) - Recursive Relation before any processing 
//  function()                                  //  function()
// {                                            // {
     // Base condition                               // Base condition 
    //  Processing logic                           //  Recursive Relation 
    //  Recursive Relation                            //  Processing logic 
// }                                              // }