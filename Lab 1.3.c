#include <stdio.h>
float calculate_bill(int consumption, int price){
    float bill = consumption * price;
    return bill;
}

char calculate_bill_category(float bill){
    if(bill >= 0 && bill <= 50){
        return 'L';
    }
    else if(bill >= 51 && bill <= 100){
        return 'M';
    }
    else if(bill >= 101 && bill <= 200){
        return 'H';
    }
    else if(bill >= 200){
        return 'V';
    }
}

int main(){
    char name[20];
    int consumption, price;
    printf("Enter name, consumption and price:");
    scanf("%s %d %d",name,&consumption,&price);
    float bill = calculate_bill(consumption,price);
    char bill_category = calculate_bill_category(bill);
    printf("Dear %s, your bill category is %c",name,bill_category);
    return 0;
}
