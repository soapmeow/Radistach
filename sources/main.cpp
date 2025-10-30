#include <iostream>
#include "geometry.h"

int main(int argc, char* argv[]){
	Vec3d pointA(0,0,0);
	Vec2d pointB(0,0);

	std::cout << "Enter 3d point!: ";
	std::cin >> pointA.x >> pointA.y >> pointA.z;
	std::cout << "success!\n";


	std::cout << "Enter 2d point!: ";
	std::cin >> pointB.x >> pointB.y;
	std::cout << "success!\n";
	
	std::cout << pointA.x << " " << pointA.y << " " << pointA.z << std::endl;
	std::cout << pointB.x << " " << pointB.y << std::endl;

	char temp;
	std::cin.get(temp);

	return EXIT_SUCCESS;
}