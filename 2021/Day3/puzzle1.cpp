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
  std::string filename = "day3puzzleinput.txt";

  // open file for reading
  std::ifstream istrm(filename, std::ios::binary);
  if (!istrm.is_open()) 
  {
    std::cout << "failed to open " << filename << '\n';
  } 
  else 
  {
    char currentLine[20];
    int gammaRate = 0;
    int epsilonRate = 0;

    std::vector<std::string> allLines;

    while(!istrm.eof())
    {
        istrm.getline(&currentLine[0], 20, '\n');
        if( currentLine != nullptr )
        {
          allLines.push_back(currentLine);
        }
    }

    //std::cout << "Lines count: " << allLines.size() << std::endl;

    struct avarageDigits
    {
      int zerosCount = 0;
      int onesCount = 0;
    };
    
    std::array<avarageDigits,12> allAvarageDigits;

    for( auto currentLine : allLines )
    {
      for( size_t i = 0; i < currentLine.size(); ++i )
      {
        const auto character = currentLine.at(i);
        const auto digit = std::atoi( &character );
        //std::cout << digit;

        if( digit == 0 )
        {
          allAvarageDigits.at(i).zerosCount++;
        }

        if( digit == 1 )
        {
          allAvarageDigits.at(i).onesCount++;
        }
      }    
    }

    std::string mostCommonBits;

    for( auto bit : allAvarageDigits )
    {
      if( bit.onesCount > bit.zerosCount )
      {
        mostCommonBits.append("1");
      }
      else
      {
        mostCommonBits.append("0");
      }
    }

    std::string leastCommonBits;

    for( auto bit : allAvarageDigits )
    {
      if( bit.onesCount < bit.zerosCount )
      {
        leastCommonBits.append("1");
      }
      else
      {
        leastCommonBits.append("0");
      }
    }

    gammaRate = std::stoi( mostCommonBits, nullptr, 2 );
    epsilonRate = std::stoi( leastCommonBits, nullptr, 2);

    std::cout << "gamma rate: " << gammaRate << std::endl;
    std::cout << "Final depth: " << epsilonRate << std::endl;
    std::cout << "Solution: " << gammaRate * epsilonRate << std::endl;
  }
}
