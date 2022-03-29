#ifndef REGRESSION_HPP
#define REGRESSION_HPP

#include <stdexcept>
#include <vector>

struct Result {
  double A;
  double B;
};

class Regression {
  struct Point {
    double x;
    double y;
  };

  std::vector<Point> points_{};
  
 public:
  int size() const;

  Result fit() const;
  void add(double, double);
};

Result fit(Regression const &reg);

#endif