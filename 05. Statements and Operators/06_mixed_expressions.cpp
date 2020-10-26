/*

type Coersion: conversion of one operand to another data type

*/

#include <iostream>

using namespace std;

int main () {
	ios_base::sync_with_stdio (false);

	int total = 100, num = 8;
	double average;
	average = static_cast<double>(total) / num; // makes sure that it can be converted into double (new style)
	average = (double) total / num; // (old style)
	cout << average;

	return 0;	
}