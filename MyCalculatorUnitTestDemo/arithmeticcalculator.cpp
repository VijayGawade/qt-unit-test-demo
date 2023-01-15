#include "arithmeticcalculator.h"

ArithmeticCalculator::ArithmeticCalculator(QObject *parent) : QObject{parent} {}

int ArithmeticCalculator::add(int num1, int num2) { return (num1 + num2); }

int ArithmeticCalculator::sub(int num1, int num2) { return (num1 - num2); }

int ArithmeticCalculator::mult(int num1, int num2) { return (num1 * num2); }

int ArithmeticCalculator::div(int num1, int num2) { return (num1 / num2); }

int ArithmeticCalculator::mod(int num1, int num2) { return (num1 % num2); }
