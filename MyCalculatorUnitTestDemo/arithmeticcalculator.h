#ifndef ARITHMETICCALCULATOR_H
#define ARITHMETICCALCULATOR_H

#include <QObject>

class ArithmeticCalculator : public QObject
{
    Q_OBJECT
   public:
    explicit ArithmeticCalculator(QObject *parent = nullptr);

   signals:

   public:
    int add(int num1, int num2);
    int sub(int num1, int num2);
    int mult(int num1, int num2);
    int div(int num1, int num2);
    int mod(int num1, int num2);

};

#endif // ARITHMETICCALCULATOR_H
