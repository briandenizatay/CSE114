#include <stdio.h>
float calculate_final_point(int midterm, int final){
    float final_point;
    final_point = midterm * final;
    return final_point;
}

char calculate_letter_grade(float final_point){
    if(final_point >= 3.00 && final_point <= 4.00){
        return 'A';
    }
    else if(final_point >= 2.00 && final_point <= 2.99){
        return 'B';
    }
    else if(final_point >= 1.00 && final_point <= 1.99){
        return 'C';
    }
    else if(final_point >= 0.50 && final_point <= 0.99){
        return 'D';
    }
    else if(final_point >= 0.00 && final_point <= 0.49){
        return 'F';
    }
}

int main(){
    char name[20];
    int midterm, final;
    printf("Enter the name, midterm and final:");
    scanf("%s %d %d",name,&midterm,&final);
    float final_point = calculate_final_point(midterm,final);
    char letter = calculate_letter_grade(final_point);
    printf("Dear %s, your final letter is %c",name,letter);
    return 0;
}
