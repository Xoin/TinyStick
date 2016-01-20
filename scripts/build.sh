rm ../src/*.o
rm ../bin/*.dll
cd ../src
i686-w64-mingw32-gcc -masm=intel -c -o TinyStick.o TinyStick.c
i686-w64-mingw32-gcc -masm=intel -c -o Main.o Main.c
i686-w64-mingw32-gcc -Os -o TinyStick.dll -s -shared TinyStick.o Main.o -Wl,--subsystem,windows
cd ../scripts
cp ../src/TinyStick.dll ../bin/TinyStick.dll
rm ../src/*.o
rm ../src/*.dll
