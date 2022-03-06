echo "build numlib"
g++ -c -o Number/Number.o Number/Number.cpp 
ar rvs Number/libNumber.lib Number/Number.o 

echo "build veclib"
g++ -c -o Vector/Vector.o -INumber/ Vector/Vector.cpp 
g++ -shared -o Vector/libVector.dll Vector/Vector.o Number/libNumber.lib 

echo "build testlib"
g++ -o main.exe  TestApp/main.cpp -INumber -IVector Number/libNumber.lib  Vector/libVector.dll 

./main.exe

echo "clean numlib"
rm Number/Number.o
rm Number/libNumber.lib

echo "clean veclib"
rm Vector/libVector.dll
rm Vector/Vector.o

echo "clean testlib"
rm main.exe
