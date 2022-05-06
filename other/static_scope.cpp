#include <iostream>


int count_static(){
    static int val = 0;
    val++;
    return val;
}


int main(){
    for(int i = 0; i < 11; i++){
        std::cout << count_static() << std::endl;

    }
}
