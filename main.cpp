#include <iostream>
#include <bitset>

int solution(int a) {
    int reversed = 0;
    
    while (a != 0) {
        reversed <<= 1;
        if (a & 1)
            reversed |= 1;
        a >>= 1;
    }
    
    return reversed;
}

int main() {
    int a;
    std::cout << "Enter an integer: ";
    std::cin >> a;
    
    int reversed = solution(a);
    
    std::cout << "Reversed Binary: " << std::bitset<32>(reversed) << std::endl;
    std::cout << "Reversed Integer: " << reversed << std::endl;
    
    return 0;
}
