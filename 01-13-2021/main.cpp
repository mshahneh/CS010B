#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

// Place charCnt prototype (declaration) here
int charCnt(string filename, char ch);

int main()
{
   string filename;
   char ch;
   int chCnt;

   cout << "Enter the name of the input file: ";
   cin >> filename;
   cout << endl;
   cout << "Enter a character: ";
   cin.ignore(); // ignores newline left in stream after previous input statement
   cin.get(ch);
   cout << endl;

   chCnt = charCnt(filename, ch);

   cout << "# of " << ch << "'s: " << chCnt << endl;

   return 0;
}

// Place charCnt implementation here
int charCnt(string filename, char ch)
{
   ifstream ifs(filename);
   char insideChar;
   int count = 0;
   if (ifs)
   {
      while (!ifs.eof())
      {
         ifs.get(insideChar);
         if (insideChar == ch)
         {
            count++;
         }
      }
   }
   else
   {
      cout << "Error opening " << filename << endl;
      exit(1);
   }

   ifs.close();
   return count;
}

int n;
char c;
while (fin >> n)
{
   vector.push_back(number);
   fin >> c;
}