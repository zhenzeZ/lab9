#include "Matrix3.h"

Matrix3::Matrix3():
A11(0),
A12(0),
A13(0),
A21(0),
A22(0),
A23(0),
A31(0),
A32(0),
A33(0)
{
	pi = cos(-1);
}

Matrix3::Matrix3(float _A11, float _A12, float _A13,
	float _A21, float _A22, float _A23,
	float _A31, float _A32, float _A33)
{
	// to allow nine float values
	A11 = _A11;
	A12 = _A12;
	A13 = _A13;
	A21 = _A21;
	A22 = _A22;
	A23 = _A23;
	A31 = _A31;
	A32 = _A32;
	A33 = _A33;
}

Matrix3::Matrix3(Vector3 Row1, Vector3 Row2, Vector3 Row3)
{
	// To allow 3 rows of vectors to be declared as a matrix
	A11 = Row1.getX();
	A12 = Row1.getY();
	A13 = Row1.getZ();
	A21 = Row2.getX();
	A22 = Row2.getY();
	A23 = Row2.getZ();
	A31 = Row3.getX();
	A32 = Row3.getY();
	A33 = Row3.getZ();
}

std::string Matrix3::toString() const 
{
	std::ostringstream ss;
	ss << "( " << A11 << ", " << A12 << ", " << A13 << ", \n" 
		<< A21 << ", " << A22 << ", " << A23 << ", \n" 
		<< A31 << ", " << A32 << ", " << A33 << ", \n" <<" )";
	return std::string(ss.str());
}

float Matrix3::GetM11() const
{
	return A11;
}

float Matrix3::GetM12() const
{
	return A12;
}

float Matrix3::GetM13() const
{
	return A13;
}

float Matrix3::GetM21() const
{
	return A21;
}

float Matrix3::GetM22() const
{
	return A22;
}

float Matrix3::GetM23() const
{
	return A23;
}

float Matrix3::GetM31() const
{
	return A31;
}

float Matrix3::GetM32() const
{
	return A32;
}

float Matrix3::GetM33() const
{
	return A33;
}