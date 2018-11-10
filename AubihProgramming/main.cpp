//
//  main.cpp
//  AubihProgramming
//
//  Created by Dejan Misic on 08/11/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>       /* sqrt */
#include <string>
#define PI 3.14159
void ClearScreen()
{
    std::cout << std::string( 100, '\n' );
}
void TaskOne(){
    ClearScreen();
    
    double x;
    double square;
    double tothree;
    
    std::cout << "Enter real number X: " << std::endl;
    std::cin >> x;
    square = x*x;
    std::cout << "Square of " << x << " is: " << square << std::endl;
    tothree =  x*x*x;
    std::cout << x << " to the power of three is: " << tothree << std::endl;
}
void TaskTwo(){
    ClearScreen();
    int numberOfElements;
    double sum = 0;
    double average;
    std::cout << "Enter amount of numbers that you would like to calculate average for?" << std::endl;
    std::cin >> numberOfElements;
    
    // declaring an array that matches number of elements
    
    int averageList[numberOfElements];
    for (int i=1; i<= numberOfElements; ++i) {
        std::cout << "Enter number: " << std::endl;
        std::cin >> averageList[i] ;
        sum += averageList[i];
    }
    average = sum/numberOfElements;
    std::cout << "Average of entered numbers is: " << average << std::endl;
    
    
}
void TaskThree(){

    try{
        int number = 0;
        int count = 0;
        int n = number;
        std::cout << "Enter integer: " << std::endl;
        std::cin >> number;
        
        if (number > 0){
            // logic
            ClearScreen();
            for (int i = 0; i < number; i++) {
                if (i <= number / 2) {
                    count = n + 1;
                    for (int j = 0; j <= i; j++) {
                        n++;
                        std::cout << "*" << " ";
                    }
                    std::cout << std::endl;
                }
                else {
                    n = count - (number - i);
                    count = n;
                    for (int j = i; j < number; j++) {
                        std::cout << "*" << " ";
                        n++;
                    }
                    std::cout << std::endl;
                }
            }
        }
        else{
            throw 666;
        }
    }
    catch(int e) {
        std::cout << "An exception occurred. Exception Nr. " << e << '\n';
        std::cout << "You must input a positive integer." << std::endl;
    }
}
void TaskFour(){
    ClearScreen();
    int secNum = 0; int firstNum = 0; char c;
    try {
        // getting and validating input
    std::cout << "Enter two integers and one character: " << std::endl;

            std::cout << "Enter first integer (height): " << std::endl;
            std::cin >> secNum;
        while (std::cin.fail() || (secNum < 0 || secNum == 0))
        {
            if (secNum == -1){
                break;
            }
            std::cin.clear(); // clear input buffer to restore cin to a usable state
            std::cin.ignore(100, '\n'); // ignore last input
            std::cout << "Invalid input. You need to enter a integer that is bigger than 0 or enter -1 to quit." << std::endl;
            std::cout << "\nEnter first integer: " << std::endl;
            std::cin >> secNum;
            std::cout << std::endl;
        }
        if (secNum == -1) {
            std::exit(0);
        }
        std::cout << "Please note that second integer has to be bigger than first you entered." << std::endl;
            std::cout << "Enter second integer(width): " << std::endl;
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(100, '\n'); // ignore last input
            std::cin >> firstNum;
        while (std::cin.fail() || !(secNum < firstNum))
        {
            if (firstNum == -1){
                break;
            }
            std::cin.clear(); // clear input buffer to restore cin to a usable state
            std::cin.ignore(100, '\n'); // ignore last input
            std::cout << "Invalid input. Second integer must be bigger than first and cannot be 0. To exit program enter -1" << std::endl;
            std::cout << "Enter second integer(width): " << std::endl;
            std::cin >> firstNum;
            std::cout << std::endl;
        }
        if (firstNum == -1) {
            std::exit(0);
        }
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(100, '\n'); // ignore last input
        std::cout << "Enter character: " << std::endl;
        std::cin >> c;
        while (!isalpha(c))
        {
            if (c == 45){
                break;
            }
            std::cin.clear(); // clear input buffer to restore cin to a usable state
            std::cin.ignore(100, '\n'); // ignore last input
            std::cout << "Invalid input. You need to enter a character or enter -1 to quit." << std::endl;
            std::cout << "Enter character: " << std::endl;
            std::cin >> c;
            
            std::cout << std::endl;
            
        }
        if (c == 45) {
            std::exit(0);
        }
        std::cout << "\n";
    // printing the rectangle
    std::cout << c;
    for (int i = 0; i < firstNum - 2; i++)
    {
        std::cout << c;
    }
    std::cout << c <<"\n";
    
    for (int i = 0; i < secNum - 2; i++)
    {
        std::cout << c;
        for (int j = 0; j < firstNum - 2; j++)
        {
            std::cout << " ";
        }
        std::cout << c << "\n";
    }
    
    std::cout << c;
    for (int i = 0; i < firstNum - 2; i++)
    {
        std::cout << c;
    }
    std::cout << c <<"\n";
    }
    catch(int e){
                std::cout << "You must input a positive integer." << std::endl;
    }
}
void TaskFive(){
    /* Exercise 5
     • For input radius of a circle (of type float), calculate and output its
     perimeter and surface area. For invalid input end program with a
     proper message.
     */
    ClearScreen();
    // getting and validating input, input has to be of type float or we'll prompt user to enter
    float radius, area, circum;
    std::cout << "\n\n Find the area and circumference of any circle :\n";
    std::cout << "----------------------------------------------------\n";
    std::cout<<" Input the radius(1/2 of diameter) of a circle : ";
    std::cin>>radius;
    while (std::cin.fail() || (radius < 0 || radius == 0))
    {
        if (radius == -1){
            break;
        }
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(100, '\n'); // ignore last input
        std::cout << "Invalid input. Radius must be bigger than zero. To exit program enter -1" << std::endl;
        std::cout << "Enter radius: " << std::endl;
        std::cin >> radius;
        std::cout << std::endl;
    }
    if (radius == -1) {
        std::exit(0);
    }
    circum = 2*PI*radius;
    area = PI*(radius*radius);
    std::cout<<" The area of the circle is : "<< area << std::endl;
    std::cout<<" The perimeter ( circumference) of the circle is : "<< circum << std::endl;
    std::cout << std::endl;
}
void TaskSix(){
    /*
     Exercise 6
     • For an input positive integer N, list all non-prime numbers from 1 to
     N, inclusive. If input is invalid, make user input everything again.
     For example:
     - for input 10, the output should be: 4, 6, 8, 9, 10
     
     */
    
    ClearScreen();
    
    //getting input and validating it
    int n =0; // declaring and initializing variable
    std::vector<int> notPrimes;
    std::cout << "Enter a positive integer: ";
    std::cin >> n;
    while (std::cin.fail() || (n < 0 || n == 0))
    {
        if (n == -1){
            break;
        }
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(100, '\n'); // ignore last input
        std::cout << "Invalid input. Integer must be bigger than zero (positive). To exit program enter -1" << std::endl;
        std::cout << "Enter integer again: " << std::endl;
        std::cin >> n;
        std::cout << std::endl;
    }
    if (n == -1) {
        std::exit(0);
    }
    // checking if number is prime, if its prime continue, else store it in the array of integers which we will use to print all those numbers
    for (int i=2; i<=n; i++)
        for (int j=2; j*j<=i; j++)
        {
            if (i % j == 0){
                notPrimes.push_back(i);
                break;
            }
            else if (j+1 > sqrt(i)) {
                break;
            }
        }
    std::cout << "For integers from 1 to " << n << " count of numbers that are not prime is: " << notPrimes.size() << std::endl;
    std::cout  << "Below are the numbers that are not prime: " << std::endl;
    for (const auto &i : notPrimes) {
        std::cout << i;
        if (&i != &notPrimes.back())
            std::cout << ',';
    }
}
// function to check whether string is palindrome
void IsPalindrome(char string[]) //Checks the string to see if the characters inside are a palindrome.
{
    int stringStart, stringMiddle, stringEnd, length = 0;
    
    std::cout << "\n**Palindrome Analysis**" << std::endl;
    while (string[length] != NULL) //counts the length of the string before the NULL character at the end.
    {
        length++;
    }
    stringEnd = length - 1; //the final position in the register from #0 to #length-1.
    stringMiddle = length / 2; //compares the first half of the string with the last half.
    
    for (stringStart = 0; stringStart < stringMiddle; stringStart++) //compares the first and last character, the first + 1 and the last -1 characters until the middle is reached.
    {
        if (string[stringStart] != string[stringEnd]) //if the string is not a palindrome, this will be the output.
        {
            std::cout << "The string: " << string << " is not a palindrome" << std::endl;
            break;
        }
        stringEnd--;
    }
    if (stringStart == stringMiddle) //confirms the string is a palindrome if the first half is the same as the last half of the string.
    {
        std::cout << "The string: " << string << " is a palindrome" << std::endl;
    }
}
void TaskSeven(){
    
    /*Exercise 7
     • For input string determine if it the same whether you read it from left
     of from right side. As a result, print „Yes“ or „No“. Make sure that the
     input string does not contain whitespaces. The program should be
     case sensitive.
     For example:
     - For input „programming“ the result is „No“.
     - For input „abba“ the result is „Yes“.
     - For input „Abba“ the result is „No“.
     Hint: You may need string.substr function and/or string.at function.
     */
    ClearScreen();
    //getting and validating input
    std::string string;
    std::cin >> string;
    // checking whether string is palindrome
    if (IsPalindrome(string))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    
}

#include <iostream>
#include <string>
int main(int argc, const char * argv[]) {
    
    //TaskOne();
    //TaskTwo();
    //TaskThree();
    //TaskFour();
    //TaskFive();
    //TaskSix();
    TaskSeven();
    
    std::cout << std::endl;
    return 0;
}

