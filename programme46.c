// 46. C program to find diameter, circumference and area of a circle
//using functions.

#include <stdio.h> 
#include <math.h> 

// Function to calculate diameter 
float diameter(float r) 
{ 
	return 2 * r; 
} 

// Function to calculate circumference 
float circumference(float r) 
{ 
	// 2 * 3.14 * r 
	return 2 * M_PI * r; 
} 

// Function to calculate area of circle 
float area(float r) 
{ 
	// 3.14 * r * r 
	return M_PI * r * r; 
} 

// Driver program 
int main() 
{ 
	float r; 
	printf("Enter the radius of the circle: ");
	scanf("%f", &r); 
	printf("Diameter of the circle = %.2f units \n", 
		diameter(r)); 
	printf("Circumference of the circle = %.2f units\n", 
		circumference(r)); 
	printf("Area of the circle = %.2f sq. units", 
		area(r)); 
	return 0; 
}
