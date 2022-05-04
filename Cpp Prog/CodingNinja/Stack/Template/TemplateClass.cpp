/*
    What are templates?
    Templates are very powerful feature of CPP where we define the type of the
    data members of the class while we create the Objects of the class.
    Syntax: 
        template<typename T>
        template<typename T, typename V>


*/
template<typename T>

class Pair {
    private:
        T x;
        T y;
    public: 
        void setX(T x) {
            this -> x = x;
        }
        T getX() {
            return x;
        }
        void setY(T y) {
            this->y = y;
        }
        T getY() {
            return y;
        }
};