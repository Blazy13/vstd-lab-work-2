#include "task4.h"

Task4::Task4(const int & x, const int & y, const double & z) {
  array_for_output_[0] = double(x);
  array_for_output_[1] = double(y);
  array_for_output_[2] = z;
  sort(array_for_output_.begin(), array_for_output_.end(), greater<double>());
}

void Task4::ShowResult() {
  for (double element : array_for_output_) {
    cout << element << " ";
  }
  cout << endl;
}
