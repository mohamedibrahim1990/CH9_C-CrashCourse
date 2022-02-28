// 4-Listing9-4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>

template <typename X, typename Y>
auto add(X x, Y y) -> decltype(x + y) {
    return x + y;
}

int main()
{
    auto my_double = add(100., -10);
    printf("decltype(double + int) = double; %f\n", my_double);

    auto my_uint = add(100U, -20);
    printf("decltype(uint + int) = uint; %u\n", my_uint);

    auto my_ulonglong = add(char{ 100 }, 54'999'900ull);
    printf("decltype(char + ulonglong) = ulonglong; %llu\n", my_ulonglong);

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
