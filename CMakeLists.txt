cmake_minimum_required(VERSION 3.5) # Минимальная версия CMake
project(Lab4) # Имя проекта
find_package(OpenCV REQUIRED) # Поиск пакета OpenCV
add_executable(Lab4 main.cpp) # Создание исполняемого файла
target_link_libraries(Lab4 ${OpenCV_LIBS})