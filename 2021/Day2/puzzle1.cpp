#include <algorithm>
#include <array>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>

int main()
{
  std::string filename = "day2puzzleinput.txt";

  // open file for reading
  std::ifstream istrm(filename, std::ios::binary);
  if (!istrm.is_open()) 
  {
    std::cout << "failed to open " << filename << '\n';
  } 
  else 
  {
    char currentOrder[20];
    int horzPos = 0;
    int depth = 0;

    std::vector<std::string> allOrders;

    while(!istrm.eof())
    {
        istrm.getline(&currentOrder[0], 20, '\n');
        if( currentOrder != nullptr )
        {
          allOrders.push_back(currentOrder);
        }
    }

    std::cout << "Order count: " << allOrders.size() << std::endl;

    for( auto currentOrder : allOrders )
    {
      const auto splitPos = currentOrder.find(' ');
      const auto direction = currentOrder.substr( 0, splitPos );
      const auto value = std::stoi( currentOrder.substr(splitPos+1, currentOrder.size() - splitPos ) );

      if( direction == "forward" )
      {
        horzPos += value;
      } else if (direction == "down")
      {
        depth += value;
      } else if (direction == "up")
      {
        depth -= value;
      }
      
      
    }

    std::cout << "Final horizontal position: " << horzPos << std::endl;
    std::cout << "Final depth: " << depth << std::endl;
    std::cout << "Solution: " << horzPos * depth << std::endl;
  }
}
