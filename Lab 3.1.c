#include <stdio.h>
#define PI 3.14
float calculate_area_of_circle(int radius){
    return PI * radius * radius;
}

float calculate_area_of_rectangle(int width, int height){
    return width * height;
}

float calculate_area_of_triangle(int base, int height){
    return (base / 2) * height;
}

int main(){
    char unit[20];
    char shape_type;
    int radius, width, base, height;
    float area_of_circle, area_of_rectangle, area_of_triangle;
    do{
        printf("Enter the type of shape:");
        scanf(" %c", &shape_type);
        if(shape_type == 'c' || shape_type == 'r' || shape_type == 't'){
            if(shape_type == 'c'){
                printf("Enter the radius of the circle:");
                scanf("%d",&radius);
                printf("Enter the unit of the radius:");
                scanf("%s",unit);
                area_of_circle = calculate_area_of_circle(radius);
                printf("The area of the circle is %f %s^2",area_of_circle, unit);
            }
            else if(shape_type == 'r'){
                printf("Enter the width and height of the rectangle:");
                scanf("%d %d",&width, &height);
                printf("Enter the unit of the width and height:");
                scanf("%s",unit);
                area_of_rectangle = calculate_area_of_rectangle(width,height);
                printf("The area of the rectangle is %f %s^2",area_of_rectangle,unit);
            }
            else if(shape_type == 't'){
                printf("Enter the base and height of the triangle:");
                scanf("%d %d",&base,&height);
                printf("Enter the unit of the base and height:");
                scanf("%s",unit);
                area_of_triangle = calculate_area_of_triangle(base,height);
                printf("The area of the triangle is %f %s^2",area_of_triangle,unit);
            }
        }
        else{
            printf("Invalid shape type.\n");
            printf("Please try again.\n");
        }
        
    }while(shape_type != 'c' && shape_type != 'r' && shape_type != 't');
    return 0;
}
