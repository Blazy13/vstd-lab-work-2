#include "task3.h"

const string Task3::kAbsOfCosXAndLogY = "|cos(x)| + ln(y)";
const string Task3::kExpPow_2XAndY = "Exp(2*x + y)";
const string Task3::kSqrtAbsXAnd_2TgY = "sqrt(|x|) + 2 * tg(y)";

const string Task3::kAbsXAndYIsMoreThan_10 = "|xy| > 10";
const string Task3::kAbsXAndYIsBetween_10_And_3 = "3 < |xy| <= 10";
const string Task3::kElse = "Else";

double Task3::CalculateS() {
  double (Task3::*function_for_calculate_s)() = &Task3::SqrtAbsXAnd_2TgY;
  if (AbsXYIsMoreThan_10()) function_for_calculate_s = &Task3::AbsOfCosXAndLogY;
  if (AbsXYIsBetween_10_And_3()) function_for_calculate_s = &Task3::AbsOfCosXAndLogY;
  double result = (*this.*function_for_calculate_s)();
  return result;
}

string Task3::SFormula() {
  string result = kSqrtAbsXAnd_2TgY;
  if (AbsXYIsMoreThan_10()) result = kAbsOfCosXAndLogY;
  if (AbsXYIsBetween_10_And_3()) result = kExpPow_2XAndY;
  return result;
}

string Task3::CurrentCondition() {
  string result = kElse;
  if (AbsXYIsMoreThan_10()) result = kAbsXAndYIsMoreThan_10 ;
  if (AbsXYIsBetween_10_And_3()) result = kAbsXAndYIsBetween_10_And_3 ;
  return result;
}

