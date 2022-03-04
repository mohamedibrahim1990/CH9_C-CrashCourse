// 27-Listing9-27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <cstdint>
#include <functional>
struct CountIf {
    CountIf(char x) : x{ x } { }
        size_t operator()(const char* str) const {
        size_t index{}, result{};
        while (str[index]) {
            if (str[index] == x) result++; 
                index++;
        }
        return result;
    }
private:
    const char x;
}; 

size_t count_spaces(const char* str) {
    size_t index{}, result{};
    while (str[index]) {
        if (str[index] == ' ')result++;
        index++;
    }
    return result;
}

std::function<size_t(const char*)> funcs[]{
    count_spaces,
    CountIf{'e'},
    [](const char* str) {
        size_t index{};
    while (str[index]) index++;
    return index;
}
};

auto text = "Sailor went to sea to see what he could see.";


int main() {
    size_t index{};
    for (const auto& func : funcs) {
        printf("func #%zu: %zu\n", index++, func(text));
    }
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
