#include "geometry.h"
#include <cmath>

// Vectors!
// Vector2 start

Vec2d::Vec2d(double x, double y) : x(x), y(y) {};

double Vec2d::Distance(const Vec2d& temp){
	return sqrt(pow(temp.x-x,2)+pow(temp.y-y,2));
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
    return Vec2d(x / temp.x, y / temp.y);
}

// Vectors scalar division. Vector / scalar
Vec2d Vec2d::operator/(const double& scalar) const {
    return Vec2d(x / scalar, y / scalar);
}
// Vector 2 end
// 
// ----------------------------------------------------------------------------------------------
// 
// Vector 3 start
Vec3d::Vec3d(double x, double y, double z) : x(x), y(y), z(z) {};

double Vec3d::Distance(const Vec3d& temp){
	return sqrt(pow(temp.x-x,2)+pow(temp.y-y,2)+pow(temp.z-z,2));
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
    return Vec3d(x / temp.x, y / temp.y, z / temp.z);
}

// Vectors scalar division. Vector / scalar
Vec3d Vec3d::operator/(const double& scalar) const {
    return Vec3d(x / scalar, y / scalar, z / scalar);
}

// Vector 3 end;
