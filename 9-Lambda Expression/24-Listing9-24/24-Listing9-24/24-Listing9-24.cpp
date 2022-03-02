// 24-Listing9-24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <cstdint>

struct LambdaFactory {
    LambdaFactory(char in) : to_count{ in }, tally{} { }
    auto make_lambda() {
        return [this](const char* str) {
            size_t index{}, result{};
            while (str[index]) {
                if (str[index] == to_count) result++;
                index++;
            }
            tally += result;
            return result;
        };
    }
    const char to_count;
    size_t tally;
};
int main()
{
    LambdaFactory factory{ 's' }; 
    auto lambda = factory.make_lambda(); 
        printf("Tally: %zu\n", factory.tally);
    printf("Sally: %zu\n", lambda("Sally sells seashells by the seashore."));
    printf("Tally: %zu\n", factory.tally);
    printf("Sailor: %zu\n", lambda("Sailor went to sea to see what he could see."));
    printf("Tally: %zu\n", factory.tally);
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
