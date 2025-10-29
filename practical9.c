#include<stdio.h>

int main() {
    int amount, billing_amount;
    float gst, final_amount, member_discount ;
    char member;

    printf("\nWelcome to SHOPEASE\n");
    printf("\nEnter total amount of shopping items: ");
    scanf("%d", &amount);

    if (amount > 0)
    {
        if (amount < 1000)
        {
            printf("\nSORRY, YOU ARE NOT GETTING A DISCOUNT\n");
            billing_amount = amount;
        }
        else if (amount >= 1000 && amount < 5000)
        {
            printf("\nCONGRATS, YOU ARE GETTING 10%% DISCOUNT\n");
            billing_amount = amount - (amount * 10 / 100);
        }
        else
        {
            printf("\nCONGRATS, YOU ARE GETTING 20%% DISCOUNT\n");
            billing_amount = amount - (amount * 20 / 100);
        }


        printf("\nIs the customer a registered member? (y/n): ");
        scanf(" %c", &member);

        if (member == 'y')
        {
            member_discount = billing_amount * 0.05;
            billing_amount -= member_discount;
            printf("\nAdditional 5%% member discount applied: %.2f\n", member_discount);
        }


        gst = billing_amount * 0.05;
        final_amount = billing_amount + gst;


        printf("\n--- Final Bill ---");
        printf("\nBilling amount after discounts: %d", billing_amount);
        printf("\nGST (5%%): %.2f", gst);
        printf("\nTotal amount to pay: %.2f\n", final_amount);

    }
     else
    {
        printf("\nEnter a valid shopping amount!\n");
    }

    return 0;
}
