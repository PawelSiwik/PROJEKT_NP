
cmake_minimum_required(VERSION 3.8)
project(PROJEKT_NP)

set(CMAKE_CXX_STANDARD 14)


include_directories(receipt_at_the_restaurant_code)

add_executable(PROJEKT_NP
     receipt_at_the_restaurant_code/receipt_at_the_restaurant_code/dishesList.cpp
       receipt_at_the_restaurant_code/receipt_at_the_restaurant_code/dishesList.h
       receipt_at_the_restaurant_code/receipt_at_the_restaurant_code/ordersMid.cpp
       receipt_at_the_restaurant_code/receipt_at_the_restaurant_code/ordersMid.h
       receipt_at_the_restaurant_code/receipt_at_the_restaurant_code/receipt_at_the_restaurant_code.cpp
       receipt_at_the_restaurant_code/receipt_at_the_restaurant_code/receipt_at_the_restaurant_code.vcxproj
       receipt_at_the_restaurant_code/receipt_at_the_restaurant_code/receipt_at_the_restaurant_code.vcxproj.filters
       receipt_at_the_restaurant_code/receipt_at_the_restaurant_code/receipt_at_the_restaurant_code.vcxproj.user)
