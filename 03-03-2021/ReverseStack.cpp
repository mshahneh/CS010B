#include <iostream>
#include <vector>

using namespace std;

void push_buttom(vector<int> &stack, int value)
{
  if (stack.size() == 0)
    stack.push_back(value);
  int head = stack[stack.size()-1];
  stack.pop_back();
  push_buttom(stack, value);
  stack.push_back(head);
}

void reverse(vector<int> &stack)
{
  // reverse the stack using only push_back and pop_back functions
  // with the help of push_buttom function

  //1- pop the head
  //2- reverse the rest
  //3- push the head to buttom of stack

  if (stack.size() <= 1)
    return;
  int head = stack[stack.size()-1];
  stack.pop_back();

  reverse(stack);

  push_buttom(stack, head);

}

int main(){
  vector<int> stack;
  for (int i = 0; i < 10; i++)
    stack.push_back(i + 1);
  reverse(stack);
  for (int i = 0; i < 10; i++)
    cout << stack[i] << ' ';
  cout << endl;
  return 0;
}
