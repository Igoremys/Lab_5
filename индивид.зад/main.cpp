#include <iostream>
#include <string>
#include "binary_tree.h" // Подключаем заголовочный файл с классом BinaryTree

int main() {
    BinaryTree<int> intTree; // Создаем объект BinaryTree для сортировки целых чисел
    BinaryTree<std::string> stringTree; // Создаем объект BinaryTree для сортировки строк

    int intValue;
    std::string stringValue;

    // Вводим целые числа с клавиатуры, -1 будет сигналом для завершения ввода
    std::cout << "Введите целые числа (-1 для завершения): ";
    while (std::cin >> intValue && intValue != -1) {
        intTree.insert(intValue); // Вставляем значение в дерево
    }

    // Вводим строки с клавиатуры, пустая строка будет сигналом для завершения ввода
    std::cin.ignore(); // Очищаем буфер ввода
    std::cout << "Введите строки (пустая строка для завершения): ";
    while (std::getline(std::cin, stringValue) && !stringValue.empty()) {
        stringTree.insert(stringValue); // Вставляем строку в дерево
    }

    // Выводим отсортированные значения
    std::cout << "Отсортированные целые числа: ";
    intTree.printInOrderTraversal();
    
    std::cout << "Отсортированные строки: ";
    stringTree.printInOrderTraversal();

    return 0;
}
