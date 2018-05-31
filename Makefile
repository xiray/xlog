all:
	g++ -g -O3 -std=c++11 -pthread Logger.cc Test.cc -o test.exe
