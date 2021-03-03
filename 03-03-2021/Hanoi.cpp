#include <iostream>

using namespace std;

void hanoi_solve(int n, string move_from, string move_to, string helper)
{
  // move first n-1 disks to tower 3
  // move last disk to tower 2
  // move everything from tower 3 to tower 2
  // cout << "number of disks to solve :" << n << " move from " << move_from << " with the help of " << helper << " to the tower " << move_to << endl;
  if (n == 0)
    return;
  hanoi_solve(n-1, move_from, helper, move_to);
  cout << "move disk " << n << " to tower " << move_to << endl;
  hanoi_solve(n-1, helper, move_to, move_from);
}

int main(){
  int n;
  cin >> n;
  string tower1, tower2, tower3;
  cin >> tower1 >> tower2 >> tower3;
  hanoi_solve(n, tower1, tower2, tower3);
    return 0;
}
