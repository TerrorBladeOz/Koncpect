#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "\tОсновные плюсы указателей\n";
    cout << "1) Массивы реализованы с помощью указателей. Указатели могут использоваться для итерации по массиву.\n";
    cout << "2) Они являются единственным способом динамического выделения памяти в C++.\n";
    cout << "3) Они могут использоваться для передачи большого количества данных в функцию без копирования этих данных.\n";
    cout << "4) Они могут использоваться для передачи одной функции в качестве параметра другой функции.\n";
    cout << "5) Они используются для достижения полиморфизма при работе с наследованием.\n";
    cout << "6) Они могут использоваться для представления одной структуры/класса в другой структуре/классе, формируя, таким образом, целые цепочки.\n";

    cout << "Задание №1 \n";
    /*
    Какие значения мы получим в результате выполнения следующей программы 
    (предположим, что это 32-битное устройство, и тип short занимает 2 байта):
    
    short value = 7; // &value = 0012FF60.
    short otherValue = 3; // &otherValue = 0012FF54.

    short* ptr = &value; 

    std::cout << &value << '\n'; Ответ: 0012FF60.
    std::cout << value << '\n'; Ответ: 7.
    std::cout << ptr << '\n'; Ответ: 0012FF60.
    std::cout << *ptr << '\n'; Ответ: 7.
    std::cout << '\n';

    *ptr = 9;

    std::cout << &value << '\n'; Ответ: 0012FF60.
    std::cout << value << '\n'; Ответ: 9.
    std::cout << ptr << '\n'; Ответ: 0012FF60.
    std::cout << *ptr << '\n'; Ответ: 9.
    std::cout << '\n';

    ptr = &otherValue;

    std::cout << &otherValue << '\n'; Ответ: 0012FF54.
    std::cout << otherValue << '\n'; Ответ: 3.
    std::cout << ptr << '\n'; Ответ: 0012FF54.
    std::cout << *ptr << '\n'; Ответ: 3.
    std::cout << '\n';

    std::cout << sizeof(ptr) << '\n'; Ответ: 4, так как на все 32 бита, то есть 4 байта.
    std::cout << sizeof(*ptr) << '\n'; Ответ: 2, так как тип шорт занимает 2 байта, то есть 16 бит.*/ 
    // ПРОВЕРКА
    short value = 7; 
    short otherValue = 3; 

    short* ptr = &value;

    std::cout << &value << '\n';
    std::cout << value << '\n';
    std::cout << ptr << '\n';
    std::cout << *ptr << '\n';
    std::cout << '\n';

    *ptr = 9;

    std::cout << &value << '\n';
    std::cout << value << '\n';
    std::cout << ptr << '\n';
    std::cout << *ptr << '\n';
    std::cout << '\n';

    ptr = &otherValue;

    std::cout << &otherValue << '\n';
    std::cout << otherValue << '\n';
    std::cout << ptr << '\n';
    std::cout << *ptr << '\n';
    std::cout << '\n';

    std::cout << sizeof(ptr) << '\n';
    std::cout << sizeof(*ptr) << '\n';


}

