#include <QtTest>

#include "arithmeticcalculator.h"

// add necessary includes here

class TestArithmetic : public QObject {
    Q_OBJECT

   public:
    TestArithmetic();
    ~TestArithmetic();

   private slots:
    void test_case1();
    void test_add();
    void test_sub();
    void test_mult();
    void test_div();
    void test_mod();

   private:
    ArithmeticCalculator *calc;
};

TestArithmetic::TestArithmetic() { calc = new ArithmeticCalculator(this); }

TestArithmetic::~TestArithmetic() { delete calc; }

void TestArithmetic::test_case1() {
    int a = 9, b = 4;
    int res = a + b;

    QCOMPARE(res, 13);
    QVERIFY(res > 0);  /// Just for demo purposes
}

void TestArithmetic::test_add()
{
    int a = 9, b = 4;
    QCOMPARE(calc->add(a,b), 13);
}

void TestArithmetic::test_sub()
{
    int a = 9, b = 4;
    QCOMPARE(calc->sub(a,b), 5);
}

void TestArithmetic::test_mult()
{
    int a = 9, b = 4;
    QCOMPARE(calc->mult(a,b), 36);
}

void TestArithmetic::test_div()
{
    int a = 9, b = 4;
    QCOMPARE(calc->div(a,b), 2);
}

void TestArithmetic::test_mod()
{
    int a = 9, b = 4;
    QCOMPARE(calc->mod(a,b), 1);
}

QTEST_APPLESS_MAIN(TestArithmetic)

#include "tst_testarithmetic.moc"
