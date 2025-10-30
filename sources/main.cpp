#include <iostream>
#include "geometry.h"

void test(){ //new things
	Vec3d A3(1,2,3);
	Vec3d B3(1,2,3);
	
	Vec2d A2(1,2);
	Vec2d B2(2,1);
	
	std::cout << "\nInput first 3D vector: ";
	std::cin >> A3.x >> A3.y >> A3.z;
	
	std::cout << "\nInput second 3D vector: ";
	std::cin >> B3.x >> B3.y >> B3.z;
	
	std::cout << "\nInput first 2D vector: ";
	std::cin >> A2.x >> A2.y;
	
	std::cout << "\nInput second 2D vector: ";
	std::cin >> B2.x >> B2.y;
	
	std::cout << "Distance 3D: " << A3.Distance(B3) << std::endl;
	std::cout << "Distance 2D: " << A2.Distance(B2) << std::endl;
	std::cout << "Normalized 3D: " << A3.Normalized().x << std::endl;
	std::cout << "Normalized 3D: " << A2.Normalized().y << std::endl;
}

int main(int argc, char* argv[]){
	test();
	
	char temp;
	std::cin.get(temp);

	return EXIT_SUCCESS;
}