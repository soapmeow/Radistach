#ifndef Vector_H
#define Vector_H

class Vector2d {
public:
    double x, y;
    Vector2d(double x, double y);
    Vector2d operator+(const Vector2d& temp) const;  // Vector + Vector_temp
    Vector2d operator-(const Vector2d& temp) const;  // Vector - Vector_temp
    Vector2d operator*(const Vector2d& temp) const;  // Vector * Vector_temp
    Vector2d operator*(const double& scalar) const;  // Vector * scalar
    Vector2d operator/(const Vector2d& temp) const;  // Vector / Vector_temp
    Vector2d operator/(const double& scalar) const;  // Vector / scalar
};

class Vector3d {
public:
    double x, y, z;
    Vector3d(double x, double y, double z);
    Vector3d operator+(const Vector3d& temp) const;  // Vector + Vector_temp
    Vector3d operator-(const Vector3d& temp) const;  // Vector - Vector_temp
    Vector3d operator*(const Vector3d& temp) const;  // Vector * Vector_temp
    Vector3d operator*(const double& scalar) const;  // Vector * scalar
    Vector3d operator/(const Vector3d& temp) const;  // Vector / Vector_temp
    Vector3d operator/(const double& scalar) const;  // Vector / scalar
};

#endif Vector_H