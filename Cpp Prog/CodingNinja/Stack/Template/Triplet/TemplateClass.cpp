/*
    Using the below class create a way to store the
    triplets means three values without creating any more
    data members
*/

template<typename T, typename V>

class Pair {
    private:
        T x;
        V y;

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
        void setY(V y) {
            this->y = y;
        }

        // getter for y
        V getY() {
            return y;
        }
};