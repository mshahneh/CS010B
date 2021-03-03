#include "IntList.h"

#include <ostream>

using namespace std;

IntList::IntList() : head(nullptr) {}


void IntList::push_front(int val) {
   if (!head) {
      head = new IntNode(val);
   } else {
      IntNode *temp = new IntNode(val);
      temp->next = head;
      head = temp;
   }
}

int IntList::min_value() const {
  return min_value(head);
}

int IntList::min_value(IntNode *curr) const {
  if(curr->next ==  nullptr)
    return curr->value;
  int Min = min_value(curr->next);
  if (curr->value < Min)
    Min = curr->value;
  return Min;
}
