/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Mary Brashear
 */

#include <iostream>
using namespace std;

int main() {
    //declare variables
    double a, b, c;
    char operation;
    //get user input
    cin >> operation;
    cin >> a >> b;

    cout<<"= ";
    //see what operation the user entered and print the
    if (operation == '+') {
        c = a + b;
        cout << c;
    }
    else if (operation == '-') {
        c = a - b;
        cout << c;
    }
    else if (operation == '*') {
        c = a * b;
        cout << c;
    }
    else if (operation == '/') {
        c = a / b;
        cout << c;
    }
    else
        cout << "invalid input";
}
