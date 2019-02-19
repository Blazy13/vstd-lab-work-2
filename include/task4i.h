#ifndef LAB2_INCLUDE_TASK4I_H
#define LAB2_INCLUDE_TASK4I_H

#include <iostream>
#include <string>
#include <math.h>

using namespace std;

class Task4i {
  public:
    Task4i(const double & x): x_(x) {}
    double CalculateY(const size_t &);
    static void ShowVariants();
    void ShowCurrentCondition(const size_t &);
    void ShowCurrentFormula(const size_t &);

  private:
    static const double A[3];
    static const double B[3];
    static const double C[3];
    
    static const string kFirstCondition;
    static const string kSecondCondition;
    static const string kThirdCondition;

    static const string kFirstFormula;
    static const string kSecondFormula;
    static const string kThirdFormula;

    inline double sum_of_a_and_c(const size_t & variant) { 
      return A[variant] + C[variant];
    }

    inline double abs_of_one_minus_pow_x_2() {
      return abs(1 - pow(x_, 2));
    }

    inline double first_function(const size_t variant) {
      return x_*exp(A[variant]) + exp(abs(B[variant]*C[variant]));
    }
    inline double second_function(const size_t variant) {
      return pow(sin(A[variant]*x_), 2) + cos(B[variant] * C[variant]);
    }
    inline double third_function(const size_t variant) {
      return sqrt(A[variant]*pow(B[variant], 4) + pow(C[variant]*pow(x_, 2), 1/5));
    }

    double x_;
};

#endif
