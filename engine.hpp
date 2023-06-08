#include <iostream>
#include <math.h>

const double dt = 0.1; // Time step
const double g = 9.81;

struct Vector2D
{
    double x;
    double y;

    Vector2D(double x = 0.0, double y = 0.0)
    {
        this->x = x;
        this->y = y;
    }
};

// initialize constructors
Vector2D position(0.0, 100.0);
Vector2D velocity(0.0, 0.0);

double updatePosition()
{
    // verlet?
    velocity.y += g * dt;
    position.y += velocity.y * dt;

    return position.y;
}
