#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Inconspicuous Red-brick Wall"){
}

BrickWall::~BrickWall() {
	std::cout << "BrickWall destructor called" << std::endl;
}

BrickWall *BrickWall::clone()
{
	BrickWall *o = new BrickWall();
	return (o);
}
