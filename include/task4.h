#ifndef LAB2_INCLUDE_TASK4_H
#define LAB2_INCLUDE_TASK4_H

#include <iostream>
#include <algorithm>
#include <functional>
#include <array>

using namespace std;

class Task4 {
  public:
    Task4(const int &, const int &, const double &);
    void ShowResult();

  private:
    array<double, 3> array_for_output_;
};

#endif
