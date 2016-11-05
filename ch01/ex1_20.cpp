#include <iostream>
//modify to point a relative folder
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
	//bookname, unit_sold, revenue
    for (Sales_item item("Essential C++"); cin >> item; cout << item << endl);
    return 0;
}
