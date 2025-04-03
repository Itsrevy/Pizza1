# Используем официальный образ с GCC
FROM gcc:12.2.0

# Устанавливаем CMake и другие зависимости
RUN apt-get update && \
    apt-get install -y cmake && \
    rm -rf /var/lib/apt/lists/*

# Создаем рабочую директорию
WORKDIR /app

# Копируем все необходимые файлы
COPY CMakeLists.txt .
COPY pizza.cpp .
COPY pizza .

# Создаем директорию для сборки
RUN mkdir build && cd build && \
    cmake .. && \
    make

# Команда для запуска
CMD ["./build/pizza"]