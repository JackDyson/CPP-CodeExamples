#pragma once

#include <iostream>
#include <random>
#include <chrono>
#include <thread>

using namespace std;

class pch
{
public:
	int RandomIntBetween(int lower, int upper);
	void delay(int);
	string inputLoopYN();//yes or no
	string inputLoopLRF();//directional input left right forward
	string inputLoopLR();//directional input left right
	string inputLoopAD();//attack or defend
};


