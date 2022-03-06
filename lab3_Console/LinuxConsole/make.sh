#!/bin/bash

echo "build numlib"
g++ -c -o Number/Number.o Number/Number.cpp -fPIC
ar rvs Number/libNumber.a Number/Number.o 

echo "build veclib"
g++ -c -o Vector/Vector.o -INumber/ Vector/Vector.cpp -fPIC
g++ -shared -o Vector/libVector.so Vector/Vector.o Number/libNumber.a -fPIC

echo "build testlib"
g++ -o main  TestApp/main.cpp -INumber -IVector Number/libNumber.a  Vector/libVector.so

./main

echo
echo "clean numlib"
rm Number/Number.o
rm Number/libNumber.a

echo "clean veclib"
rm Vector/libVector.so
rm Vector/Vector.o

echo "clean testlib"
rm main
