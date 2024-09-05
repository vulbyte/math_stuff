#include <iostream>
#include <string>

int main(int argc, char** argv){
    
    int a;

    //read num
    if(argc < 2){
        //std::string s;
        std::cout << "what is the first number?";
        std::cin >> a;
        //std::cout << "the 2nd?";
        //std::cin >> b;
    }
    else {
        a = std::stoi(argv[1]);
    }

    std::cout << a << " * " << 1 << std::endl;
    //if 2nd argument of h exists, skip numbers once a/i < a/2
    if(argv[2] == "h"){
        for(int i = a/2; i > 0; --i){
            if (std::floor(a%i) == 0) {
                std::cout << i << " * " << a/i << std::endl;
            }
        }
    }
    else{
        for(int i = a/2; i > 0; --i){
            if (i < a/i){
                break;
            }
            if (std::floor(a%i) == 0) {
                std::cout << i << " * " << a/i << std::endl;
            }
        }
    }

    // cheat the first one for ease


    return 0;
}
