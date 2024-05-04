#include <iostream>
class Singleton {
private:
    // Приватный конструктор
    Singleton() {
        // код конструктора
        std::cout << "constructor executed" << std::endl;
    }
public:
    // Метод для получения единственного экземпляра
    static Singleton getInstance() {
        //static Singleton instance;
        std::cout << "instance" << std::endl;
        return Singleton();
    }
};
int main()
{
    Singleton obj = Singleton::getInstance();
    return 0;
}