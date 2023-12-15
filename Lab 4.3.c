#include <stdio.h>
void print_multiplication_table(int num){
    int i,j;
    for(i = 1; i <= num; ++i){
        printf("%d X %d = %d\n",i,num,i * num);
    }
}

void print_pascal_triangle_pattern(int rows){
    int i,j, coef = 1;
    for(i = 0; i < rows; ++i){
        for(j = 0; j <= i; ++j){
            if(j == 0 || i == 0){
                coef = 1;
            } 
            else{
                coef = coef * (i - j + 1) / j;
            }
            printf("%d ",coef);
        }
        printf("\n");
    }
}

void print_arrow_pattern(int rows){
    int i,j;
    for(i = 1; i <= rows; ++i){
        for(j = 1; j <= i; ++j){
            printf("*");
        }
        printf("\n");
    }
    for(i = rows - 1; i >= 1; --i){
        for(j = 1; j <= i; ++j){
            printf("*");
        }
        printf("\n");
    }
}

int main(){
    int num,rows;
    char pattern_type;
    do{
        printf("Enter the type of the pattern:");
        scanf(" %c",&pattern_type);
        if(pattern_type == 'm' || pattern_type == 'p' || pattern_type == 'a'){
            if(pattern_type == 'm'){
                printf("Enter the number for which the multiplication table will be printed:");
                scanf("%d",&num);
                print_multiplication_table(num);
            }
            else if(pattern_type == 'p'){
                printf("Enter the number of rows in the Pascal triangle pattern:");
                scanf("%d",&rows);
                print_pascal_triangle_pattern(rows);
            }
            else if(pattern_type == 'a'){
                printf("Enter the number of rows in the arrow pattern:");
                scanf("%d",&rows);
                print_arrow_pattern(rows);
            }
        }
        else{
            printf("Invalid pattern type.\n");
            printf("Please try again.\n");
        }
    }while(pattern_type != 'm' && pattern_type != 'p' && pattern_type != 'a');
    return 0;
}
