#!/bin/bash

g++ -c *.cpp
g++ *.o -o test -lsfml-graphics -lsfml-window -lsfml-system