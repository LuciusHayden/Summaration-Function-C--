#include <iostream>
using namespace std;

// defines the summaration function
int summaration(int bottom, int top, string function, int total = 0){
    int funcM = function[0] - '0'; //detects what the m value is and convers it to an int
    int funcB = function[3] - '0'; //detects what the b value is and convers it to an int

    for (int i = bottom; i < top + 1; i++){ // starting at the bottom value and ending at the top value (+1 to include the top value) and adds 1 to i each loop
        if(function[2] == '+'){ //checks whether its addition or subtraction
            total += funcM * i +funcB; //adds the value of the function to the total
    }       
        else if (function[2] == '-'){ //checks whether its addition or subtraction
            total += funcM * i - funcB; //adds the value of the function to the total
            }
    }
    return total; //returns the total amount
        
}

int main()
{ // asks what the top value is
    cout << "Input the top of the sigma symbol: \n";
    int top;
    cin >> top;
// asks what the bottom value is
    cout << "Input the bottom of the sigma symbol: \n ";   
    int bottom;
    cin >> bottom;
// getse the function (with some strict requirments)
    cout << "Enter the function in the form: mx+b (no spaces, single digit numbers only, and must be a linear function)\n";
    string function;
    cin >> function;
// call the function
    cout << summaration(bottom, top, function);
}