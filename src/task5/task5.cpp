#include "task5.h"

bool Task5::IsThePointInArea() {
  const Point first_point(-1.0, 0.0, 1.0);
  const Point second_point(1.0, 0.0, 1.0);
  bool result = false;
  result = result || point_for_checking_.y < 0;
  result = result && (point_for_checking_.IsPointInRadiusOfOtherPoint(first_point) ||
                      point_for_checking_.IsPointInRadiusOfOtherPoint(second_point)
                     );
  return result;
}
