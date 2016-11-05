//
//  ex8_02.cpp
//  Exercise 8.2
//
//  Created by pezy on 11/27/14.
//
//  @Brief  Test your function by calling it, passing cin as an argument

#include <iostream>
#include <fstream>
using std::istream;

//takes and returns an istream&, read till the eof
istream& func(istream &is)
{
    std::string buf;
    //read and save in buf
    while (is >> buf)
    	//output all
        std::cout << buf << std::endl;
    is.clear();
    return is;
}

int fail_to_openfile();

int main()
{
    istream& is = func(std::cin);
    //Get error state flags
    //std::cout << is.rdstate() << std::endl;
    fail_to_openfile();
    return 0;
}

int fail_to_openfile()
{
	std::ifstream is;
	is.open("test.txt");
	//return Logical error on i/o operation
	if((is.rdstate()&std::istream::failbit)!=0)
		std::cerr<<"Error opening!"<<std::endl;
	return 0;
}
