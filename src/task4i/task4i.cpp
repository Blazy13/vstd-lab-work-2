#include "task4i.h"

const double Task4i::A[3] = { 3.2, 10.5, 5.4 };
const double Task4i::B[3] = { -0.7, -2.5, 3 };
const double Task4i::C[3] = { 2.2, 5.6, 2.6 };

const string Task4i::kFirstCondition = "|1-pow(x, 2)| = a+c";
const string Task4i::kSecondCondition = "|1-pow(x, 2)| > a+c";
const string Task4i::kThirdCondition = "|1-pow(x, 2)| < a+c";

const string Task4i::kFirstFormula = "x * exp(a) + exp(|b*c|)";
const string Task4i::kSecondFormula = "pow(sin(a*x), 2) + cos(b*c)";
const string Task4i::kThirdFormula = "sqrt(a*pow(b,4) + pow(c*pow(x, 2), 1/4))";


void Task4i::ShowVariants() {
  for(size_t i = 0; i < 3; i++) {
    cout << i+1 << ". ";
    cout << "A=" << A[i] << " ";
    cout << "B=" << B[i] << " ";
    cout << "C=" << C[i] << " ";
    cout << endl;
  }
}

void Task4i::ShowCurrentCondition(const size_t & variant) {
  string current_condition = kFirstCondition;
  if (abs_of_one_minus_pow_x_2() > sum_of_a_and_c(variant)) current_condition = kSecondCondition;
  if (abs_of_one_minus_pow_x_2() < sum_of_a_and_c(variant)) current_condition = kThirdCondition;
  cout << "Текущее условие: " << current_condition << endl;
}

void Task4i::ShowCurrentFormula(const size_t & variant) {
  string current_formula = kFirstFormula;
  if (abs_of_one_minus_pow_x_2() > sum_of_a_and_c(variant)) current_formula = kSecondFormula;
  if (abs_of_one_minus_pow_x_2() < sum_of_a_and_c(variant)) current_formula = kThirdFormula;
  cout << "Y=" << current_formula << endl;
}

double Task4i::CalculateY(const size_t & variant) {
  double result = 0.0;
  if (abs_of_one_minus_pow_x_2() > sum_of_a_and_c(variant)) result = second_function(variant);
  else if (abs_of_one_minus_pow_x_2() < sum_of_a_and_c(variant)) result = third_function(variant);
  else result = first_function(variant);
  return result;
}
