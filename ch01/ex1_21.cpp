#include <iostream>
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::endl;
using std::cerr;

int compare_isbn(Sales_item&,Sales_item&);

int main()
{
	//overrided ">>" and "<<" 
    Sales_item item1, item2;
    cin >> item1 >> item2;
    return compare_isbn(item1,item2);
}

int compare_isbn(Sales_item& item1,Sales_item& item2)
{
   	if (item1.isbn() == item2.isbn())
        cout << item1 + item2 << endl;
    else
        cerr << "Different ISBN." << endl;
   	return 0;
} 
