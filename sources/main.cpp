#include <iostream>
#include "vector.h"

int main(int argc, char* argv[]){
	
	Vector3d pointA(0,0,0);
	Vector2d pointB(0,0);
	
	std::cout << "Enter 3d point!: ";
	std::cin >> pointA.x >> pointA.y >> pointA.z;
	std::cout << "success!\n";
	
	std::cout << "Enter 2d point!: ";
	std::cin >> pointB.x >> pointB.y;
	std::cout << "success!\n";
	
	std::cout << pointA.x << " " << pointA.y << " " << pointA.z << std::endl;
	std::cout << pointB.x << " " << pointB.y << std::endl;
	
	std::cin.get();
	return EXIT_SUCCESS;
}