#ifndef T3DVECTOR3N_HPP
#define T3DVECTOR3N_HPP

namespace T3DEngine 
{
    class T3DVector3n
    {
        private:
            
        public:
            float x;
            float y;
            float z;

            //constructors
            T3DVector3n(float uX, float uY, float uZ);
            ~T3DVector3n();

            T3DVector3n(const T3DVector3n& vector);
            T3DVector3n operator=(const T3DVector3n& vector);

            T3DVector3n operator+(const T3DVector3n& vector);

            T3DVector3n operator-(const T3DVector3n& vector);
    };
}

#endif /* T3DVECTOR3N_HPP */