cmake_minimum_required(VERSION 3.29)
project(Injection_Dependency)

set(CMAKE_CXX_STANDARD 20)

# Define o caminho do Boost
set(BOOST_ROOT "C:/Users/Silva/Downloads/boost_1_86_0/boost_1_86_0")
set(BOOST_INCLUDEDIR "${BOOST_ROOT}/include")

# Encontra o Boost
find_package(Boost 1.86 REQUIRED )

include_directories(${Boost_INCLUDE_DIRS})

add_executable(Injection_Dependency main.cpp
        Service/IEngine.h
        Receptor/HyperCar.h
        Receptor/HyperCar.cpp
        Concret-Service/PetrolEngine.h
        Concret-Service/EletricEngine.h)

target_link_libraries(Injection_Dependency ${Boost_LIBRARIES})