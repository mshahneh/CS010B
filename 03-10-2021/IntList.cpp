#include "IntList.h"

bool isOdd(int n)
{
  // int temp = n%2;// even = 0, odd = -1
  // temp += 2; //even = 2, odd = 1
  // temp %= 2;// even = 0, odd = 1
  // if(temp == 1)
  //   return true;
  // else
  //   return false;
   return n % 2 != 0;
}

void IntList::removeOdds() {
  IntNode *curr = nullptr;
  IntNode *prev = nullptr;

  while(head != nullptr && isOdd(head->value))
  {
    prev = head;
    head = head->next;
    delete prev;
  }

  prev = head;

  while (prev != nullptr && prev->next != nullptr)
  {
    curr = prev->next;
    if(isOdd(curr->value))
    {
      prev->next = curr->next;
      delete curr;
    }
    else{
      prev = curr;
    }
  }

}
