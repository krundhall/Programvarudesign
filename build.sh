#!/bin/bash
g++ -std=c++20 -I include $(find src -name "*.cc") -o game
