#include <stdio.h>
#include <stdlib.h> 
typedef struct customer{
  int acc_no;
  char lname[20];
  char cin[20];
  float amount;
}customer;

void account()
{
    customer *add;
    FILE *fp;
    int n,i;
    printf("\n\n\t\t\t\xB2 Create New Account \xB2");
    printf("\n\tNumber of accounts you want to create: ");
    scanf("%d",&n);

    add = ((customer*)calloc(n,sizeof(customer)));
    fp = fopen("data.dt","w");
    for(i=0;i<n;i++){
      printf("Enter account number:");
      scanf("%d",&add[i]);
      printf("\n\t\tEnter your last name:");
      scanf("%s",&add[i].lname);
      printf("\n\t\tEnter your CIN:");
      scanf("%s",&add[i].cin);
      printf("\n\t\tEnter the amount to deposit: $");
      scanf("%f",&add[i].amount);

      fwrite(&add[i],sizeof(customer),1,fp);
    }
    fclose(fp);
}

void append_acc()
{
   customer *add;
    FILE *fp;
    int n,i;
    printf("\n\n\t\t\t\xB2 Create New Account \xB2");
    printf("\n\tNumber of accounts you want to create: ");
    scanf("%d",&n);

    add = ((customer*)calloc(n,sizeof(customer)));
    fp = fopen("data.dt","a");
    for(i=0;i<n;i++){
      printf("Enter account number:");
      scanf("%d",&add[i]);
      printf("\n\t\tEnter your last name:");
      scanf("%s",&add[i].lname);
      printf("\n\t\tEnter your CIN:");
      scanf("%s",&add[i].cin);
      printf("\n\t\tEnter the amount to deposit: $");
      scanf("%f",&add[i].amount);

      fwrite(&add[i],sizeof(customer),1,fp);
    }
    fclose(fp);
}

void display()
{
    customer ds;
    FILE *fp;
    fp = fopen("data.dt","r");
    while(fread(&ds,sizeof(customer),1,fp))
    {
        printf("\n%d|%s|%s|%f",ds.acc_no,ds.lname,ds.cin,ds.amount);
    }
    fclose(fp);
}

void search(){
    customer ds;
    FILE *fp;
    int acc_no, found =0;
    fp = fopen("data.dt","r");
    printf("Enter account number to search :");
    scanf("%d",&acc_no);
    while(fread(&ds,sizeof(customer),1,fp))
    { 
      if(ds.acc_no == acc_no){
          found = 1;
        printf("\n%d|%s|%s|%f",ds.acc_no,ds.lname,ds.cin,ds.amount);
      }  
        
    }
    if(!found)
    printf("\nRecord not found");
    fclose(fp);
}


int main()
{
    int ch;
    do{
        printf("\n\n\n\t\t\t\tBANK MANAGEMENT SYSTEM");
        printf("\n\n\n\t\t\t\xB2\xB2\xB2 WELCOME TO THE MAIN MENU \xB2\xB2\xB2");
        printf("\n\n\t\t[1] Create account \n\t\t[2] Add new account \n\t\t[3] display options \n\t\t[4] Search accounts  \n\t\t[0] exit");
        printf("\n\n\t\tEnter your choice :");
        scanf("%d",&ch);

        switch (ch)
        {
            case 1:
                account();
                break;
            case 2:
                append_acc();
                break;
            case 3:
                display();
                break;
            case 4:
                search();
                break;
           
        }
  } while (ch != 0);
     
    return 0;
}
