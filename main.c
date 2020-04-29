#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int n;
    void Login();
    void Registration();
    printf("****Login and Registration System****");
    printf("\n\nWelcome to my website");

    printf("\n 1.Login \n 2.Register");
    printf("\n\nEnter your choice: ");
    scanf("%d", &n);
    switch(n)
    {
        case 1: Login();
        break;

        case 2: Registration();
        break;

        default: printf("\nNo match found");
        printf("\nPlease re-enter the choice");
        break;
    }
    getch();
}
void Login()
    {
        int flag1=0, flag2=0;
        char username[10];
        char password[10];
        char name[10]="Kirti";
        char pass[10]="12345";
        printf("\nEnter Username: ");
        scanf("%s", username);

        printf("\nEnter Password: ");
        scanf("%s", password);

        printf("%s %s", username, password);
        flag1=strcmp(name, username);
        flag2=strcmp(pass, password);
        if(flag1 == 0)
        {
            if(flag2 ==0)
            {
                printf("\nSuccessful Login..!");
            }
            else
            {
                printf("\nPassword Incorrect...!");
            }
        }
        else
        {
            printf("\nIncorrect Username or Password");
        }
    }

void Registration()
    {
        char username[30], password[30];
        int age, dob;
        printf("****Welcome to Register****");
        printf("\nEnter a Username: ");
        scanf("%s", username);

        printf("\nEnter a Password: ");
        scanf("%s", password);

        printf("\nEnter Age: ");
        scanf("%d", &age);

        printf("\nEnter Date of Birth: ");
        scanf("%d", &dob);

        printf("\nRegistration Successful....");

    }
