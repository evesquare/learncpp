#include <iostream>

int add(int, int); // 事前にadd()を宣言する

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}

int add(int x, int y) // 事前に宣言されたadd()の定義
{
    return x + y;
}