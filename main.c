#include <stdio.h>

struct student{
  int rollno;
  float gpa;
  char name[10];
};

void max(struct student c[],int size){
    int maxgp = 0;
    int j = 0;
    for(int i=0;i<size;i++){
        if(maxgp<c[i].gpa)
        maxgp = c[i].gpa;
        j = i;
    }
    printf("\n Max gpa = %d" , maxgp);
    printf("\n name = %s" , c[j].name);
    printf("\n id = %d" , c[j].rollno);
}
void min(struct student c[],int size){
    int mingp = 100;
    int k = 0;
    for(int i=0;i<size;i++){
        if(mingp > c[i].gpa){
        mingp = c[i].gpa;
        k = i;
        }
    }
    printf("\n Min gpa = %d" , mingp);
    printf("\n name = %s" , c[k].name);
    printf("\n id = %d" , c[k].rollno);
}

int main() {
    int num;
    printf("\nEnter Number of students");
    scanf("%d",&num);
    struct student st[5];
    printf("\nEnter Records of %d students",num);
    for(int i=0;i<2;i++){
        printf("\nEnter rollno");
        scanf("%d",&st[i].rollno);
        printf("\nEnter name");
        scanf("%s",&st[i].name);
        printf("\nEnter gpa");
        scanf("%f",&st[i].gpa);
    }
    max(st,num);
    min(st,num);
    
    return 0;
}