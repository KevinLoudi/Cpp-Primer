// reads a set of book sales transactions, 
// writing each transaction to the standard output.
#include <iostream>
//modify to point a relative folder
#include "../include/Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

void input_output_sales(Sales_item&);

int main()
{
	//bookname, unit_sold, revenue
	Sales_item item;
    input_output_sales(item);
    return 0;
}

void input_output_sales(Sales_item& item)
{
	//cout-->
	for(;cin>>item;cout<<item<<endl);
	return;
}

//the overrided operator
/*std::istream& Sales_item::operator>>(std::istream& in, Sales_item& s)
{
    double price;
    in >> s.bookNo >> s.units_sold >> price;
    // check that the inputs succeeded
    if (in)
        s.revenue = s.units_sold * price;
    else 
        s = Sales_item();  // input failed: reset object to default state
    return in;
}

std::ostream& Sales_item::operator<<(std::ostream& out, const Sales_item& s)
{
    out << s.isbn() << " " << s.units_sold << " "
        << s.revenue << " " << s.avg_price();
    return out;
}*/
