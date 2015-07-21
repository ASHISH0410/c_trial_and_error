#include <stdio.h>
#include <string.h>

struct person
{
  char name[20];
  char mobile[12];
  int age;
};

int main(void)
{
  // struct declaration
  struct person man1, man2;

  //man1 elements' initializing
  strcpy(man1.name,"Steven");
  strcpy(man1.mobile,"01012345678");
  man1.age=28;

  //man2 elements' initializing
  printf("Input name : "); scanf("%s",man2.name);
  char input[20];
  printf("Input mobile: "); scanf("%s",input); strncpy(man2.mobile,input,sizeof(man2.mobile)-1);
  /*
  I wrote strlen(man2.mobile) instead of sizeof(man2.mobile) in Line 24,
  but man2.mobile was not initialized yet so it had garbage value
  */
  man2.mobile[sizeof(man2.mobile)-1]=0;
  printf("man2.mobile length : %d\n",strlen(man2.mobile));
  //printf("Input mobile : "); scanf("%s",man2.mobile);
  printf("Input age: "); scanf("%d",&man2.age);

  // Print man1 and man2
  printf("man1's name: %s\n",man1.name);
  printf("man1's mobile: %s\n",man1.mobile);
  printf("man1's age: %d\n",man1.age);

  printf("man2's name: %s\n",man2.name);
  printf("man2's mobile: %s\n",man2.mobile);
  printf("man2's age: %d\n",man2.age);

  return 0;
}
