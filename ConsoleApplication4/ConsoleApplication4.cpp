// ConsoleApplication4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

class Fraction
{
private:
    int numerator;
    int denominator;
public:
    void SetNumerator(int n)
    {
        numerator = n;
    }
    int GetNumerator()
    {
        return numerator;
    }
    void SetDenominator(int d)
    {
        if (d != 0)
            denominator = d;
    }
    int GetDenominator()
    {
        return denominator;
    }
    void Show()
    {
        cout << "[" << numerator << "/" << denominator<<"]";
    }
    Fraction()
    {
        numerator = 0;
        denominator = 1;
    }
    Fraction(int numerator, int denominator):numerator{ numerator }
    {
       
        if (denominator != 0)
            this->denominator = denominator;
    }
};

int main()
{
    Fraction fodj(2,3);
    //fodj.SetNumerator(2);
    //fodj.SetDenominator(3);
    
    fodj.Show();

    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
