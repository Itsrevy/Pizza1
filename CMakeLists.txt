cmake_minimum_required(VERSION 3.10)
project(PizzaProject)

# Установка стандарта C++ (можно изменить на нужный вам)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Добавляем исполняемый файл
add_executable(pizza pizza.cpp)

# Если есть дополнительные исходные файлы в директории pizza
if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/pizza")
    file(GLOB PIZZA_SOURCES "pizza/*.cpp" "pizza/*.h")
    target_sources(pizza PRIVATE ${PIZZA_SOURCES})
endif()

# Настройки для установки (опционально)
install(TARGETS pizza DESTINATION bin)