// 13-Listing9-13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <cstdint>

size_t count_if(char x, const char* str) {
    size_t index{}, result{};
    while (str[index]) {
        if (str[index] == x) result++;
        index++;
    }
    return result;
}
int main()
{
    auto sally = count_if('s', "Sally sells seashells by the seashore.");
    printf("Sally: %zu\n", sally);
    auto sailor = count_if('s', "Sailor went to sea to see what he could see.");
    printf("Sailor: %zu\n", sailor);
    auto buffalo = count_if('f', "Buffalo buffalo Buffalo buffalo "
        "buffalo buffalo Buffalo buffalo.");
    printf("Buffalo: %zu\n", buffalo);
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
