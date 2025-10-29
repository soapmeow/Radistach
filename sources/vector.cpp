#include "vector.h"

Vector2d::Vector2d(double x, double y) : x(x), y(y) {};

// Vectors addition. Vector + Temp_Vector
Vector2d Vector2d::operator+(const Vector2d& temp) const {
    return Vector2d(x + temp.x, y + temp.y);
}

// Vectors subtraction. Vector - Temp_Vector
Vector2d Vector2d::operator-(const Vector2d& temp) const {
    return Vector2d(x - temp.x, y - temp.y);
}

// Vectors multiplication. Vector * Temp_Vector
Vector2d Vector2d::operator*(const Vector2d& temp) const {
    return Vector2d(x * temp.x, y * temp.y);
}

// Vectors scalar multiplication. Vector * scalar
Vector2d Vector2d::operator*(const double& scalar) const {
    return Vector2d(x * scalar, y * scalar);
}

// Vectors division. Vector * Temp_Vector
Vector2d Vector2d::operator/(const Vector2d& temp) const {
    return Vector2d(x / temp.x, y / temp.y);
}

// Vectors scalar division. Vector / scalar
Vector2d Vector2d::operator/(const double& scalar) const {
    return Vector2d(x / scalar, y / scalar);
}
// Vector 2 end
// 
// ----------------------------------------------------------------------------------------------
// 
// Vector 3 start
Vector3d::Vector3d(double x, double y, double z) : x(x), y(y), z(z) {};

// Vectors addition. Vector + Temp_Vector
Vector3d Vector3d::operator+(const Vector3d& temp) const {
    return Vector3d(x + temp.x, y + temp.y, z + temp.z);
}

// Vectors subtraction. Vector - Temp_Vector
Vector3d Vector3d::operator-(const Vector3d& temp) const {
    return Vector3d(x - temp.x, y - temp.y, z - temp.z);
}

// Vectors multiplication. Vector * Temp_Vector
Vector3d Vector3d::operator*(const Vector3d& temp) const {
    return Vector3d(x * temp.x, y * temp.y, z * temp.z);
}

// Vectors scalar multiplication. Vector * scalar
Vector3d Vector3d::operator*(const double& scalar) const {
    return Vector3d(x * scalar, y * scalar, z * scalar);
}

// Vectors division. Vector * Temp_Vector
Vector3d Vector3d::operator/(const Vector3d& temp) const {
    return Vector3d(x / temp.x, y / temp.y, z / temp.z);
}

// Vectors scalar division. Vector / scalar
Vector3d Vector3d::operator/(const double& scalar) const {
    return Vector3d(x / scalar, y / scalar, z / scalar);
}

// Vector 3 end;
