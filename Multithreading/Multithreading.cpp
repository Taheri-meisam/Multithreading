// Multithreading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
#include <time.h>
#include  <chrono>
#include <Windows.h>

unsigned int microseconds;

void func1() {
    for (int a = 0; a < 200; a++) {
        Sleep(1000);
        std::cout << "Func 1  * " << std::endl;
        
    }

}

void func2(int count) {
    for (int a = 0; a < 200; a++) {
        std::cout << "Func 2  * "  << std::endl;
        Sleep(2000);
    }
}


int main()
{
    std::thread T1(func1);
    std::thread T2(func2,100);
     
    T1.join();
    T2.join();
    std::cout << "Hello World!\n";
}

