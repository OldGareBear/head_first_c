#include <stdio.h>
#include <string.h>

typedef struct vehicle {
  char name[100];
  int roll;
  int salary;
  char address[100];
  int join_year;
} record;

int main(void) {
  int i , choice;
  FILE *fp1,*fp2;
  char oname[100];
  record det;
  int recsize;
  char c;

  fp1 = fopen("record.dat" , "r+");
  if(fp1 == NULL) {
    fp1 = fopen("record.dat" , "w+");
    
    if(fp1 == NULL) {
      printf("error in opening file : \n");
      return -1;
    }
  }
  recsize = sizeof(det);

  fseek(fp1 , 0 ,SEEK_END);
  printf("Enter employee Name : ");
  scanf("%[^\n]" , det.name);
  printf("Enter roll number   : ");
  scanf("%d" , &det.roll);
  printf("Enter the salary    : ");
  scanf("%d" , &det.salary);
  scanf("%c" , &c);
  printf("Enter address   : ");
  scanf("%[^\n]" , det.address);
  printf("Enter joining year  : ");
  scanf("%d" , &det.join_year);
  fwrite(&det,recsize,1,fp1);
}