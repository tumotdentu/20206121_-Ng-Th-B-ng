// Ngô Thế Bằng -20206121
#include<stdio.h>
#include<conio.h>
 
int string_ln(char*);
 
int main() {
   char str[50];
   int length;
    
   printf("\nNhap chuoi bat ky: ");
   gets(str);
    
   length = string_len(str);
   printf("\nDo dai chuoi %s la: %d", str, length);
  return(0);
}
int string_len(char *p) {
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
