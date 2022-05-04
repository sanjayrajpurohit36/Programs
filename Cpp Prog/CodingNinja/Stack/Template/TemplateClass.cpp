/*
    What are templates?
    Templates are very powerful feature of CPP where we define the type of the
    data members of the class while we create the Objects of the class.
    Syntax: 
        template<typename T>
        template<typename T, typename V>


*/
template<typename T, typename V>

class Pair {
    private:
        T x;
        T y;
        V z;

    public:
        // setter for x
        void setX(T x) {
            this -> x = x;
        }
        // getter for x
        T getX() {
            return x;
        }

        // setter for y
        void setY(T y) {
            this->y = y;
        }
        // getter for y
        T getY() {
            return y;
        }
    
        // setter for Z
        void setZ(V z) {
            this->z = z;
        }
        // getter for Z
        V getZ() {
            return z;
        }
};