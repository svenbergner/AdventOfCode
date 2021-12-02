#include <algorithm>
#include <array>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <stdlib.h>


int main()
{
  std::string filename = "day1puzzleinput.txt";

  // open file for reading
  std::ifstream istrm(filename, std::ios::binary);
  if (!istrm.is_open()) 
  {
    std::cout << "failed to open " << filename << '\n';
  } 
  else 
  {
    char currentValue[10];
    int lastValue = -1;
    int largerMeasurementCount = 0;

    while(!istrm.eof())
    {
        istrm.getline(&currentValue[0], 10, '\n');
        const auto currentValueAsInt = std::atoi(currentValue);
        //std::cout << currentValue << std::endl;

        if( lastValue >= 0 && currentValueAsInt > lastValue )
        {
            ++largerMeasurementCount;
        }
        lastValue = currentValueAsInt;
    }

    std::cout << "Anzahl der größeren Messungen: " << largerMeasurementCount << std::endl;
  }
}
