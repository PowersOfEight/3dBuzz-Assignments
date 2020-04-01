// ConsoleAppSketches1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

//using ascii text, this program will display the pound symbol for the British Pound
char poundSign() {
    char pound = (char)156;
    //cin.get();
    return pound;
}
//write a little function here to run and show the char symbol;
void showPound() {
    cout << poundSign();
}

bool isEven(int num) {
    
    return ((num % 2) == 0); //should be true if number is even

}




int main()
{
    if (isEven(3)) {
        cout << "Success, the number 2 is even";
    }
    else if (!isEven(3)) {
        cout << "Well we have a false and a positive";
    }
    //showPound();
    //std::cout << "Hello World!\n";
    //cout << (char)156;
    
    cin.ignore();
    cin.get();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
