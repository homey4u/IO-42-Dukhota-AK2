# Вказуємо мінімальну версію CMake
cmake_minimum_required(VERSION 3.10)

# Назва нашого проекту
project(CalculatorApp)

# Створюємо статичну бібліотеку 'calculator' з файлу calculator.cpp
add_library(calculator STATIC calculator.cpp)

# Створюємо виконуваний файл 'calculator_app' з файлу main.cpp
add_executable(calculator_app main.cpp)

# Лінкуємо (з'єднуємо) нашу бібліотеку з виконуваним файлом
target_link_libraries(calculator_app calculator)
