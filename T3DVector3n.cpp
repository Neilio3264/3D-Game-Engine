#include "T3DVector3n.h"

namespace T3DEngine
{
    T3DVector3n::T3DVector3n(float uX, float uY, float uZ) : x(uX), y(uY), z(uZ) {};

    T3DVector3n::~T3DVector3n(){}


    T3DVector3n::T3DVector3n(const T3DVector3n& vector)
    {
        x = vector.x;
        y = vector.y;
        z = vector.z;
    }
    T3DVector3n T3DVector3n::operator=(const T3DVector3n& vector)
    {
        return T3DVector3n(vector.x, vector.y, vector.z);
    }
    
    
    T3DVector3n T3DVector3n::operator+(const T3DVector3n& vector)
    {
        return T3DVector3n(x+vector.x, y+vector.y, z+vector.z);
    }


    T3DVector3n T3DVector3n::operator-(const T3DVector3n& vector)
    {
        return T3DVector3n(x-vector.x, y-vector.y, z-vector.z);
    }
}
