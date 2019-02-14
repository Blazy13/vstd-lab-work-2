#ifndef LAB2_INCLUDE_TASK3_H
#define LAB2_INCLUDE_TASK3_H

#include <iostream>
#include <string>
#include "math.h"

using namespace std;

class Task3 {
  public:
    Task3(const double & x, const double & y): x_(x), y_(y) {}
    double CalculateS();
    string SFormula();
    string CurrentCondition();

  protected:
    inline double AbsOfCosXAndLogY() {
      return abs(cos(x_)) + log(y_);
    }
    inline double ExpPow_2XAndY() {
      return exp(2 * x_ + y_);
    }
    inline double SqrtAbsXAnd_2TgY() {
      return sqrt(abs(x_)) + 2 * tan(y_);
    }

    inline double AbsXY() { return abs(x_ * y_); }
    inline bool AbsXYIsMoreThan_10() { return AbsXY() > 10; }
    inline bool AbsXYIsBetween_10_And_3() { return AbsXY() > 3 && AbsXY() <= 10; }

  private:
    double x_, y_;

    static const string kAbsOfCosXAndLogY;
    static const string kExpPow_2XAndY;
    static const string kSqrtAbsXAnd_2TgY;

    static const string kAbsXAndYIsMoreThan_10;
    static const string kAbsXAndYIsBetween_10_And_3;
    static const string kElse;
};

#endif
