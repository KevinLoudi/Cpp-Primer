// Print each number in the range specified by two integers.

#include <iostream>

using std::cout;
using std::cin;

//rewrite the method in a generic way
template<typename M>
void print_range(M lo, M hi)
{
    if (lo > hi)
    {
        print_range(hi, lo);
        return;
    }
    //works
    for (M i = lo; i != hi; ++i)
        cout << i << " ";
}

int main()
{
    auto low = 0, high = 0;
    cout << "please input two integers:\n";
    cin >> low >> high;
    //explicit template specialization
    print_range<int>(low, high);
    //print_range_recursive<int>(low,high);
    return 0;
}
