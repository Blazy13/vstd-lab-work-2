#include "task1.h"

int main() {
  Point mPoint;
  enter_point(mPoint);
  show_point(mPoint);
  if (is_point_in_area(mPoint))
    cout << "Точка находится в заштрихованной области\n";
  else
    cout << "Точка не находится в заштрихованной области\n";
  return 0;
}

void enter_point(Point & point) {
  cout <<  "Введите первую координату точки (X):\n";
  cin >> point.x;
  cout << "Введите вторую координату точки (Y);\n";
  cin >> point.y;
}

void show_point(const Point & point) {
  cout << "Точка (" << point.x << "; " << point.y << ")\n";
}

double radius(const double & x_pos, const double & y_pos) {
  double res = 0.0;
  res = sqrt(pow(x_pos, 2) + pow(y_pos, 2));
  return res;
}

double radius(const Point & point) {
  double res = 0.0;
  res = sqrt(pow(point.x, 2) + pow(point.y, 2));
  return res;
}

//variant 7
bool is_point_in_area(const Point & point) {
  double area_radius = radius(X_RANGE, Y_RANGE);
  double point_radius = radius(point);
  bool result = false;
  result = result || point_radius >= area_radius;
  result = result && (point.x > -2 && point.x < 2);
  result = result && (point.y > -1 && point.x < 1);
  return result;
}
