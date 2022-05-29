CC = g++
CFLAGS = -g -Wall -std=c++11

two_sum: two_sum.cpp
	$(CC) $(CFLAGS) $^ -o $@