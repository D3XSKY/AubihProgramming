//
//  main.cpp
//  AubihProgramming
//
//  Created by Dejan Misic on 08/11/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//
#include "homework.hpp"
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

#define PI 3.14159
void ClearScreen()
{
    std::cout << std::string( 100, '\n' );
}
void Pause()
{
    std::cin.clear();
    std::cout << std::endl << "Press any key to continue...";
    std::cin.get();
    std::cin.clear();
}
void TaskOne(){
    std::cout << ">> Task 1 <<" << std::endl;
    std::cout << std::endl;
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
    std::cout << ">> Task 2 <<" << std::endl;
    std::cout << std::endl;
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
    std::cout << ">> Task 3 <<" << std::endl;
    std::cout << std::endl;
    try{
        int number = 0;
        int count = 0;
        int n = number;
        std::cout << "Enter integer: " << std::endl;
        std::cin >> number;
        
        if (number > 0){
            // logic
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
    std::cout << ">> Task 4 <<" << std::endl;
    std::cout << std::endl;
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
    std::cout << ">> Task 5 <<" << std::endl;
    std::cout << std::endl;
    /* Exercise 5
     • For input radius of a circle (of type float), calculate and output its
     perimeter and surface area. For invalid input end program with a
     proper message.
     */
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
    std::cout << ">> Task 6 <<" << std::endl;
    std::cout << std::endl;
    /*
     Exercise 6
     • For an input positive integer N, list all non-prime numbers from 1 to
     N, inclusive. If input is invalid, make user input everything again.
     For example:
     - for input 10, the output should be: 4, 6, 8, 9, 10
     
     */
    
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
bool IsPalindrome (std::string str)
{
    int i;
    int length = str.length();
    for (i = 0; i < length; ++i)
        if (str.at(i) != str.at(length - i - 1)) return false;
    return true;
}

bool caseInsensitiveStringCompare( const std::string& str1, const std::string& str2 ) {
    std::string str1Cpy( str1 );
    std::string str2Cpy( str2 );
    std::transform( str1Cpy.begin(), str1Cpy.end(), str1Cpy.begin(), ::tolower );
    std::transform( str2Cpy.begin(), str2Cpy.end(), str2Cpy.begin(), ::tolower );
    return ( str1Cpy == str2Cpy );
}
bool IsStringAlphaNumeric(const std::string& str){
    return std::all_of(str.begin(), str.end(), [loc = std::locale{}](char c){return std::isalnum(c, loc);});
}
bool containWhitespace(std::string str){
    bool whitespace = true;
    for(int i = 0; i < str.length(); i++)
    {
        if (std::isspace(str.at(i))){
            whitespace =  true;
        }
        else{
            whitespace = false;
        }
    }
    return whitespace;
}
bool isWhitespace(std::string s){
    for(int index = 0; index < s.length(); index++){
        if(!std::isspace(s[index]))
            return false;
    }
    return true;
}
void TaskSeven(){
    std::cout << ">> Task 7 <<" << std::endl;
    std::cout << std::endl;
    /*
     Exercise 7
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

    //getting and validating input
    std::string word;
    std::cout << std::endl;
    std::cout << "Enter string determine if it the same whether you read it from left or from right side: " << std::endl;
    std::cin.clear(); // clear input buffer to restore cin to a usable state
    std::getline(std::cin >> std::ws, word);
    // checking does string contain any whitespaces
    while (word.empty() || (!IsStringAlphaNumeric(word)) || (containWhitespace(word)) || (word.size() < 1 || (word.size() == 1)))
    {
        if (caseInsensitiveStringCompare(word,"exit")){
            break;
        }
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cout << "Invalid input.\n ! String must not contain whitespaces.\n ! Only alphanumeric characters are allowed to be used. \n ! String has to be at least 2 characters long.\nTo exit program enter >> exit << \n" << std::endl;
        std::cout << "Enter string again: " << std::endl;
        std::getline(std::cin >> std::ws, word);
        std::cout << std::endl;
    }
    if (caseInsensitiveStringCompare(word,"exit")) {
        std::exit(0);
    }
    // checking whether string is palindrome
    // please note when string goes to the function below it's already validated for not having whitespaces etc
    if (IsPalindrome(word))
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }
    
}
std::string StringToUpper(std::string strToConvert)
{
    std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);
    
    return strToConvert;
}
void TaskEight(){
    std::cout << ">> Task 8 <<" << std::endl;
    std::cout << std::endl;
    /*
     Exercise 8
     • For input sentence, output the same sentence in upper case. If any
     character is already in upper case or not a letter, leave it as such.
     For example:
     - Input: „This is example 6.“; Output: „THIS IS EXAMPLE 6.
     */
    try{

    //getting and validating input
    std::string sentence;
    std::string converted;
    std::cout << std::endl;
    std::cout << "Enter some sentence: " << std::endl;
    std::cin.clear(); // clear input buffer to restore cin to a usable state
    std::getline(std::cin >> std::ws, sentence);
    
    if (sentence.size() > 0){
        converted = StringToUpper(sentence);
        std::cout << "\nYour string converted to upper case looks like this: " << std::endl;
        std::cout << "\n";
        std::cout << ">> " << converted << " <<";
    }
    else{
        throw 666;
    }
    }
    catch (int e){
        std::cout << "There was a problem transforming your string to upper case.\nPlease try again.\n Error code: " << e << std::endl;
    }
}
std::vector<std::string> SplitSentence(char* sentence, char delimiter=' ')
{
    std::vector<std::string> sentenceReversed;
    do
    {
        char* begin =sentence;
        while(*sentence != delimiter && *sentence)
            sentence++;
        sentenceReversed.push_back(std::string(begin, sentence));
    }while(0 != *sentence++);
    return sentenceReversed;
}
void TaskNine(){
    std::cout << ">> Task 9 <<" << std::endl;
    std::cout << std::endl;
    /*
     Exercise 9
     • For an input sentence, output it with words in reverse order. You may
     assume that any set of characters between two whitespaces is a
     word. If there are two whitespaces next to one another, consider
     them as one whitespace and output as a single blank space.
     For example:
     - Input: „This is exercise 7.“; „7. exercise is This“
     - Input: „Hello“; Output: „Hello“
     - Input: „Hello World“; Output: „World Hello“
     */
    
    // reference for both functions from stackoverflow
    // https://stackoverflow.com/a/31018227/9648082
    try{
    std::string sentence;
    std::vector<std::string> sentenceHolder;
    std::cout<<"Enter the sentence in order to reverse it: ";
    std::cin.clear(); // clear input buffer to restore cin to a usable state
    std::getline(std::cin >> std::ws, sentence);
    std::cout<<std::endl;
        if (sentence.size() > 1){
    sentenceHolder=SplitSentence((char*)sentence.c_str());
    sentence.clear();
    std::cout<<"Sentence reversed: \n";
    for(int i=sentenceHolder.size()-1; i>=0; i--) sentence+=sentenceHolder.at(i)+" ";
    //cout<<tempStr.at(i)<<" ";
    std::cout<<sentence<<std::endl;
    }
        else{
            throw 666;
        }
    }
    catch (int e){
    std::cout << "There was a problem reversing your sentence.\nPlease try again.\n Error code: " << e << std::endl;
    }
    
}
//https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/
std::string ReverseWord(std::string& word)
{
    int n = word.length();
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        std::swap(word[i], word[n - i - 1]);
    return word;
}

void TaskTen(){
    std::cout << ">> Task 10 <<" << std::endl;
    /*
     Exercise 10
     • For an input sentence, output it with every individual word in reverse
     order. You may assume that any set of characters between two
     whitespaces is a word. If there are two whitespaces next to one
     another, consider them as one whitespace and output as a single
     blank space.
     For example:
     - Input: „This is exercise 7.“; „sihT si esicrexe .7“
     - Input: „Hello“; Output: „olleH“
     - Input: „Hello World“; Output: „olleH dlroW“
     */
    try{
        std::string words;
        std::string sentence;
        
        std::vector<std::string> sentenceHolder;
        std::cout<<"Enter the sentence in order to reverse it: ";
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::getline(std::cin >> std::ws, sentence);
        std::cout<<std::endl;
        if (sentence.size() > 1){
        sentenceHolder=SplitSentence((char*)sentence.c_str());
        sentence.clear();
        std::cout<<"Words reversed: \n";
            for(int i=0; i<sentenceHolder.size(); i++)
            {
                words += ReverseWord(sentenceHolder[i]) + " ";
                           }
        std::cout<<words<<std::endl;
        }
    else {
        throw 666;
    }
    }
    catch(int e){
     std::cout << "There was a problem reversing letters in your sentence.\nPlease try again.\n Error code: " << e << std::endl;
    }
}

int main(int argc, const char * argv[]) {
    /*
     >> Please note that you can comment out any tasks that you don't want to run at the time.
     >> You can do so by adding "//" in front of any of the tasks below.
     >> Currently all tasks will execute, one by one.
     >> Enjoy researching into this, let me know if you don't understand anything!
     >>
     >> Best wishes, Dejan
     */
    std::cout << "\n>> Enjoy researching into this, let me know if you don't understand anything!" << "\n>>" << "\n>> Best wishes, Dejan" << std::endl;
    Pause();
    ClearScreen();
    TaskOne();
    TaskTwo();
    TaskThree();
    TaskFour();
    TaskFive();
    TaskSix();
    TaskSeven();
    TaskEight();
    TaskNine();
    TaskTen();
    std::cout << std::endl;
    std::cout << "\n>> Executing homework tasks..." << "\n" << std::endl;
    Homework::TaskOne();
    Homework::TaskTwo();
    Homework::TaskThree();
    Homework::TaskFour();
    Homework::TaskFive();
    return 0;
}

