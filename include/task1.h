#pragma once

#include <iostream>
#include "math.h"

using namespace std;

const double X_RANGE = 1;
const double Y_RANGE = 1;

struct Point {
  double x, y;
};

void enter_point(Point & point);
void show_point(const Point & point);
double radius(const double & x_pos, const double & y_pos);
double radius(const Point & point);
bool is_point_in_area(const Point & point);
