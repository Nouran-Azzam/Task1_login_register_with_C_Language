#include <stdio.h>
#include <string.h>

struct User {
    char username[50];
    char password[50];  
      };
struct User users[100];
int counter =0;

void registerUser() {
       printf(" Please ,Enter  username: ");
        scanf("%s",users[counter].username);
    
       printf(" Please ,Enter password : ");
       scanf("%s",users[counter].password);
     counter++; }

int loginUser(char* username, char* password) {
    for(int i = 0; i<counter; i++) {
        if(strcmp(username,users[i].username)==0 && strcmp(password,users[i].password)==0) {
            return 1;  } }
    return 0;  }



int main() {
    int number;
    char username[50];
    char password[50];
      
       while (1) {
        printf(" (1)Register\t (2)Login\t  \n\nEnter your choice of (1 , 2) : ");
        scanf("%d", &number);
        switch (number) {
            case 1:
                registerUser();
                break;
            case 2:
                printf("Enter your username: ");
                scanf("%s",username);
                printf("Enter your password: ");
                scanf("%s",password);
                if(loginUser(username, password)){
                    printf("Login successful \n");
                }else{
                    printf("Login failed. Incorrect username or password.\n try again...");  }
                break;
            default:
                printf("Invalid choice(incorrect).. Try again ,please..\n");
        } } }