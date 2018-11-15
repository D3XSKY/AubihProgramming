//
//  main.cpp
//  AubihProgramming
//
//  Created by Dejan Misic on 08/11/2018.
//  Copyright © 2018 Dejan Misic. All rights reserved.
//
#include "exercise.hpp"
#include "homework.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <math.h>       /* sqrt */
#include <cctype>
#include <chrono>
#include <thread>
#include <stdio.h>

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
    Helper::Pause();
    Helper::ClearScreen();
    // MARK: Uncomment exercise tasks in order to execute them when you run the program.
    //Exercise::TaskOne();
    //Exercise::TaskTwo();
    //Exercise::TaskThree();
    //Exercise::TaskFour();
    //Exercise::TaskFive();
    //Exercise::TaskSix();
    //Exercise::TaskSeven();
    //Exercise::TaskEight();
    //Exercise::TaskNine();
    //Exercise::TaskTen();
    std::cout << std::endl;
    std::cout << "\n>> Executing homework tasks..." << "\n" << std::endl;
    Homework::TaskOne();
    Homework::TaskTwo();
    Homework::TaskThree();
    Homework::TaskFour();
    Homework::TaskFive();
    return 0;
}

