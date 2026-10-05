#include <stdio.h>

/*

Name: Mark Lopez
Course Number: 1302
Semester: Fall/2026
Date: 10/4/2026
Description:

okay so visual studio decided to delete my code so i had to rebuild everything from scratch.

*/

float calc_tax(float subtotal, float tax_percentage) {
	return subtotal * (tax_percentage / 100);
}

int main() {
	const float CHEESE_PIZZA_PRICE = 13.00;
	const float VEGGIE_SUPREME_PIZZA_PRICE = 13.00;
	const float SPINACH_RICOTTA_PIZZA_PRICE = 15.00;
	const float PEPPERONI_PIZZA_PRICE = 15.00;
	const float HAWAIIAN_PIZZA_PRICE = 15.00;
	const float BBQ_CHICKEN_PIZZA_PRICE = 16.00;
	const float SUPREME_PIZZA_PRICE = 17.00;

	int cheese_pizza;
	int veggie_supreme_pizza;
	int spinach_ricotta_pizza;
	int pepperoni_pizza;
	int hawaiian_pizza;
	int bbq_chicken_pizza;
	int supreme_pizza;

	printf("ENTREE REORDER MENU\n");

	printf("How many Cheese Pizzas would you like? ");
	scanf_s("%d", &cheese_pizza);

	printf("How many Veggie Supreme Pizzas would you like? ");
	scanf_s("%d", &veggie_supreme_pizza);

	printf("How many Spinach & Ricotta Pizzas would you like? ");
	scanf_s("%d", &spinach_ricotta_pizza);

	printf("How many Pepperoni Pizzas would you like? ");
	scanf_s("%d", &pepperoni_pizza);

	printf("How many Hawaiian Pizzas would you like? ");
	scanf_s("%d", &hawaiian_pizza);

	printf("How many BBQ Chicken Pizzas would you like? ");
	scanf_s("%d", &bbq_chicken_pizza);

	printf("How many Supreme Pizzas would you like? ");
	scanf_s("%d", &supreme_pizza);

	float entree_total1 = cheese_pizza * CHEESE_PIZZA_PRICE;
	float entree_total2 = veggie_supreme_pizza * VEGGIE_SUPREME_PIZZA_PRICE;
	float entree_total3 = spinach_ricotta_pizza * SPINACH_RICOTTA_PIZZA_PRICE;
	float entree_total4 = pepperoni_pizza * PEPPERONI_PIZZA_PRICE;
	float entree_total5 = hawaiian_pizza * HAWAIIAN_PIZZA_PRICE;
	float entree_total6 = bbq_chicken_pizza * BBQ_CHICKEN_PIZZA_PRICE;
	float entree_total7 = supreme_pizza * SUPREME_PIZZA_PRICE;

	float subtotal = entree_total1 + entree_total2 + entree_total3 + entree_total4 + entree_total5 + entree_total6 + entree_total7;
	float tax = calc_tax(subtotal,8.25);
	float grand_total = subtotal + tax;

	printf("\n\nEntree Totals\n\n");

	printf("Cheese Pizza - %d at a cost of $%.2f each for a total of $%.2f\n",cheese_pizza,CHEESE_PIZZA_PRICE, entree_total1);
	printf("Veggie Supreme Pizza - %d at a cost of $%.2f each for a total of $%.2f\n", veggie_supreme_pizza, VEGGIE_SUPREME_PIZZA_PRICE, entree_total2);
	printf("Spinach & Ricotta Pizza - %d at a cost of $%.2f each for a total of $%.2f\n", spinach_ricotta_pizza, SPINACH_RICOTTA_PIZZA_PRICE, entree_total3);
	printf("Pepperoni Pizza - %d at a cost of $%.2f each for a total of $%.2f\n", pepperoni_pizza, PEPPERONI_PIZZA_PRICE, entree_total4);
	printf("Hawaiian Pizza - %d at a cost of $%.2f each for a total of $%.2f\n", hawaiian_pizza, HAWAIIAN_PIZZA_PRICE, entree_total5);
	printf("BBQ Chicken Pizza - %d at a cost of $%.2f each for a total of $%.2f\n", bbq_chicken_pizza, BBQ_CHICKEN_PIZZA_PRICE, entree_total6);
	printf("Supreme Pizza - %d at a cost of $%.2f each for a total of $%.2f\n", supreme_pizza, SUPREME_PIZZA_PRICE, entree_total7);

	printf("\n\nTotal Price for Entree Reorder $%.2f\n",subtotal);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
	printf("SubTotal Price for order is $%.2f\n", subtotal);
	printf("Tax is $%.2f\n", tax);
	printf("Grand Total is $%.2f\n", grand_total);

	return 0;
}