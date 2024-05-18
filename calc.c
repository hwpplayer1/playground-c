#include <stdio.h>

int add(int x,int y){
  return x+y;
}

int sub(int x,int y){
  return x-y;
}

int mul(int x,int y){
  return x*y;
}

float div(int x,int y){
  return x/y;
}


int main(){
  int choice;
  int first,second,result;
  
  printf("Please enter the first number > \n");
  scanf("%d", &first);
  
  printf("Please enter the second number > \n");
  scanf("%d", &second);
  
  while(1){
    printf("Choose an operation > \n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n> ");
    if (scanf("%d", &choice) == EOF){break;}
  
    if(choice == 1){
      result = add(first,second);
      printf("\n%d\n\n", result);
    } else if (choice == 2){
      result = sub(first, second);
      printf("\n%d\n\n", result);
    } else if (choice == 3){
      result = mul(first, second);
      printf("\n%d\n\n", result);
    } else if (choice == 4){
      result = div(first, second);
      printf("\n%d\n\n", result);
    } else {
      printf("Invalid Operation");
    }
  }
}
