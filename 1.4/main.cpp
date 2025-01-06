#include <iostream>

int main()
{
    std::cout << "Hello, World!";

    int a;
    a = 5;

    std::cout << a;

    int b{5};

    std::cout << b;

    int c(5);

    std::cout << c;

    int d = {5};
    std::cout << d;

    // [[maybe_unused]] double pi{3.14159};
    double pi{3.14159};

    return 0;
}