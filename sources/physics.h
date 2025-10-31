#ifndef physics_H
#define physics_H

#include "geometry.h"

class physicBody {
private:
    Vec3d transform;
    Vec3d velocity;

    double mass;
public:
    physicBody(const Vec3d& pos = Vec3d(0,0,0),
               const Vec3d& vel = Vec3d(0,0,0),
               double mas = 1.0);

    const Vec3d& getTransform() const;
    const Vec3d& getVelocity() const;
    double getMass() const;

    void setTransform(const Vec3d& temp);
    void setVelocity(const Vec3d& temp);
    void setMass(double temp);
    
    void addVelocity(const Vec3d& temp); // velocity = velocity + temp
    void addForce(const Vec3d& temp, double force); // velocity = velocity + temp * force

    void applyFriction(double coef); // Friction thing

    void update(double deltaTime); // Like in unity
};

#endif // physics_H