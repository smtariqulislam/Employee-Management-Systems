#include<stdio.h>
#include<stdlib.h>



struct Employee{
    int id;
    char name[30];
}
e[100];
int n;





//Show all Employees
void show(struct Employee e[]){
    for(int i=0;i<n;i++){
        printf("Id : %d , Name : %s\n",e[i].id,e[i].name);
    }
}
//Add Employee
void add(struct Employee e[]){
    printf("Enter new Employee details\n");
    scanf("%d",&e[n].id);
    fflush(stdin);
    gets(e[n].name);
    n++;
}

//Delete an Employee detail
void delete(struct Employee e[]){
    int temp,count=0;
    printf("Enter id to be deleted:\n");
    scanf("%d",&temp);
    for(int i=0;i<n;i++){
        if(temp==e[i].id){
            temp=i;
            count++;
        }
    }
    if(count==1){
        for(int j=temp;j<n;j++){
            e[j]=e[j+1];
        }
    }
    else{
        printf("Employee don't Exist !\n");
    }
    n--;
}

//Search Employee
void search(struct Employee e[]){
    int temp,count=0;
    printf("Enter id to be searched:\n");
    scanf("%d",&temp);
    for(int i=0;i<n;i++){
        if(temp==e[i].id){
            printf("Employee Found !\n");
            printf("Id : %d , Name : %s\n",e[i].id,e[i].name);
            count++;
        }
    }
    if(count!=1){
        printf("Employee don't Exist !\n");
    }
}

int main(){
    printf("Enter number of Employee:\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter id and name of Employee %d:\n",i+1);
        scanf("%d",&e[i].id);
        fflush(stdin);
        gets(e[i].name);
    }
    start:
    printf("-------OPERATIONS------\n");
    printf("1. Add Employee\n");
    printf("2. Search an Employee\n");
    printf("3. Show all employee\n");
    printf("4. Delete an Employee detail\n");
    printf("5. Exit Program\n");
    int input;
    scanf("%d",&input);
    switch (input)
    {
    case 1:
    add(e);
    break;

    case 2:
    search(e);
    break;

    case 3:
    show(e);
    break;

    case 4:
    delete(e);
    break;

    default:
    exit(0);
    }
    goto start;
return 0;
}


