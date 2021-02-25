#include<stdio.h>
#include<math.h>

int main(){
	
	int selection;
	int selection1;
	float first_angle;
	float second_angle;
	float third_angle;
	float height;
	float base_length;
	float area;
	float first_side_length;
	float second_side_length;
	float third_side_length;
	float perimeter;
	float u;
	float radius;
	float angle;
	float length;
	float length1;
	float length2;
	int side;
	const double PI = 3.14159265;
    double degree;
	double radian;
    double result;			
	
	printf("--POLYGONS--\n\n1: Triangle\n2: Square\n3: Rectangle\n4: Pentagon\n5: Hexagon\n6: n-sided Polygon\n7: Circle\n\n\n");
	printf("Please select the polygon you want:");
	scanf("%d",&selection);
	
	switch(selection){
		
		case 1:
			
			printf("\nWhat is known about triangle:\n");
			printf("1:Three angles\n2:Two angles\n3:Base and Height\n4:Three Side\n5:Two sides and a angle\n\n\n");
			scanf("%d",&selection1);
			
			switch(selection1){
			
			case 1:
				printf("Please enter the angles of triangle:\n");
				scanf("%f %f %f",&first_angle,&second_angle,&third_angle);
	
				if(first_angle>=180 || second_angle>=180 || third_angle>=180){
					printf("You entered the angle values incorrectly because an angle value can not bigger than 180.");
				}
	
				if(first_angle<=0 || second_angle<=0 || third_angle<=0){
					printf("You entered the angle values incorrectly because an angle value can not be negative or zero .");
				}
	
				if(first_angle+second_angle+third_angle!=180){
					printf("You entered the angle values incorrectly because the sum of the inside angles is not 180.");
				}
	
				else if(first_angle>90 || second_angle>90 || third_angle>90){
					printf("This triangle is obtuse triangle.");
				}
				else if(first_angle==90 || second_angle==90 || third_angle==90){
					printf("This triangle is right triangle.");
				}
				else{
					printf("This triangle is acute triangle.");
				}
				break;
				
			case 2:
				printf("Please enter two angles of triangle.\nThe first:");
				scanf("%f",&first_angle);
				printf("The second:");
				scanf("%f",&second_angle);
		
				third_angle=180-(first_angle+second_angle);
	
				if(first_angle>=180 || second_angle>=180 || third_angle>=180){
					printf("You entered the angle values incorrectly because an angle value can not bigger than 180.");
				}
	
				if(first_angle<=0 || second_angle<=0 || third_angle<=0){
					printf("You entered the angle values incorrectly because an angle value can not be negative or zero .");
				}
	
				else if(first_angle>90 || second_angle>90 || third_angle>90){
					printf("This triangle is obtuse triangle.");
				}
				else if(first_angle==90 || second_angle==90 || third_angle==90){
					printf("This triangle is right triangle.");
				}
				else{
					printf("This triangle is acute triangle.");
				}
				break;
					
			case 3:		
				printf("Please enter the length of the base of the triangle:");
				scanf("%f",&base_length);
						
				printf("Please enter the height of the triangle:");
				scanf("%f",&height);
						
				area= (height*base_length)/2;
						
				printf("The area of the triangle is %.3f",area);
				break;
						
			case 4:			
				printf("Please enter the first side length of triangle:");
				scanf("%f",&first_side_length);
				printf("Please enter the second side length of triangle:");
				scanf("%f",&second_side_length);
				printf("Please enter the third side length of triangle:");
				scanf("%f",&third_side_length);
							
				perimeter= first_side_length+second_side_length+third_side_length;
				u=perimeter/2.0;
				area=sqrt(u*(u-first_side_length)*(u-second_side_length)*(u-third_side_length));			
							
				if(first_side_length>perimeter-first_side_length|| first_side_length<abs(second_side_length-third_side_length)||
				second_side_length>perimeter-second_side_length|| second_side_length<abs(first_side_length-third_side_length)||
				third_side_length>perimeter-third_side_length|| third_side_length<abs(second_side_length-first_side_length)){ 
							
				printf("A triangle with these side lengths cannot be drawn.");
			}
						
				else {
				printf("The area of this triangle is %.3f\n",area);	
							
			}
				break;
			case 5:
		     	printf("Please enter the angle of triangle(radian):");
				scanf("%f",&angle);
				printf("Please enter the first side length of triangle:");
				scanf("%f",&first_side_length);
				printf("Please enter the seconde side length of triangle:");
				scanf("%f",&second_side_length);
							
				area= 1/2.0*first_side_length*second_side_length*sin(angle);
							
				if(angle>=180){
					printf("You entered the angle value incorrectly because an angle value can not bigger than 180.");
				}
							
				if(angle<=0){
					printf("You entered the angle values incorrectly because an angle value can not be negative or zero .");
				}
							
				else {
					printf("The area of this triangle is %f",area);
				}	
				break;	
			
	}
		break;
		case 2:
			printf("Please enter the length:");
			scanf("%f" , &length);
		
			area = length*length;
			perimeter= 4*length;
		
			printf("The area of the square is %.2f\n" ,area);
			printf("The perimeter of the square is %.2f" ,perimeter);
			
				break;
		
		case 3:
			printf("Please enter the first length:");
			scanf("%f" , &length1);
			printf("Please enter the second length:");
			scanf("%f",&length2);
		
			area = length1*length2;
			perimeter= 2*(length1+length2);
		
			printf("The area of rectangle is %.2f\n" ,area);
			printf("The perimeter of rectangle is %.2f" ,perimeter);
			break;
			
		case 4:
			printf("Please enter the length of the pentagon:");
			scanf("%f",&length);
			
			perimeter= 5*length;
			area= (sqrt(25+(10*sqrt(5))))*length*length/4;
			
			printf("The perimeter of the pentagon :%.3f\n",perimeter);
			printf("The area of the pentagon :%.4f\n",area);
			
		break;
		
		case 5:	
			printf("Please enter the length of the hexagon:");
			scanf("%f",&length);
			
			perimeter= 6*length;
			area= (3*sqrt(3))*length*length/2;
			
			printf("The perimeter of the pentagon :%.3f\n",perimeter);
			printf("The area of the pentagon :%.4f\n",area);
		break;
		
		case 6:
			printf("How many sides has the polygon whose perimeter and area you want to find:");
		scanf("%d",&side);
		
		printf("\nPlease enter the side length of the polygon:");
		scanf("%f",&length);
		
		if(side<=2){
			printf("A two-dimensional polygon must have at least 3 sides!");
		}
	
	if(side>2){
		
		degree=180/side;
		radian = degree * PI/180;
		result =tan(radian);
				
		perimeter= side*length;
		area=(side*length*length/4)*1/result;
		
		printf("The perimeter of the polyhon:%.2f\n",perimeter);
		printf("The area of the polygon: %.2f\n",area);
		
	}
			
		break;
		
		case 7:	
			printf("Please enter the radius of the circle:");
			scanf("%f" , &radius);
		
			perimeter = 2*PI*radius;
			area = PI*(radius*radius);
			
			printf("The perimeter of the circle is %.3f\n" ,perimeter);
			printf("The area of the circle is %.3f" ,area);
		
		break;
			
	}	
		
	return 0;	
}
