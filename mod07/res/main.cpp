#include <iostream>

template <typename T>
T mmax(T x, T y)
{
    return (x > y) ? x : y;
}

int main()
{
    std::cout << mmax<int>(1912,2023) << std::endl;
    std::cout << mmax<char>('b','c') << std::endl;
}