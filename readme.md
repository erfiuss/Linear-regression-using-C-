# Linear Regression
In this project we calculate the formula `Y = aX + b`, it helps predict a continuous outcome based on input features by finding the best-fitting straight line (or hyperplane in multiple dimensions). Enter the `X` value till the end, then enter the `Y` value. The output will give you the `a` and `b`.
### Example:
### Input
```
(X,Y)
(1,2)
(4,2)
(3,3)
(3,4)
(4,5)
(4,7)
(5,6)
(6,4)
```
 ### Output
 ```
 a = 0.59
 b = 1.88
 ```
 ### How to play
 - Open Folder
 - Open file (CMakeLists.txt)
 - Copy this in CMake
 ```
 cmake_minimum_required(VERSION 3.10 FATAL_ERROR)
project (a)
add_executable (a main.cpp)
set_property(TARGET a PROPERTY CXX_STANDARD 17)
```
- Open file (main.cpp)
- Open Folder (build)
 ___
 - 1. New terminal
 - 2. mkdir build
 - 3. cd build
 - 4. cmake ..
 - 5. make
 - 6. ./project name
 - 7. cin
 ### Enjoy!
 