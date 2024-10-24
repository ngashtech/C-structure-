
#include<stdio.h>
#include<string.h>
  
 struct book {
 char title [30];
 char author [30];
 char ISBN[13];
 int price;
 int publication_year;}
   book1,book2,book3,book4;
  int main() {
   strcpy (book1.title,"introduction to programming");
   strcpy (book1.author,"John Smith");
   strcpy (book1.ISBN,"9780131103627");
   book1.price=4999;
   book1.publication_year=2022;

  printf("title\t%s",book1.title);
  printf("\nauthor\t%s",book1.author);
  printf("\nISBN\t%s",book1.ISBN);
  printf("\npublication year\t%d",book1.publication_year=2022);
  printf("\nprice\t%d",book1.price);

return 0;
}























