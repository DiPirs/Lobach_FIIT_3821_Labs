cmake_minimum_required(VERSION 2.8) #Проверка версии CMake.

set(PROJECT_NAME Stack) #Создаем обычную локальную переменную с именем проекта
project(${PROJECT_NAME}) # Название проекта

#set(stack stack) #Переменная с именем приложения
set(stacklib lib_stack) #Переменная с именем библиотеки
set(sample main)
set(testlib lib_gtests)
set(test tests)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE) #Создается переменная CMAKE_CONFIGURATION_TYPES со значением "Debug;Release" и меткой/разделом Configs, переменная сохраниется в специальном файле доступном из всех файлов,
if(NOT CMAKE_BUILD_TYPE) # проверка имеющихся у компилятора вариантов сборки
  set(CMAKE_BUILD_TYPE Release) #Если нет то устанавливаем Release
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib_gtests)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/lib_stack) #Добавляем директорию "${CMAKE_CURRENT_SOURCE_DIR}/vectorlib" в дополняемые каталоги включаемых файлов
#${CMAKE_CURRENT_SOURCE_DIR} - стандартная переменная с адресом рабочей директории

#add_subdirectory(Vector) #Добавляем директорию с под-CMakeList-ом, и выполняем под-CMakeList
add_subdirectory(lib_stack)
add_subdirectory(lib_gtests)
#add_subdirectory(stack)
add_subdirectory(main)
add_subdirectory(tests)


#file(GLOB hdrs "*.h*") #Добавляем в переменную hdrs все файлы с расширением .h
#file(GLOB srcs "*.cpp") #Добавляем в переменную srcs все файлы с расширением .cpp

#include_directories(lib1)
#add_executable(${PROJECT_NAME} ${srcs} ${hdrs}) #Создаем проект с именем из переменной ${PROJECT_NAME}, в него добавляются файлы из переменных ${srcs} и ${hdrs}

#add_library(${vectorlib} STATIC ${srcs} ${hdrs}) #Создаем статическую библиотеку с именем из переменной ${MyLib1}, объявленной в родительском CMake файле (локальные переменные переносятся в наследников), в неё добавляются файлы из переменных ${srcs} и ${hdrs}


 #Собираем проект в поддиректории lib1
#target_link_libraries(${PROJECT_NAME} ${MyLib1}) #Подключаем к проекту с именем ${PROJECT_NAME} библиотеку с именем ${MyLib1}