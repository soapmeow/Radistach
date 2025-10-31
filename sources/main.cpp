#include <iostream>
#include "geometry.h"
#include "physics.h"

void test1(){ //new things
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

void test2(){
	// Transform 0,0,0 Velocity 0,0,0 Mass 1000.0
	physicBody Rocket({0,0,0},{0,0,0}, 1000.0);

	Rocket.addForce({0,1,0}, 10000); // Force up
	Rocket.addForce({1,0,0}, 300); // Force right
	Rocket.addForce({0,-1,0},9800); // Gravity
	Rocket.addForce({0,0,1}, 50); // Wind

	for(int time = 0; time < 10; ++time){
		Rocket.update(time);
		std::cout << Rocket.getTransform().x << " " << Rocket.getTransform().y << " " << Rocket.getTransform().z << "\n";
	}
}

int main(int argc, char* argv[]){
	test2();
	
	char temp;
	std::cin.get(temp);

	return EXIT_SUCCESS;
}