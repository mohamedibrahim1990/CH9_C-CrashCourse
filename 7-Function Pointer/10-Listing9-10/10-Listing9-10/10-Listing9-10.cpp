// 10-Listing9-10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

float add(float a, int b) {
    return a + b;
}

float subtract(float a, int b) {
    return a - b;
}



int main()
{
    const float first{ 100 };
    const int second{ 20 };

    //float(*operation)(float, int) {};
    using operation_func = float (*)(float, int);
    operation_func operation = nullptr;
    printf("operation initialized to 0x%p\n", operation);

    operation = &add;
    printf("&add= 0x%p\n", operation);
    printf("%g + %d = %g\n", first, second, operation(first, second));

    operation = subtract; 
    printf("&subtract = 0x%p\n", operation); 
    printf("%g - %d = %g\n", first, second, operation(first, second));
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
