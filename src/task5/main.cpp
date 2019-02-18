#include "task5.h"

int main() {
  double x, y;
  Task5::Point point;
  cout << "Enter X:" << endl;
  cin >> point.x;
  cout << "Enter Y" << endl;
  cin >> point.y;
  Task5 * task = new Task5(point);
  cout << "Is the point in defined area?\n" << task->IsThePointInArea() << endl;
  return 0;
}
