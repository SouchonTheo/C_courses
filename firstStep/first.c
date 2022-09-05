#include <stdio.h> 
#include <stdlib.h>

void pouet(char name[]) {
  printf("pouet %s\n", name);
}

int main() {

  // Declare and use variable
  char name[] = "Theo";
  int age = 21;
  printf("My name is %s and I am %d years old\n", name, age);
  printf("Enter your mood : ");
  char mood[20];

  // Just one word
  // If you use scanf don't use fgets after.
  // scanf("%s", mood);
  fgets(mood, 20, stdin); // or scanf("%s%s", mood1, mood2);
  printf("You are %s\n", mood);
  char fullName[20];

  // Multiple words
  printf("Enter your full name : ");
  fgets(fullName, 20, stdin);
  printf("Your full name is %s\n", fullName);

  pouet("titi");
  return 0;
}
