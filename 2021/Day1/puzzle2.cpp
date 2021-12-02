#include <algorithm>
#include <array>
#include <string>
#include <cstring>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>


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
    int largerMeasurementCount = 0;

    std::vector<int> allValues;
    std::vector<int> allSums;

    while(!istrm.eof())
    {
        istrm.getline(&currentValue[0], 10, '\n');
        const auto currentValueAsInt = std::atoi(currentValue);
        allValues.push_back(currentValueAsInt);
    }

    for( auto i=0,j=1,k=2; k < allValues.size(); ++i,++j,++k )
    {
      auto currentSum = allValues.at(i)+allValues.at(j)+allValues.at(k);
      std::cout << allValues.at(i) << " + " << allValues.at(j) << " + " << allValues.at(k) << " = " << allValues.at(i)+allValues.at(j)+allValues.at(k) << std::endl;
      allSums.push_back( currentSum );
    }
    std::cout << "Sum count: " << allSums.size() << std::endl;

    int lastSum = -1;
    for( auto currentSum : allSums )
    {
        if( lastSum >= 0 && currentSum > lastSum )
        {
            ++largerMeasurementCount;
        }
        lastSum = currentSum;
    }

    std::cout << "Anzahl der größeren Messungen: " << largerMeasurementCount << std::endl;
  }
}
