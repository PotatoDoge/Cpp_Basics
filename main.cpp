#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

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

    // math funcs --> #include <cmath>
    const double result = floor(1.2);
    cout << result << endl;

    const double resultPow = pow(2,3);
    cout << "pow: " << resultPow << endl;

    // Comments
    /*
     * Block comment
     */

    // data types
    int a = 5;
    float b = 3.12f;
    long c = 90000l;
    char letter = 'a'; // single ''
    bool valid = true;
    auto variable = 6; // auto keyword infers data type
    auto varString = "hello world";

    // random number --> #include <cstdlib> , #include <ctime>
    long elapsedSecond = time(0); // elapsewd seconds since Jan 1 1970
    srand(elapsedSecond);
    int randomNumber = rand() % 10;
    cout << randomNumber << endl;

    // random number generator --> dice
    const int maxValue = 6;
    const int minValue = 1;
    int ranDice = (rand() % (maxValue-minValue+1)) + minValue;
    int ranDice2 = (rand() % (maxValue-minValue+1)) + minValue;

    cout << "first: " << ranDice << endl;
    cout << "second: " << ranDice2 << endl;

    return 0;
}