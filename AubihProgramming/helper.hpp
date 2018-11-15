//
//  helper.hpp
//  AubihProgramming
//
//  Created by Dejan Misic on 14/11/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//

#ifndef helper_hpp
#define helper_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>       /* sqrt */
#include <string>
#include <cctype>
#include <chrono>
#include <thread>

class Helper{
public:
    static bool IsPalindrome (std::string str);
    static bool CaseInsensitiveStringCompare( const std::string& str1, const std::string& str2 );
    static bool IsStringAlphaNumeric(const std::string& str);
    static bool ContainWhitespace(std::string str);
    static void ClearScreen();
    static void Pause();
    static std::string StringToUpper(std::string strToConvert);
    static std::vector<std::string> SplitSentence(char* sentence, char delimiter=' ');
    static std::string ReverseWord(std::string& word);
    static int IsNumberDivisibleByEight(int n);
    //static bool ValidateInput(double x);
    //static bool ValidateInput(int x);
    //static bool ValidateInput(char x);
};
#endif /* helper_hpp */
