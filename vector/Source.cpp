#include "Vec2.hpp"
#include "Vec3.hpp"

#include <string>

using namespace jrw;

void compare(bool condition) {
	if (condition) {
		std::cout << "[o] compare success" << std::endl;
	}
	else {
		std::cout << "[x] compare failed" << std::endl;
	}
}

void testFunction() {
	Vec2 v1(1, 2);
	Vec2 v2(4, 6);

	v1.print();
	v2.print();

	v1.add(v2);
	v1.print();

	v2.times(2);
	v2.print();

	v1.minus(v2);
	v1.print();

	v1.add(v2).add(Vec2(1, 9)).add(Vec2(2, 10));
	v1.print();

	Vec2 v3(1, 1);
	v1 = v3 + v3;
	v1.print();

	v1 = v1 * v1;
	v1.print();

	v1 = v1 - v3;
	v1.print();

	compare((v1 + v2) == Vec2(5, 6));
	compare((v2 - v1) == Vec2(3, 2));
	compare((v1 * 2) == Vec2(2, 4));
	compare((v2 * 2) == Vec2(8, 12));
	compare((v2 / 2) == Vec2(2, 3));

	std::cout << v1.dot(v2) << std::endl;
	std::cout << v1.cross(v2) << std::endl;

	Vec2 v4(3, 4);
	v4.print();
	std::cout << v4.magnitude() << std::endl;
	std::cout << v4.mag2() << std::endl;

	v4.normalized();
	v4.print();

	std::cout << v4.eulerangle() << std::endl;
}

int main() {
	Vec3 v1(1, 2, 3);
	Vec3 v2(4, 6, 10);
	//testFunction();

	compare((v1 + v2) == Vec3(5, 8, 13));
	compare((v2 - v1) == Vec3(3, 4, 7));
	compare((v1 * 2) == Vec3(2, 4, 6));
	compare((v2 * 2) == Vec3(8, 12, 20));
	compare((v2 / 2) == Vec3(2, 3, 5));

	std::cout << v1.dot(v2) << std::endl;
	std::cout << v1.cross(v2) << std::endl;

	Vec3 v3(3, 4, 5);
	v3.print();
	std::cout << v3.magnitude() << std::endl;
	std::cout << v3.mag2() << std::endl;

	v3.normalized();
	v3.print();

	std::cout << v1.eulerangleToVector(v2) << std::endl;

	getchar();
	return 0;
}