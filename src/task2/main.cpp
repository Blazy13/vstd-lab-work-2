#include "task2.h"

int main() {
  double z, a, c=a=z=0;
  cout << "Введите Z:" << endl;
  cin >> z;
  cout << "Вы ввели " << z << endl;

  cout << "Введите A:" << endl;
  cin >> a;
  cout << "Вы ввели " << a << endl;

  cout << "Введите C:" << endl;
  cin >> c;
  cout << "Вы ввели " << c << endl;
  
  double x = calcualte_x(z);
  cout << "X=" << x << endl;

  double phi = calculate_phi(x);
  cout << "Phi(x)=" << phi << endl;

  double y = calculate_y(x, a, c, phi);
  cout << "Y=" << y << endl;

  cin.ignore(INT_MAX, '\n');
  cin.get();
  
  return 0;
}

double calcualte_x(const double & z) {
  double result = 0.0;
  if (z >= 0) {
    cout << Z_MORE_OR_EQUAL_TO_0 << endl;
    result = 2 * z +1;
  }
  else {
    cout << Z_LESS_THAN_0 << endl;
    result = log(pow(z, 2) - z);
  }
  return result;
}

double calculate_y(const double & x, const double & a, const double & c, const double & phi) {
  double result = 0.0;
  result = pow(phi, 2) + a * pow(cos(x), 5) * pow(x, 3) + c * log(pow(x, 2/5));
  return result;
}

double calculate_phi(const double & x) {
  double result = 0.0;
  double_function_ptr func = select_phi_variant();
  result = (*func)(x);
  return result;
}

void show_menu() {
  cout << "Выберите вариант функции phi" << endl;
  cout << "1. " << DOUBLE_X << endl;
  cout << "2. " << X_POW_2 << endl;
  cout << "3. " << X_DIVIDE_3 << endl;
}

void show_selected_variant(const int & variant) {
  switch (variant) {
    case 1:
      cout << DOUBLE_X << endl;
      break;
    case 2:
      cout << X_POW_2 << endl;
      break;
    case 3:
      cout << X_DIVIDE_3 << endl;
      break;
    default:
      cout << "Вы ничего не выбрали!" << endl;
      break;
  }
}

double_function_ptr select_phi_variant() {
  int key = -1;
  double_function_ptr result;
  while (key < 0) {
    show_menu();
    cin >> key;
    switch (key) {
      case 1:
        result = double_x;
        break;
      case 2:
        result = x_pow_2;
        break;
      case 3:
        result = x_divide_3;
        break;
      default:
        key = -1;
        break;
    }
    show_selected_variant(key);
  }
  return result;
}
