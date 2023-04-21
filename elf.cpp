#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
   string first_word, second_word;

   cout << "Write first word\n";
   cin >> first_word;
   cout << "Write second word\n";
   cin >> second_word;

   int countLetters{0};
   string commonLetters = "";

   for (size_t i = 0; i < first_word.length(); i++)
   {
      for (size_t j = 0; j < second_word.length(); j++)
      {
         if (first_word[i] == second_word[j])
         {
            countLetters++;
         }
      }
   }

   for (size_t i = 0; i < first_word.length(); i++)
   {
      for (size_t j = 0; j < second_word.length(); j++)
      {
         if (first_word[i] == second_word[j])
         {
            commonLetters += first_word[i];
            break;
         }
      }
   }

   cout << countLetters + commonLetters.length();

   return 0;
}