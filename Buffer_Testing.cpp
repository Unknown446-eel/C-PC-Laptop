#include <iostream>

int main(void)
{

    std::cout << "Enter three numbers separated by a space: ";

    int x{}, y{}, z{};

    std::cin >> x >> y >> z; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << ", " << y << " and " << z << '\n';

    return 0;
}