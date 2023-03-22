#include <iostream>

bool accept(){
    int tries = 1;
    while (tries < 4) {

        std::cout << "Do you want to proceed (y or n)?\n";
        char answer = 0;
        std::cin >> answer;
        
        switch (answer) {
            case 'y':
                return true;        
            case 'n':
                return false;
            default:
                std::cout << "Sorry, I don't understand";
                ++tries;
        }
    }
    std::cout << "I'll take that for a no\n";
    return false;
}

struct Vector {
    int sz; // number of elements
    double* elem; // pointer to elements
};

void init_vector(Vector& v, int s) {
    v.elem = new double[s]; //allocate an array of s doubles
    v.sz = s;
}

int main(int argc, char *argv[])
{

    int i = 0;
    int* pi = &i;
    std::cout << *pi << std::endl;

    accept();
    
}

