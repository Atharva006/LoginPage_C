#include <stdio.h>
#include <conio.h>


void mylogin() {
    int username;
    char passkey;
    clrscr();
    printf("Enter your login number: ");
    scanf("%d", &username);

    printf("Enter Password: ");
    scanf(" %c", &passkey);

    if (username == 123 && passkey == 'f') {
	printf("\t\tLogin successful\n\n");

	//If login this are the crediential.
	printf("Here are your login details\n");
	printf("Atharva-->1234\n");
	printf("Rahul-->3456\n");
	printf("Anand-->2024");
    }
    else {
	printf("Try again\n");
    }
}

int main() {
    mylogin();
    getch();
    return 0;
}
