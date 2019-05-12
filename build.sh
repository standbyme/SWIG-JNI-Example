swig -c++ -java example.i
g++ -c -fpic example.cpp example_wrap.cxx -I/usr/local/include -I/home/standbyme/Downloads/.jdk-8u201-linux-x64/jdk1.8.0_201/include -I/home/standbyme/Downloads/.jdk-8u201-linux-x64/jdk1.8.0_201/include/linux/
g++ -fPIC -c example.cpp
g++ -shared example.o example_wrap.o -o libexample.so
javac *.java
java StandbyMe