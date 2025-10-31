#include "physics.h"

physicBody::physicBody(const Vec3d& pos,
                       const Vec3d& vel,
                       double mas) 
                       : transform(pos), velocity(vel), mass(mas) {};

const Vec3d& physicBody::getTransform() const {
    return transform;
}
const Vec3d& physicBody::getVelocity() const {
    return velocity;
}
double physicBody::getMass() const {
    return mass;
}

void physicBody::setTransform(const Vec3d& temp) {
    transform = temp;
}
void physicBody::setVelocity(const Vec3d& temp) {
    velocity = temp;
}
void physicBody::setMass(double temp) {
    mass = temp;
}

void physicBody::addVelocity(const Vec3d& temp) {
    velocity += temp;
} // velocity = velocity + temp
void physicBody::addForce(const Vec3d& temp, double force) {
    // F = m * a, because a = F / m
    Vec3d totalForce = temp.Normalized() * force;
    Vec3d acceleration = totalForce / mass;
    velocity += acceleration;
} // velocity = velocity + temp * force

void physicBody::applyFriction(double coef) {
  // need to do  
} 

void physicBody::update(double deltaTime) {
    transform += velocity;
} // Like in unity