#ifndef LAB2_INCLUDE_TASK5_H
#define LAB2_INCLUDE_TASK5_H

#include <iostream>
#include "math.h"

using namespace std;

class Task5 {
  public:
    struct Point {
      double x, y;
      double r;

      Point(const double & x=0.0, const double & y=0.0, const double & r=0.0): x(x), y(y), r(r) {}
     
      inline bool IsPointInRadiusOfOtherPoint(const Point & point) {
        return (LengthToOtherPoint(point) <= point.r);
      }
      inline double LengthToOtherPoint(const Point & point) {
        return sqrt(pow(x - point.x, 2) + pow(y - point.y, 2));
      }
    };

    Task5(const Point & point_for_checking): point_for_checking_(point_for_checking) {}

    bool IsThePointInArea();

  private:
    Point point_for_checking_;
};

#endif
