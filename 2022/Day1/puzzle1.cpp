#include <algorithm>
#include <array>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <stdlib.h>


int main()
{
  std::string filename = "2022/Day1/day1puzzleinput.txt";

  // open file for reading
  std::ifstream istrm(filename, std::ios::binary);
  if (!istrm.is_open()) 
  {
    std::cout << "failed to open " << filename << '\n';
  } 
  else 
  {
    char currentValue[10];
    int currentCalories = 0;
    int maxCalories = 0;

    while(!istrm.eof())
    {
        istrm.getline(&currentValue[0], 10, '\n');
        if( strlen(currentValue) > 0 )
        {
            const auto currentValueAsInt = std::atoi(currentValue);
            std::cout << currentValue << std::endl;

            currentCalories += currentValueAsInt;
            std::cout << "currentCalories: " << currentCalories;
        }
        else
        {
            maxCalories = std::max(currentCalories, maxCalories);
            currentCalories = 0;
        }
    }

    std::cout << "Maximale Kalorienzahl: " << maxCalories << std::endl;
  }
}

