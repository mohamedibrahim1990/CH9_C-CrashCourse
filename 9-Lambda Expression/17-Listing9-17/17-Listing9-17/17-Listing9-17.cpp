// 17-Listing9-17.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdio>
#include <cstdint>

template<typename Fn, typename T>
void transform(Fn fn, const T* in, T* out, size_t len) {
    for (size_t i{}; i < len; i++) {
        out[i] = fn(in[i]);
    }
}


int main()
{
  
    constexpr size_t len{ 3 };
    int base_int[]{ 1,2,3 }, a[len];
    float base_float[]{ 10.f, 20.f, 30.f }, b[len];
    auto translate = [](auto x) {return 10 * x + 5; };
    transform(translate, base_int, a, len); 
    transform(translate, base_float, b, len);
   
    for (size_t i{}; i < len; i++) {
        printf("Element %zu: %d %f\n", i, a[i], b[i]);
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
