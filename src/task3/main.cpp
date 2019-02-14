#include "task3.h"

int main() {
  double x, y;
  cout << "Enter x:" << endl;
  cin >> x;
  cout << "Enter y:" << endl;
  cin >> y;
  Task3 * task = new Task3(x, y);
  cout << "Current condition: " << task->CurrentCondition() << endl;
  cout << "Current formula of S: " << task->SFormula() << endl;
  cout << "Result: " << task->CalculateS() << endl;
  return 0;
}
