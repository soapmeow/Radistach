#include "geometry.h"
#include <cmath>
#include <limits>

// Vectors!
// Vector2 start

Vec2d::Vec2d(double x, double y) : x(x), y(y) {};

double Vec2d::Distance(const Vec2d& temp) const{
	double dx = temp.x - x;
	double dy = temp.y - y;
	return sqrt(dx*dx + dy*dy);
}

// Vector = Vector_temp
Vec2d& Vec2d::operator=(const Vec2d& temp) {
	x = temp.x;
	y = temp.y;
	return *this;
}

// Vector += Vector_temp
Vec2d& Vec2d::operator+=(const Vec2d& temp) {
	x += temp.x;
	y += temp.y;
	return *this;
}

// Vector -= Vector_temp 
Vec2d& Vec2d::operator-=(const Vec2d& temp) {
	x -= temp.x;
	y -= temp.y;
	return *this;
}

Vec2d Vec2d::Normalized(){
	double length = sqrt(pow(x,2)+pow(y,2));
	return Vec2d(x / length, y / length);
}

// Vectors addition. Vector + Temp_Vector
Vec2d Vec2d::operator+(const Vec2d& temp) const {
    return Vec2d(x + temp.x, y + temp.y);
}

// Vectors subtraction. Vector - Temp_Vector
Vec2d Vec2d::operator-(const Vec2d& temp) const {
    return Vec2d(x - temp.x, y - temp.y);
}

// Vectors multiplication. Vector * Temp_Vector
Vec2d Vec2d::operator*(const Vec2d& temp) const {
    return Vec2d(x * temp.x, y * temp.y);
}

// Vectors scalar multiplication. Vector * scalar
Vec2d Vec2d::operator*(const double& scalar) const {
    return Vec2d(x * scalar, y * scalar);
}

// Vectors division. Vector * Temp_Vector
Vec2d Vec2d::operator/(const Vec2d& temp) const {
	// this lines makes more safety check
	if(std::abs(temp.x) <= std::numeric_limits<double>::epsilon() ||
	   std::abs(temp.y) <= std::numeric_limits<double>::epsilon()) {
		throw "fuck";
	}
    return Vec2d(x / temp.x, y / temp.y);
}

// Vectors scalar division. Vector / scalar
Vec2d Vec2d::operator/(const double& scalar) const {
    if (std::abs(scalar) < std::numeric_limits<double>::epsilon()) {
        throw "fuck";
    }
    return Vec2d(x / scalar, y / scalar);
}
// Vector 2 end
// 
// ----------------------------------------------------------------------------------------------
// 
// Vector 3 start
Vec3d::Vec3d(double x, double y, double z) : x(x), y(y), z(z) {};

double Vec3d::Distance(const Vec3d& temp) const{
	double dx = temp.x - x;
	double dy = temp.y - y;
	double dz = temp.z - z;
	return sqrt(dx*dx + dy*dy + dz*dz);
}

// Vector = Vector_temp
Vec3d& Vec3d::operator=(const Vec3d& temp) {
	x = temp.x;
	y = temp.y;
	z = temp.z;
	return *this;
}

// Vector += Vector_temp
Vec3d& Vec3d::operator+=(const Vec3d& temp) {
	x += temp.x;
	y += temp.y;
	z += temp.z;
	return *this;
}

// Vector -= Vector_temp 
Vec3d& Vec3d::operator-=(const Vec3d& temp) {
	x -= temp.x;
	y -= temp.y;
	z -= temp.z;
	return *this;
}

Vec3d Vec3d::Normalized(){
	double length = sqrt(x*x + y*y + z*z);
	return Vec3d(x / length, y / length, z / length);
}

// Vectors addition. Vector + Temp_Vector
Vec3d Vec3d::operator+(const Vec3d& temp) const {
    return Vec3d(x + temp.x, y + temp.y, z + temp.z);
}

// Vectors subtraction. Vector - Temp_Vector
Vec3d Vec3d::operator-(const Vec3d& temp) const {
    return Vec3d(x - temp.x, y - temp.y, z - temp.z);
}

// Vectors multiplication. Vector * Temp_Vector
Vec3d Vec3d::operator*(const Vec3d& temp) const {
    return Vec3d(x * temp.x, y * temp.y, z * temp.z);
}

// Vectors scalar multiplication. Vector * scalar
Vec3d Vec3d::operator*(const double& scalar) const {
    return Vec3d(x * scalar, y * scalar, z * scalar);
}

// Vectors division. Vector * Temp_Vector
Vec3d Vec3d::operator/(const Vec3d& temp) const {
    if(std::abs(temp.x) <= std::numeric_limits<double>::epsilon() ||
	   std::abs(temp.y) <= std::numeric_limits<double>::epsilon() ||
	   std::abs(temp.z) <= std::numeric_limits<double>::epsilon()) {
		throw "fuck";
	}
	return Vec3d(x / temp.x, y / temp.y, z / temp.z);
}

// Vectors scalar division. Vector / scalar
Vec3d Vec3d::operator/(const double& scalar) const {
    if (std::abs(scalar) < std::numeric_limits<double>::epsilon()) {
        throw "fuck";
    }
    return Vec3d(x / scalar, y / scalar, z / scalar);
}

// Vector 3 end;
