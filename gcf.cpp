// TODO: copy code from "factors_of.out and have it be able to compare 2 outputs"

#include <iostream>
#include <string>

int main(){
    std::string s;
    int a, b;
    std::cout << "what is the first number?";
    std::cin >> a;
    std::cout << "the 2nd?";
    std::cin >> b;
    
    if (a > b) {
        std::swap(a, b);
    }

    for(int i = 1; i < b; ++i){
        if (std::floor(b%i) == 0) {
            std::cout << i << "< " << b/i;
        }
    }

    return 0;
}
