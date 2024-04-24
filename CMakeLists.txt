cmake_minimum_required(VERSION 3.29) # Версия CMake
# Название проекта, номер версии, описание, язык програмирования
project(
    fib 
    VERSION 0.0.0
    DESCRIPTION "Five fib numbers"
    LANGUAGES CXX
)
set(CMAKE_CXX_STANDART 17) # Требуемый стадарт языка
set(CMAKE_CXX_STANDART_REQUIRED ON) # Проверка поддержки стандарта компилятором

set(CMAKE_BUILD_TYPE Debug) # Конфигурация сборки - Debug

add_executable(fib)  #Код будет компилироваться в исполняемый файл с названием lesson3.exe


set(sources # Список файлов исходного кода
    main.cpp
)

target_sources(fib PRIVATE ${sources}) # Исполняемый файл будет компилироваться из файлов исходного кода
