#ifndef __INTLIST_H__
#define __INTLIST_H__

#include <ostream>

using namespace std;

struct IntNode {
    int value;
    IntNode *next;
    IntNode(int value) : value(value), next(nullptr) {}
};


class IntList {

 private:
   IntNode *head;

 public:

   /* Initializes an empty list.
   */
   IntList();

   /* Inserts a data value to the front of the list.
   */
   void push_front(int);

   int min_value() const;

 private:

   int min_value(IntNode *) const;
};

#endif
