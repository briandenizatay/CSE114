#include <stdio.h>
void print_square(int side){
    int i,j;
    for(i = 1; i <= side; ++i){
        for(j = 1; j <= side; ++j){
        printf("*");
        }
        printf("\n");
    }
}

void print_right_triangle(int height){
    int i,j;
    for(i = 1; i <= height; ++i){
        for(j = 1; j <= i; ++j){
            printf("*");
        }
        printf("\n");
    }
}

void print_number_pattern(int rows){
    int i,j;
    for(i = 1; i <= rows; ++i){
        for(j = 1; j <= i; ++j){
            printf("%d",i);
        }
        printf("\n");
    }
}

int main(){
    int side, height, rows;
    char pattern_type;
    do{
        printf("Enter the type of the pattern:");
        scanf(" %c",&pattern_type);
        if(pattern_type == 's' || pattern_type == 't' || pattern_type == 'n'){
            if(pattern_type == 's'){
                printf("Enter the side length of the square:");
                scanf("%d",&side);
                print_square(side);
            }
            else if(pattern_type == 't'){
                printf("Enter the height of the right-angled triangle:");
                scanf("%d",&height);
                print_right_triangle(height);
            }
            else if(pattern_type == 'n'){
                printf("Enter the number of rows in the number pattern:");
                scanf("%d",&rows);
                print_number_pattern(rows);
            }
        }
        else{
            printf("Invalid pattern type.\n");
            printf("Please try again.\n");
        }
    }while(pattern_type != 's' && pattern_type != 't' && pattern_type != 'n');
    return 0;
}
