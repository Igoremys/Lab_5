#include <iostream>
#include "BinaryTree.h"

int main() {
    setlocale(LC_ALL, "Rus");
    try {
        // Создание экземпляра BinaryTree для int, с B<int>
        BinaryTree<int, int> intTree;
        intTree.insert(5);
        intTree.insert(10);
        intTree.remove(5);
        std::cout << "Элемент 10 найден: " << std::boolalpha << intTree.search(10) << std::endl;
        std::cout << "Элемент 5 найден: " << std::boolalpha << intTree.search(5) << std::endl;

        // Создание экземпляра BinaryTree для double, с B<double>
        BinaryTree<double, double> doubleTree;
        doubleTree.insert(3.14);
        doubleTree.insert(6.28);
        std::cout << "Элемент 3.14 найден: " << std::boolalpha << doubleTree.search(3.14) << std::endl;

        // Создание экземпляра BinaryTree для std::string, с B<std::string>
        BinaryTree<std::string, std::string> stringTree;
        stringTree.insert("hello");
        stringTree.insert("world");
        std::cout << "Элемент 'hello' найден: " << std::boolalpha << stringTree.search("hello") << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Исключение: " << e.what() << std::endl;
    }

    return 0;
}
