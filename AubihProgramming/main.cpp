//
//  main.cpp
//  AubihProgramming
//
//  Created by Dejan Misic on 08/11/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include <iostream>
#include <string>
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
    
    
    
}
#include <iostream>
#include <string>
int main(int argc, const char * argv[]) {
    
    //TaskOne();
    //TaskTwo();
    //TaskThree();
    //TaskFour();
    TaskFive();
    
    std::cout << std::endl;
    return 0;
}

