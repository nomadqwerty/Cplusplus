// import libs
// IO Stream, input outPut lib: Gives compiler ability to output data onto the terminal, and recieve data pass into terminal; cli based
#include <iostream>

// main function: This serves like the global scope for a c++ program: The main execution context where all code is written and executed.
int main(){

    // std keyword: ?

    // variables
    int favNum;
    // cout for outputting data onto the terminal
    std::cout << "Enter a number";

    // cin for receiving data pass into terminal
    // >> favNum: value received from terminal input is passed into favNum variable
    std::cin >> favNum;

    // std::endl is an instruction the tells the terminal to move to the next line and ends execution.
     std::cout << "This is what I received";
     std::cout << favNum << std::endl;

    // return ends function;
    return 0;
}
