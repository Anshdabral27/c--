#include <iostream>

class SwapNumbers {
private:
    int a; 
    int b; 

public:
    
    SwapNumbers(int x, int y) : a(x), b(y) {}

   
    void swap() {
        a = a + b; 
        b = a - b; 
        a = a - b; 
    }

   
    void display() const {
        std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;
    }
};

int main() {
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

 
    SwapNumbers swapNumbers(num1, num2);
    
   
    swapNumbers.swap();
    
   
    swapNumbers.display();

    return 0;
}
