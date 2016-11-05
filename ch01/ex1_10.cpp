// prints the numbers from ten down to zero.(use while)

#include <iostream>

int main()
{
    auto i = 10;
    while (i >= 0)
        std::cout << i-- << " ";
    return 0;
}
