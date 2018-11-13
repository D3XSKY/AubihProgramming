//
//  homework.cpp
//  AubihProgramming
//
//  Created by Dejan Misic on 12/11/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>       /* sqrt */
#include <string>
#include <cctype>
#include <chrono>
#include <thread>
#include <stdio.h>
#include "homework.hpp"

void Homework::TaskOne(){
    /*
     1. Write a program that will, for input integers A, B and C, output the results of A * B * C and A + B + C.
     */
    std::cout << ">> Homework Task 1 <<" << std::endl;
    int a,b,c,sum,proizvod;
    std::cout << "Enter integer A: " << std::endl;
    std::cin >> a;
    while (std::cin.fail()){
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Please enter integer." << std::endl;
        std::cout << "Enter integer A: " << std::endl;
        std::cin >> a;
    }
    std::cout << std::endl;
    std::cout << "Enter integer B: " << std::endl;
    std::cin.clear(); // clear input buffer to restore cin to a usable state
    std::cin >> b;
    while (std::cin.fail()){
        std::cout << std::endl;
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Please enter integer." << std::endl;
        std::cout << "Enter integer B: " << std::endl;
        std::cin >> b;
    }
    std::cout << std::endl;
    std::cout << "Enter integer C: " << std::endl;
    std::cin.clear(); // clear input buffer to restore cin to a usable state
    std::cin >> c;
    while (std::cin.fail()){
        std::cout << std::endl;
        std::cin.clear();
        std::cin.ignore();
        std::cout << "Invalid input. Please enter integer." << std::endl;
        std::cout << "Enter integer C: " << std::endl;
        std::cin >> c;
    }
    sum = a+b+c;
    std::cout << std::endl;
    std::cout << "Sum of integers " << a <<", "<< b <<" and " << c << " is " << sum << std::endl;
    proizvod = a*b*c;
    std::cout << "Integers " << a <<", "<< b <<" and " << c << " multiplication result is " << proizvod << std::endl;
}
void Homework::TaskTwo(){
    std::cout << std::endl;
    std::cout << ">> Homework Task 2 <<" << std::endl;
    /*
     2. For an input positive integer N, output N stars. For example, if N = 5, then output *****. If N is 0 or less, output a message saying the input is invalid.
     */
    try {
        int N;
        std::cout << "Enter positive integer: " << std::endl;
        std::cin >> N;
        if (N>0) {
            for (int i=1; i<=N; i++) {
                std::cout << "*";
            }
            std::cout << std::endl;
        }
        else{
            throw 666;
        }

        
    } catch (int e) {
        std::cout << "You must input a positive integer. Error code: "<< e <<"." << std::endl;
    }
}
void Homework::TaskThree(){
    /*
     3. For an input positive integer, draw the triangle shape by using any character you want.
     Example: for input 3 (I chose character 'O', you can choose whichever.):
     
     O
     OO
     OOO
     OO
     O
     */
        std::cout << ">> Homework Task 3 <<" << std::endl;
        std::cout << std::endl;
        try{
            char print;
            int number = 0;
            int count = 0;
            int n = number;
            std::cout << "Enter positive integer: " << std::endl;
            std::cin >> number;
            while (std::cin.fail() || (number <= 0)){
                std::cout << std::endl;
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Invalid input. Please enter positive integer. " << std::endl;
                std::cout << "Enter integer: " << std::endl;
                std::cin >> number;
            }
            std::cout << "Enter character: " << std::endl;
            std::cin >> print;
            while (!isalpha(print)){
                std::cout << std::endl;
                std::cin.clear();
                std::cin.ignore();
                std::cout << "Invalid input. Please enter character. " << std::endl;
                std::cout << "Enter character: " << std::endl;
                std::cin >> print;
            }
            std::cout << std::endl;
            if (number > 0){
                // logic
                for (int i = 0; i < number; i++) {
                    if (i <= number / 2) {
                        count = n + 1;
                        for (int j = 0; j <= i; j++) {
                            n++;
                            std::cout << print << " ";
                        }
                        std::cout << std::endl;
                    }
                    else {
                        n = count - (number - i);
                        count = n;
                        for (int j = i; j < number; j++) {
                            std::cout << print << " ";
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
void Homework::TaskFour(){
    /*
     4. Write a program that will, for an input integer, output if it is divisible by 3.
     */
    std::cout << ">> Homework Task 4 <<" << std::endl;
    std::cout << std::endl;
    try{
        int number = 0;
        std::cout << "Enter positive integer: " << std::endl;
        std::cin >> number;
        while (std::cin.fail() || (number <= 0)){
            std::cout << std::endl;
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Invalid input. Please enter positive integer. " << std::endl;
            std::cout << "Enter integer: " << std::endl;
            std::cin >> number;
        }
            if (number % 3 == 0){
                std::cout << "Number " << number << " is divisible by 3." << std::endl;
    }
            else{
                std::cout << "Number " << number << " is not divisible by 3." << std::endl;
            }
    }
        catch(int e) {
            std::cout << "An exception occurred. Exception Nr. " << e << '\n';
            std::cout << "You must input a positive integer." << std::endl;
        }
}
int IsNumberDivisibleByEight(int n)
{
    return (((n >> 3) << 3) == n);
}
void Homework::TaskFive(){
    /*
     5. Write a program that will, for an input integer, output if it is divisible by 8. You are not allowed to divide this number by 8 at any point in the code, either with / or % (modulo operator).
     Note: Numbers are divisible by 8 if the number formed by the last three individual digits is evenly divisible by 8.
     */
    // Reference:
    //https://www.geeksforgeeks.org/check-number-divisible-8-using-bitwise-operators/
    
    std::cout << ">> Homework Task 5 <<" << std::endl;
    std::cout << std::endl;
    try{
        int number = 0;
        std::cout << "Enter positive integer: " << std::endl;
        std::cin >> number;
        while (std::cin.fail() || (number <= 0)){
            std::cout << std::endl;
            std::cin.clear();
            std::cin.ignore();
            std::cout << "Invalid input. Please enter positive integer. " << std::endl;
            std::cout << "Enter integer: " << std::endl;
            std::cin >> number;
        }
        if (IsNumberDivisibleByEight(number)){
            std::cout << "Number " << number << " is divisible by 8." << std::endl;
        }
        else{
            std::cout << "Number " << number << " is not divisible by 8." << std::endl;
        }
    }
    catch(int e) {
        std::cout << "An exception occurred. Exception Nr. " << e << '\n';
        std::cout << "You must input a positive integer." << std::endl;
    }

    
}
