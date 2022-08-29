#include <iostream>
#include <boost/asio.hpp>
#include <boost/format.hpp>

using boost::format;

void testAsio() {
    std::cout << format("TEST::BOOST::SUCCESSFULLY");
}

int main() 
{
    testAsio();

    return 0;
}
