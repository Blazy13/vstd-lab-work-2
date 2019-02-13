#pragma once

#include <iostream>
#include <string>
#include <climits>
#include "math.h"

using namespace std;

const string DOUBLE_X = "Phi(x) = 2 * x";
const string X_POW_2 = "Phi(x) = pow(x, 2)";
const string X_DIVIDE_3 = "Phi(x) = x/3";
const string Z_LESS_THAN_0 = " z < 0: x = z2 - z";
const string Z_MORE_OR_EQUAL_TO_0 = "z >= 0: x = ln(pow(z, 2) - 2)";

typedef double (*double_function_ptr)(const double &);

double calculate_y(const double &, const double &, const double &, const double &);
double calcualte_x(const double &);
double calculate_phi(const double &);

inline double x_pow_2(const double & x) { return pow(x, 2); }
inline double double_x(const double & x) { return x * 2; }
inline double x_divide_3(const double & x) { return x / 3; }

void show_selected_variant(const int &);
void show_menu();

double_function_ptr select_phi_variant();
