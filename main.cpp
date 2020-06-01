#include <iostream>
#include "T3DVector3n.h"

using namespace std;

int main()
{
    T3DEngine::T3DVector3n vector1(7, 5, 1);
    T3DEngine::T3DVector3n vector2(1, 2, 1);

    T3DEngine::T3DVector3n vector3 = vector1;
    T3DEngine::T3DVector3n vector4(vector2);

    T3DEngine::T3DVector3n vector5 = vector1 + vector2;
    T3DEngine::T3DVector3n vector6 = vector3 - vector4;

    cout << "(" << vector3.x << ", " << vector3.y << ", " << vector3.z << ")" << endl;
    cout << "(" << vector4.x << ", " << vector4.y << ", " << vector4.z << ")" << endl;
    cout << "(" << vector5.x << ", " << vector5.y << ", " << vector5.z << ")" << endl;
    cout << "(" << vector6.x << ", " << vector6.y << ", " << vector6.z << ")" << endl;
}