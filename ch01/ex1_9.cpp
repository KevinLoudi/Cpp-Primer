// sum the numbers from 50 to 100 (use while)

#include <iostream>
#include <typeinfo>

using std::cin;
using std::cout;
using std::endl;

template<typename T,typename U>
int sum(T lo, U hi)
{
    int sum = 0;
    while (lo < hi) sum += lo++;
    return sum;
}

int main()
{
	auto result=sum(50, 100+1);
    cout << "sum is: " << result <<endl;
    return 0;
}
