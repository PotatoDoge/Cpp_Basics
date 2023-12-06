#include <iostream>
#include <cmath>

using namespace std;

int main() {

    // variable
    int file;
    file = 5;
    std::cout << file << std::endl;


    // const
    const double pi = 3.14;
    std::cout << pi << std::endl;

    // naming conventions
    int file_size; // Snake Case
    int FileSize; // Pascal Case
    int fileSize; // Camel Case
    int iFileSize; // Hungarian Notation
    
    // math expressions
    int x = 5;
    int y = 4;
    int multiplication = x*y;
    int sum = x+y;
    int subtraction = x-y;
    int division = x/y;

    // console in
    cout << "Enter your name" << endl;
    string name;
    cin >> name;
    cout << "Hello: " << name << endl;

    return 0;
}