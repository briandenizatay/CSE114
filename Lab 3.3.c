#include <stdio.h>
#define PI 3.14
float calculate_volume_of_sphere(int radius){
    return (4.0 / 3.0) * PI * radius * radius * radius;
}

float calculate_volume_of_cylinder(int radius, int height){
    return PI * radius * radius * height;
}

float calculate_volume_of_cone(int radius, int height){
    return (1.0 / 3.0) * PI * radius * radius * height;
}

int main(){
    char unit[20];
    char shape_type;
    int radius, height;
    float volume_of_sphere, volume_of_cylinder, volume_of_cone;
    do{
        printf("Enter the type of the shape:");
        scanf(" %c",&shape_type);
        if(shape_type == 's' || shape_type == 'c' || shape_type == 'o'){
            if(shape_type == 's'){
                printf("Enter the radius of the sphere:");
                scanf("%d",&radius);
                printf("Enter the unit of the radius:");
                scanf("%s",unit);
                volume_of_sphere = calculate_volume_of_sphere(radius);
                printf("The volume of the sphere is %f %s^3",volume_of_sphere,unit);
            }
            else if(shape_type == 'c'){
                printf("Enter the radius and height of the cylinder:");
                scanf("%d %d",&radius, &height);
                printf("Enter the unit of the radius and height:");
                scanf("%s",unit);
                volume_of_cylinder = calculate_volume_of_cylinder(radius,height);
                printf("The volume of the cylinder is %f %s^3",volume_of_cylinder,unit);
            }
            else if(shape_type == 'o'){
                printf("Enter the radius and height of the cone:");
                scanf("%d %d",&radius,&height);
                printf("Enter the unit of the radius and height:");
                scanf("%s",unit);
                volume_of_cone = calculate_volume_of_cone(radius,height);
                printf("The volume of the cone is %f %s^3",volume_of_cone,unit);
            }
        }
        else{
            printf("Invalid shape type.\n");
            printf("Please try again.\n");
        }
        
    }while(shape_type != 's' && shape_type != 'c' && shape_type != 'o');
    return 0;
}
