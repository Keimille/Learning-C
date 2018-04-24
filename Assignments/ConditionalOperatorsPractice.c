/* Create code that categorizes books by number of pages
Books with 100 pages or less are categorized as light reading
Books with more than 100 pages and less than 201 pages are categorized as average reading
Books with 200 pages or more or 350 pages or less are categorized as hefty reading
Books with more than 350 pages, print "You devour books!"
*/


#include <stdio.h>

int main (){
    int pages;
    printf("Enter the amount pages are in your book?");
    scanf(%d, &pages);
/*
    if (pages <= 100){
        printf("This book is light reading...");
    }
    else if (pages > 100 && pages < 200){
        printf("This is about average for you...");
    }
    else if (pages >= 200 && pages <= 350){
        printf("This is a hefty reading.");
    }
    else if (pages >= 350){
        printf("You devour books!")
    }
} 
*/
    if (pages <= 100? (printf ("This book is light reading..."): pages > 100 && pages < 200? printf("This is about average for you...": pages >= 200 && pages <= 350? printf("This is a hefty reading." : printf("You devour books!")))));

return 0
}




