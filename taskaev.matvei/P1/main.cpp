#include <iostream>
#include <stdexcept>
#include "function.hpp"
using namespace taskaev;

int main()
{
  int number = 0;
  findmaxCountNumbers findmaxcountnumbers;
  do
  {
    std::cin >> number;
    if (!std::cin)
    {
      std::cerr << "Not a sequence.\n";
      return 1;
    }
    else if (number != 0)
    {
      try
      {
        findmaxcountnumbers(number);
      }
      catch (const std::logic_error & e)
      {
        std::cerr << "Error: " << e.what() << "\n";
        return 2;
      }
    }
  } while (number && std::cin);
  std::cout << findmaxcountnumbers() << "\n";
}
