#include <iostream>

using namespace std;

class Number
{
public:
   int num;
   Number(int num)
   {
      this->num = num;
   }
   Number add(Number b)
   {
      Number result(num + b.num);
      return result;
   }
};

int main()
{
   Number instance1(5);
   Number instance2(7);
   Number result = instance1.add(instance2);
   cout << result.num << endl;
   return 0;
}
