/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
 
class IDGenerator
{
private:
    static int s_nextID; // объявление статической переменной-члена
 
public:
     static int getNextID(); // объявление статического метода
};
 
// Определение статической переменной-члена находится вне тела класса. Обратите внимание, мы не используем здесь ключевое слово static.
// Начинаем генерировать ID с 1
int IDGenerator::s_nextID = 1;
 
// Определение статического метода находится вне тела класса. Обратите внимание, мы не используем здесь ключевое слово static
int IDGenerator::getNextID() { return s_nextID++; } 
 
int main()
{
    for (int count=0; count < 4; ++count)
        std::cout << "The next ID is: " << IDGenerator::getNextID() << '\n';
 
    return 0;
}