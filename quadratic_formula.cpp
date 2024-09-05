#include <iostream>

int main(int argc, char** argv){
	float a, b, c;

	float results[] = {0, 0};

	std::cout << "what's the value of a?" << std::endl;
	std::cin >> a;

	std::cout << "what's the value of b?" << std::endl;
	std::cin >> b;

	std::cout << "what's the value of c?" << std::endl;
	std::cin >> c;

	std::cout << "step 0" << std::endl;
	std::cout << "-b ±√((b^2) * 4*a*c)" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "         2a         " << std::endl;
	std::cout << std::endl;

	std::cout << "step 1" << std::endl;
	std::cout << "  " << -b << "±√((" << b << "^2) + -4*" << a << "*" << c << ")" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "         " << 2*a << "         " << std::endl;
	std::cout << std::endl;

	std::cout << "step 2" << std::endl;
	std::cout << "  " << -b << "±√(" << b*b << " + " << -4*a*c << ")" << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "         " << 2*a << "         " << std::endl;
	std::cout << std::endl;

	std::cout << "step 3" << std::endl;
	std::cout << "     " << -b << "±√" << ((b*b) + (-4*a*c)) << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "         " << 2*a << "         " << std::endl;
	std::cout << std::endl;

	std::cout << "step 4" << std::endl;
	std::cout << "     " << -b << "±" << std::sqrt((b*b) + (-4*a*c)) << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "         " << 2*a << "         " << std::endl;
	std::cout << std::endl;

	//positive version
	std::cout << "step 5.p" << std::endl;
	std::cout << "     " << -b << "±" << std::sqrt((b*b) + (-4*a*c)) << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "         " << 2*a << "         " << std::endl;
	std::cout << std::endl;

	std::cout << "step 6.p" << std::endl;
	std::cout << "     " << -b + std::sqrt((b*b) + (-4*a*c)) << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "         " << 2*a << "         " << std::endl;
	std::cout << std::endl;

	// std::cout << "step 4.p, result: ";
	// std::cout <<  (-b + std::sqrt((b*b) + (-4*a*c))) / 2*a << std::endl;
	// std::cout << std::endl;

	results[0] = (-b + std::sqrt((b*b) + (-4*a*c))) / (2*a);
	
	//negative version
	std::cout << "step 5.m" << std::endl;
	std::cout << "    " << -b << "±" << std::sqrt((b*b) + (-4*a*c)) << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "         " << 2*a << "         " << std::endl;
	std::cout << std::endl;

	std::cout << "step 6.m" << std::endl;
	std::cout << "    " << -b - std::sqrt((b*b) + (-4*a*c)) << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "         " << 2*a << "         " << std::endl;
	std::cout << std::endl;

	// std::cout << "step 6.m, result: ";
	// std::cout <<  (-b - std::sqrt((b*b) + (-4*a*c))) / 2*a << std::endl;
	// std::cout << std::endl;

	results[1] = (-b - std::sqrt((b*b) + (-4*a*c))) / (2*a);

	std::cout << "result with add: " << results[0] << " result with minus: " << results[1] << std::endl;
}
