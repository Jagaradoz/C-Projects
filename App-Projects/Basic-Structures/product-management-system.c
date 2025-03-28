#include <stdio.h>
#include <string.h>
#include <stdint.h>

#define SIZE 10

#pragma pack(1)

// `struct Item` represents an item with various types.
// Type: 0 for book, 1 for shirt, 2 for snack.
// Price: price of the item.
// Detail: union of book, shirt, and snack details.
struct Item {
    int type;
    double price;
    union {
        struct {
            char *title;
            char *category;
            int num_pages;
        } book;

        struct {
            uint8_t color_rgb[3];
            int size;
            char *design;
        } shirt;
        
        struct {
		    char *brand;
		    char *flavor;
		    float weight;
        } snack;
    } detail;
};

int main() {
	// Declarations.
    int choice, finish, item_count, i;
    char answer;

    char title[50], category[50], design[50], brand[50], flavor[50];
    
    struct Item items[SIZE];

    
    do{
    	// Initializations.
    	item_count = 0;
    	choice = -1;
    	finish = -1;
    	
		printf("Product Management in A Store!\n");
        printf("==============================");
        for(i = 0 ; i < SIZE ; i++){
            do{
            	// User Inputs for item type (-1 to exit).
                // If choice == -1, break the do-while loop.
            	puts("");
                printf("Item No.%d:\n0 for Book\n1 for Shirt\n2 for Snack\nEnter item type (-1 to exit): ",i+1);
                scanf("%d", &choice);
                while(getchar()!= '\n');    	
                if(choice == -1){
                	finish = 0;
                	break;
                }
                
			} while ((choice < 0 || choice > 2));

			 // Break the loop if user wants to exit.
			if(finish == 0) break;
			
            // Assign values to the item type.
            items[i].type = choice;

            // User inputs for specified type item.
			puts("");
            if (choice == 0) {
                printf("Enter book title: ");
                fgets(title, sizeof(title), stdin);
                printf("Enter author name: ");
                fgets(category, sizeof(category), stdin);
                printf("Enter number of pages: ");
		 		
                items[i].detail.book.title = title;
                items[i].detail.book.category = category;
                scanf("%d", &items[i].detail.book.num_pages);
            } else if(choice == 1) {
                printf("Enter shirt color rgb code: ");
                scanf("%d %d %d", &items[i].detail.shirt.color_rgb[0], &items[i].detail.shirt.color_rgb[1], &items[i].detail.shirt.color_rgb[2]);
                printf("Enter size: ");
                scanf("%d", &items[i].detail.shirt.size);
                while(getchar() != '\n');
                printf("Enter design: ");
                fgets(design, sizeof(design), stdin);
                
                items[i].detail.shirt.design = design;
            }else if(choice == 2) {
                printf("Enter brand: ");
                fgets(brand, sizeof(brand), stdin);
                printf("Enter flavor: ");
                fgets(flavor, sizeof(flavor), stdin);
                printf("Enter weight: ");
                scanf("%f", &items[i].detail.snack.weight);

                items[i].detail.snack.brand = brand;
                items[i].detail.snack.flavor = flavor;
            }

            printf("Enter price: ");
            scanf("%lf", &items[i].price);
            item_count++;
        }
        
        // Show all the items.
        printf("\n========== ITEMS ==========\n");
        for (i = 0; i < item_count; i++) {
		    printf("Item #%d ", i + 1);
		    printf(" ");
		    switch (items[i].type) {
		        case 0:
		            printf("(Type : Book)\n");
		            printf("  Title     : %s", items[i].detail.book.title);
		            printf("  Category  : %s", items[i].detail.book.category);
		            printf("  Pages     : %d\n", items[i].detail.book.num_pages);
		            printf("  Price     : $%.2lf\n", items[i].price);
		            break;
		        case 1:
		            printf("(Type : Shirt)\n");
		            printf("  Color RGB : (%d, %d, %d)\n",
		                   items[i].detail.shirt.color_rgb[0],
		                   items[i].detail.shirt.color_rgb[1],
		                   items[i].detail.shirt.color_rgb[2]);
		            printf("  Size      : %d\n", items[i].detail.shirt.size);
		            printf("  Design    : %s\n", items[i].detail.shirt.design);
		            printf("  Price     : $%.2lf\n", items[i].price);
		            break;
		        case 2:
		            printf("(Type : Snack)\n");
		            printf("  Brand     : %s", items[i].detail.snack.brand);
		            printf("  Flavor    : %s", items[i].detail.snack.flavor);
		            printf("  Weight    : %.2fg\n", items[i].detail.snack.weight);
		            printf("  Price     : $%.2lf\n", items[i].price);
		            break;
		    }
		    printf("----------------------------\n");
		}
		 
		// Try again method.       
        puts("");
        puts("");
        do{
            printf("Do you want to try again? (Y/n): ");
            scanf(" %c", &answer);
            while(getchar() != '\n');
        }while(answer != 'Y' && answer != 'n');
        puts("");

    }while(answer == 'Y');

    return 0;
}
