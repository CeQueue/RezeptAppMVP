cmake_minimum_required(VERSION 3.22)
project(hellondk)

# Bibliothek aus unserer C++-Datei bauen
add_library(hellondk SHARED native-lib.cpp)

# Android Log-Bibliothek finden (optional nützlich)
find_library(log-lib log)

# Linken
target_link_libraries(hellondk ${log-lib})
