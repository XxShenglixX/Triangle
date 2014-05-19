#include "Triangle.h"

char *getTriangleName(int side1, int side2, int side3) 
{
	// First,if any side of the length is equal to 0 or negative, it will return invalid
	if ( (side1 <= 0 || side2 <=0 || side3 <=0) )
		return "invalid";	
	
	// Next,if the addition of 2 sides of triangle is smaller than the 3rd side, the triangle is considered invalid
	if ( ((side1+side2) < side3 ) || ((side1+side3) < side2) || (side2+side3) < side1 )
		return "invalid";
	
		//After passing the above two tests,
		//If the triangle has 3 equal sides, then it is an equilateral triangle
		if( (side1 == side2) && (side2 == side3) && (side1==side3) )
			return "equilateral";
		
		//If the triangle has any 2 equal sides, it is an isosceles triangle
		if( (side1 == side2) || (side2 == side3) || (side1 == side3) )
			return "isosceles";
	
		//If the triangle has 3 different sides, it is a scalene triangle
		if((side1 != side2) && (side2 != side3) && (side1 != side3))
			return "scalene";
	
}
