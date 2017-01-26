#pragma once
#include "Vector3.h"
#include <string>
#include <sstream>

class Matrix3 {
private:
	float A11;
	float A12;
	float A13;
	float A21;
	float A22;
	float A23;
	float A31;
	float A32;
	float A33;

	double pi;
public:

	Matrix3();
	Matrix3(float _A11, float _A12, float _A13,
		float _A21, float _A22, float _A23,
		float _A31, float _A32, float _A33);
	Matrix3(Vector3 Row1, Vector3 Row2, Vector3 Row3);

	std::string toString() const;

	float GetM11() const;
	float GetM12() const;
	float GetM13() const;
	float GetM21() const;
	float GetM22() const;
	float GetM23() const;
	float GetM31() const;
	float GetM32() const;
	float GetM33() const;


};
