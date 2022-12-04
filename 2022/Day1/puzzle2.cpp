#include <algorithm>
#include <array>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <stdlib.h>
#include <string>
#include <vector>


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
    std::vector<int> maxCalories;

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
            maxCalories.push_back(currentCalories);
            currentCalories = 0;
        }
    }
    std::sort(maxCalories.begin(), maxCalories.end(), std::greater<int>());
    int sumTopThree = 0;
    for( int i = 0; i<3; ++i )
    {
        std::cout << i << " : " << maxCalories.at(i) << std::endl;
        sumTopThree += maxCalories.at(i);
    }

    std::cout << "Summe der Top3 Kalorienzahlen: " << sumTopThree << std::endl;
  }
}

