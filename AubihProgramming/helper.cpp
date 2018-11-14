//
//  helper.cpp
//  AubihProgramming
//
//  Created by Dejan Misic on 14/11/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#include "helper.hpp"
#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>       /* sqrt */
#include <string>
#include <cctype>
#include <chrono>
#include <thread>

void Helper::ClearScreen()
{
    std::cout << std::string( 100, '\n' );
}
void Helper::Pause()
{
    std::cin.clear();
    std::cout << std::endl << "Press any key to continue...";
    std::cin.get();
    std::cin.clear();
}
// function to check whether string is palindrome
bool Helper::IsPalindrome (std::string str)
{
    int i;
    int length = str.length();
    for (i = 0; i < length; ++i)
        if (str.at(i) != str.at(length - i - 1)) return false;
    return true;
}
bool Helper::CaseInsensitiveStringCompare( const std::string& str1, const std::string& str2 ) {
    std::string str1Cpy( str1 );
    std::string str2Cpy( str2 );
    std::transform( str1Cpy.begin(), str1Cpy.end(), str1Cpy.begin(), ::tolower );
    std::transform( str2Cpy.begin(), str2Cpy.end(), str2Cpy.begin(), ::tolower );
    return ( str1Cpy == str2Cpy );
}
bool Helper::IsStringAlphaNumeric(const std::string& str){
    return std::all_of(str.begin(), str.end(), [loc = std::locale{}](char c){return std::isalnum(c, loc);});
}
bool Helper::ContainWhitespace(std::string str){
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
std::string Helper::StringToUpper(std::string strToConvert)
{
    std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);
    return strToConvert;
}
std::vector<std::string> Helper::SplitSentence(char* sentence, char delimiter)
{
    std::vector<std::string> sentenceReversed;
    do
    {
        char* begin =sentence;
        while(*sentence != delimiter && *sentence)
            sentence++;
        sentenceReversed.push_back(std::string(begin, sentence));
    }
    while(0 != *sentence++);
    return sentenceReversed;
}
//https://www.geeksforgeeks.org/reverse-a-string-in-c-cpp-different-methods/
std::string Helper::ReverseWord(std::string& word)
{
    int n = word.length();
    // Swap character starting from two
    // corners
    for (int i = 0; i < n / 2; i++)
        std::swap(word[i], word[n - i - 1]);
    return word;
}
int Helper::IsNumberDivisibleByEight(int n)
{
    return (((n >> 3) << 3) == n);
}

