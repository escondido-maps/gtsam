/**
 * @file    Point2.cpp
 * @brief   2D Point
 * @author  Frank Dellaert
 */

#include "Point2.h"
#include "Lie-inl.h"

using namespace std;

namespace gtsam {

  /** Explicit instantiation of base class to export members */
  template class Lie<Point2>;

  /* ************************************************************************* */
  void Point2::print(const string& s) const {
    cout << s << "(" << x_ << ", " << y_ << ")" << endl;
  }

  /* ************************************************************************* */
  bool Point2::equals(const Point2& q, double tol) const {
    return (fabs(x_ - q.x()) < tol && fabs(y_ - q.y()) < tol);
  }

  /* ************************************************************************* */
  double Point2::norm() const {
    return sqrt(x_*x_ + y_*y_);
  }

  /* ************************************************************************* */

} // namespace gtsam
