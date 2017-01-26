#pragma once
#include <string>
#include <sstream>
#include <math.h>

class Vector3 {
private:
	float x;
	float y;
	float z;

	double pi;
public:
	std::string toString() const;

	Vector3();
	Vector3(float x1, float y1, float z1);
	Vector3(Vector3 &V);

	double getX() const;
	double getY() const;
	double getZ() const;

	float Length() const;
	float LengthSquared() const;

	bool operator==(const Vector3& V) const;
	bool operator!=(const Vector3& V) const;
	Vector3 operator+(const Vector3& V) const;
	Vector3 operator-(const Vector3& V) const;
	float operator*(const Vector3& V) const;
	Vector3 operator*(float value) const;

	double DotProduct(Vector3 v2);
	double Component(Vector3 v2);
	double AngleBetween(Vector3 v2);
	double Length();

	Vector3 CrossProduct(Vector3 v2);
	Vector3 Unit();
	Vector3 ParralelComponent(Vector3 v2);
	Vector3 PerpendicularComponent(Vector3 v2);
	Vector3 Scale(double scale);
	Vector3 Scale(float scale);
	Vector3 FlipX();
	Vector3 FlipY();

	std::string ToString();
};