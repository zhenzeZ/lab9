#include "Vector3.h"

Vector3::Vector3() :
	x(0),
	y(0),
	z(0)
{
	pi = cos(-1);
}

/// convert vector3 to srting
std::string Vector3::toString() const
{
	std::ostringstream ss;
	ss << "( " << x << ", " << y << ", " << z << " )";
	return std::string(ss.str());
}

/// get vector3
Vector3::Vector3(float x1, float y1, float z1) 
{
	x = x1;
	y = y1;
	z = z1;
}

Vector3::Vector3(Vector3 &V) 
{
	x = V.x;
	y = V.y;
	z = V.z;
}

double Vector3::getX() const
{
	return x;
}

double Vector3::getY() const
{
	return y;
}

double Vector3::getZ() const
{
	return z;
}

float Vector3::Length() const 
{
	return sqrt((x * x) + (y * y) + (z * z));
}

float Vector3::LengthSquared() const
{
	return (x * x) + (y * y) + (z * z);
}

bool Vector3::operator==(const Vector3& V) const
{
	if (this == &V)
		return true;

	if ((x == V.getX()) && (y == V.getY()) && (z == V.getZ()))
		return true;

	return false;
}

bool Vector3::operator!=(const Vector3& V) const
{
	return !(*this == V);
}


Vector3 Vector3::operator+(const Vector3& V) const
{
	return Vector3(x, y, z) = Vector3(x, y, z) + V;
}



Vector3 Vector3::operator-(const Vector3& V) const
{
	return Vector3(x, y, z) = Vector3(x, y, z) - V;
}



float Vector3::operator*(const Vector3& V) const
{
	return x * V.getX() + y * V.getY() + z * V.getZ();
}


Vector3 Vector3::operator*(float value) const
{
	return Vector3(x, y, z) = Vector3(x, y, z) * value;
}

double Vector3::DotProduct(Vector3 v2) 
{
	double dotProd = ((x * v2.x) + (y * v2.y) + (z * v2.z));
	return dotProd;
}

double Vector3::Component(Vector3 v2) 
{
	double dotProd = DotProduct(v2);
	double lenghtB = v2.Length();

	double component = (dotProd / (lenghtB * lenghtB));

	return component;
}

double Vector3::AngleBetween(Vector3 v2) 
{
	double lengthA = Length();
	double lengthB = v2.Length();
	double dotProd = DotProduct(v2);

	double angle = std::acos(dotProd / (lengthA * lengthB));
	double angleInDeg = angle * 180 / pi;
	return angleInDeg;
}

double Vector3::Length() 
{
	return std::sqrt((x*x) + (y*y) + (z*z));
}

Vector3 Vector3::CrossProduct(Vector3 v2) 
{
	return Vector3((y * v2.z) - (z * v2.y), (z * v2.x) - (x * v2.z), (x * v2.y) - (y * v2.x));

}

Vector3 Vector3::Unit() 
{
	double magnitude = (double)Length();
	return Vector3((float)(x / magnitude), (float)(y / magnitude), (float)(z / magnitude));

}

Vector3 Vector3::ParralelComponent(Vector3 v2) 
{
	double scalar = Component(v2);
	return Vector3((float)(x * scalar), (float)(y * scalar), (float)(z * scalar));
}

Vector3 Vector3::PerpendicularComponent(Vector3 v2) 
{
	double component = Component(v2);

	return Vector3((float)(v2.x - (component * x)), (float)(v2.y - (component * y)), (float)(v2.z - (component * z)));

}

Vector3 Vector3::Scale(double scale) 
{
	return Scale((float)scale);
}

Vector3 Vector3::Scale(float scale) 
{
	return Vector3((x * scale), (y * scale), (z * scale));
}

Vector3 Vector3::FlipX() 
{
	return Vector3(-x, y, z);
}

Vector3 Vector3::FlipY() 
{
	return Vector3(x, -y, z);
}

std::string Vector3::ToString()
{

	return "(" + std::to_string(x) + "," + std::to_string(y) + "," + std::to_string(z) + ")";
}
