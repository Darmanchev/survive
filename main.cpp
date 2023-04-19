#include <iostream>
#include <string>

using namespace std;

main()
{
   string inputString;

   size_t countBalls{0};
   size_t maxCount{0};
   while (getline(cin, inputString))
   {
      if (inputString == "END")
      {
         cout << "The minimum number of balls to be taken out is " << countBalls - maxCount;
         break;
      }

      size_t index = inputString.find(":");

      inputString = inputString.substr(index + 1);

      int intString = stol(inputString);

      countBalls += intString;

      if (maxCount < intString)
      {
         maxCount = intString;
      }
   }

   return 0;
}