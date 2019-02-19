#include "task4i.h"

int main() {
  cout << "Выберите набор констант, с которым в дальнейшем будет происходить вычисление:" << endl;
  Task4i::ShowVariants();
  size_t variant;
  cin >> variant;
  cout << "Введите X:" << endl;
  double x;
  cin >> x;
  Task4i task(x);
  task.ShowCurrentCondition(variant);
  task.ShowCurrentFormula(variant);
  cout << "Y=" << task.CalculateY(variant);
  return 0;
}
