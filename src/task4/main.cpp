#include "task4.h"

int main() {
  int x, y;
  double z;

  cout << "Enter X:" << endl;
  cin >> x;
  cout << "Enter Y:" << endl;
  cin >> y;
  cout << "Enter Z:" << endl;
  cin >> z;

  Task4 * task = new Task4(x, y, z);
  task->ShowResult();
  return 0;
}
