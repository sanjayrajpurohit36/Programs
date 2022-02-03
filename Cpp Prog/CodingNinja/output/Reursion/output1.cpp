/** What will be the output of the following code */

void print(int n){
    if(n < 0){
        return;
    }
    if(n == 0){
        cout << n << " ";
        return;
    }
    print(--n);
    cout << n << " ";
}

int main() {
    int num = 3;
    print(num);
}