#include <iostream>

int main()
{
    // Вычисление первых пяти чисел Фибоначчи
    double f1 = 0.0;
    double f2 = 1.0;
    double f3 = f1 + f2;
    double f4 = f2 + f3;
    double f5 = f3 + f4;

    // Вывод чисел в консоль
    std::cout<<"Fibonacchi number 1: "<<f1<<std::endl;
    std::cout<<"Fibonacchi number 2: "<<f2<<std::endl;
    std::cout<<"Fibonacchi number 3: "<<f3<<std::endl;
    std::cout<<"Fibonacchi number 4: "<<f4<<std::endl;
    std::cout<<"Fibonacchi number 5: "<<f5<<std::endl;

}