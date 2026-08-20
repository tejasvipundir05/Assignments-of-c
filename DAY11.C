// Q21: Write a program to display the month name and number of days using switch-case for a given month number.



#include <stdio.h>
int main() {
    int month;
    printf("Enter the month number (1-12): ");
    scanf("%d", &month);

    switch(month){
        case 1:
            printf("January has 31 days.\n");
            break;
        case 2:
            printf("February has 28 or 29 days.\n");
            break;
        case 3:
            printf("March has 31 days.\n");
            break;
        case 4:
            printf("April has 30 days.\n");
            break;
        case 5:
            printf("May has 31 days.\n");
            break;
        case 6:
            printf("June has 30 days.\n");
            break;
        case 7:
            printf("July has 31 days.\n");
            break;
        case 8:
            printf("August has 31 days.\n");
            break;
        case 9:
            printf("September has 30 days.\n");
            break;
        case 10:
            printf("October has 31 days.\n");
            break;
        case 11:
            printf("November has 30 days.\n");
            break;
        case 12:
            printf("December has 31 days.\n");
            break;
        default:
            printf("Invalid month number. Please enter a number between 1 and 12.\n");
    }

    return 0;
}





// Q22: Write a program to find profit or loss percentage given cost price and selling price.


#include<stdio.h>
int main(){
    float cost_price, selling_price, profit, loss, percentage;
    printf("Enter the cost price: ");
    scanf("%f", &cost_price);
    printf("Enter the selling price: ");
    scanf("%f", &selling_price);

    if(selling_price > cost_price){
        profit = selling_price - cost_price;
        percentage = (profit / cost_price) * 100;
        printf("Profit: %.2f\n", profit);
        printf("Profit Percentage: %.2f%%\n", percentage);
    }
    else if(cost_price > selling_price){
        loss = cost_price - selling_price;
        percentage = (loss / cost_price) * 100;
        printf("Loss: %.2f\n", loss);
        printf("Loss Percentage: %.2f%%\n", percentage);
    }
    else{
        printf("No profit, no loss.\n");
    }

    return 0;
}