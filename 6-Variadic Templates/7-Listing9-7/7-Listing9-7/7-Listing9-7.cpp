// 7-Listing9-7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template <typename T>
void my_func(T x) {
    std::cout << x << std::endl;
}


template<typename T, typename... Args>
void my_func(T x, Args... args) {
    std::cout << x << std::endl;
    my_func(args...);
}

int main()
{
    my_func(2, 3, 4, 5, 6, 7, 8, 9);
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
