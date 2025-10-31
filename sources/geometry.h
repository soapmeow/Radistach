#ifndef geometry_H
#define geometry_H


class Vec2d {
public:
    double x, y;
	
	double Distance(const Vec2d& temp) const;
	
    Vec2d(double x, double y);
	
	Vec2d Normalized();
	Vec2d& operator=(const Vec2d& temp);          // Vector = Vector_temp
	Vec2d& operator+=(const Vec2d& temp);         // Vector += Vector_temp
	Vec2d& operator-=(const Vec2d& temp);         // Vector -= Vector_temp
    Vec2d operator+(const Vec2d& temp)    const;  // Vector + Vector_temp
    Vec2d operator-(const Vec2d& temp)    const;  // Vector - Vector_temp
    Vec2d operator*(const Vec2d& temp)    const;  // Vector * Vector_temp
    Vec2d operator*(const double& scalar) const;  // Vector * scalar
    Vec2d operator/(const Vec2d& temp)    const;  // Vector / Vector_temp
    Vec2d operator/(const double& scalar) const;  // Vector / scalar
};

class Vec3d {
public:
    double x, y, z;

	double Distance(const Vec3d& temp) const;

    Vec3d(double x, double y, double z);
	
	Vec3d Normalized();
	Vec3d& operator=(const Vec3d& temp);          // Vector = Vector_temp
	Vec3d& operator+=(const Vec3d& temp);         // Vector += Vector_temp
	Vec3d& operator-=(const Vec3d& temp);         // Vector -= Vector_temp
    Vec3d operator+(const Vec3d& temp)    const;  // Vector + Vector_temp
    Vec3d operator-(const Vec3d& temp)    const;  // Vector - Vector_temp
    Vec3d operator*(const Vec3d& temp) 	  const;  // Vector * Vector_temp
    Vec3d operator*(const double& scalar) const;  // Vector * scalar
    Vec3d operator/(const Vec3d& temp)    const;  // Vector / Vector_temp
    Vec3d operator/(const double& scalar) const;  // Vector / scalar
};

#endif // geometry_h