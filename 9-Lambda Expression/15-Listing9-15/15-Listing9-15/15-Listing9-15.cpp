// 15-Listing9-15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <cstdint>

template<typename Fn>
void transform(Fn fn, const int* in, int* out, size_t length) {
    for (size_t i{}; i < length; i++) {
        out[i] = fn(in[i]);
    }
}

int main()
{
    const size_t len{ 3 };
    int base[]{ 1,2,3 }, a[len], b[len], c[len];
    transform([](int x) {return 1; }, base , a , len);
    transform([](int x) { return x; }, base, b, len);
    transform([](int x) { return 10 * x + 5; }, base, c, len);

    for (size_t i{}; i < len; i++) {
        printf("Element %zu: %d %d %d\n", i, a[i], b[i], c[i]);
    }
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
