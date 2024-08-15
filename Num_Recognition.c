//    Program To Recognize Integers upto 1 Crore 

#include <stdio.h>
#include <windows.h>

int onedigit(int num) {       // Function to print the word representation of a digit in the last place (e.g., 1, 2, 3, ...)


     if (num == 1) {
        printf("One");    }
    else if (num == 2) {
        printf("Two");    }
    else if (num == 3) {
        printf("Three");    }
    else if (num == 4) {
        printf("Four");    }
    else if (num == 5) {
        printf("Five");    }
    else if (num == 6) {
        printf("Six");    }
    else if (num == 7) {
        printf("Seven");    }
    else if (num == 8) {
        printf("Eight");    }
    else if (num == 9) {
        printf("Nine");    }
}
    

int teens(int num) {          // Function to print the word representation of a digit in the teens place (e.g., 11, 12, 13, ...)

if (num == 11) {
        printf("Eleven");
    } else if (num == 12) {
        printf("Twelve");
    } else if (num == 13) {
        printf("Thirteen");
    } else if (num == 14) {
        printf("Fourteen");
    } else if (num == 15) {
        printf("Fifteen");
    } else if (num == 16) {
        printf("Sixteen");
    } else if (num == 17) {
        printf("Seventeen");
    } else if (num == 18) {
        printf("Eighteen");
    } else if (num == 19) {
        printf("Nineteen"); }

}

int tens(int num) {         // Function to print the word representation of a digit in the tens place (e.g., 10, 20, 30, ...)

    if(num == 1) {
        printf("Ten");      }
    else if (num == 2) {
        printf("Twenty");    }
    else if (num == 3) {
        printf("Thirty");    }
    else if (num == 4) {
        printf("Fourty");    }
    else if (num == 5) {
        printf("Fivty");    }
    else if (num == 6) {
        printf("Sixty");    }
    else if (num == 7) {
        printf("Seventy");    }
    else if (num == 8) {
        printf("Eighty");    }
    else if (num == 9) {
        printf("Ninety");    }
}

int Hundreds(int num) {         // Function to print the word representation of a digit in the Hundreds place (e.g., 100, 200, 300, ...)

    if(num == 1) {
        printf("One Hundred ");      }
    else if (num == 2) {
        printf("Two Hundred ");    }
    else if (num == 3) {
        printf("Three Hundred ");    }
    else if (num == 4) {
        printf("Four Hundred ");    }
    else if (num == 5) {
        printf("Five Hundred ");    }
    else if (num == 6) {
        printf("Six Hundred ");    }
    else if (num == 7) {
        printf("Seven Hundred ");    }
    else if (num == 8) {
        printf("Eight Hundred ");    }
    else if (num == 9) {
        printf("Nine Hundred ");    }
}

int Thousands(int num) {       // Function to print the word representation of a digit in the thousands place (e.g., 1000, 2000, 3000, ...)

    if(num == 1) {
        printf("One Thousand ");      }
    else if (num == 2) {
        printf("Two Thousand ");    }
    else if (num == 3) {
        printf("Three Thousand ");    }
    else if (num == 4) {
        printf("Four Thousand ");    }
    else if (num == 5) {
        printf("Five Thousand ");    }
    else if (num == 6) {
        printf("Six Thousand ");    }
    else if (num == 7) {
        printf("Seven Thousand ");    }
    else if (num == 8) {
        printf("Eight Thousand ");    }
    else if (num == 9) {
        printf("Nine Thousand ");    }
}

int TeenThousands(int num) {                // Function to print the word representation of a digit in the teen thousand place (e.g., 11000, 12000, 13000, ...)

    if(num == 11) {
        printf("Eleven Thousand ");      }
    else if (num == 12) {
        printf("Twelwe Thousand ");    }
    else if (num == 13) {
        printf("Thirteen Thousand ");    }
    else if (num == 14) {
        printf("Fourteen Thousand ");    }
    else if (num == 15) {
        printf("Fivteen Thousand ");    }
    else if (num == 16) {
        printf("Sixteen Thousand ");    }
    else if (num == 17) {
        printf("Seventeen Thousand ");    }
    else if (num == 18) {
        printf("Eighteen Thousand ");    }
    else if (num == 19) {
        printf("Nineteen Thousand ");    }
}


int lakhs(int num) {       // Function to print the word representation of a digit in the lakh place (e.g., 100000, 200000, 300000, ...)

    if(num == 1) {
        printf("One Lakh ");      }
    else if (num == 2) {
        printf("Two Lakh ");    }
    else if (num == 3) {
        printf("Three Lakh ");    }
    else if (num == 4) {
        printf("Four Lakh ");    }
    else if (num == 5) {
        printf("Five Lakh ");    }
    else if (num == 6) {
        printf("Six Lakh ");    }
    else if (num == 7) {
        printf("Seven Lakh ");    }
    else if (num == 8) {
        printf("Eight Lakh ");    }
    else if (num == 9) {
        printf("Nine Lakh ");    }
}

int TeenLakhs(int num) {                // Function to print the word representation of a digit in the teen lakhs place (e.g., 1100000, 1200000,1300000, ...)

    if(num == 11) {
        printf("Eleven Lakhs ");      }
    else if (num == 12) {
        printf("Twelwe Lakhs ");    }
    else if (num == 13) {
        printf("Thirteen Lakhs ");    }
    else if (num == 14) {
        printf("Fourteen Lakhs ");    }
    else if (num == 15) {
        printf("Fivteen Lakhs ");    }
    else if (num == 16) {
        printf("Sixteen Lakhs ");    }
    else if (num == 17) {
        printf("Seventeen Lakhs ");    }
    else if (num == 18) {
        printf("Eighteen Lakhs ");    }
    else if (num == 19) {
        printf("Nineteen Lakhs ");    }
}



int main() {    //main Function Starts

    int num,digit1,digit2,digit3,digit4,digit5,digit1_2;
    int lakhs_1,lakhs1_2,lakhs_10,x,y;
    char a;

    printf("\n Welcome To Number Recognization Program! \n\n");

home:
    printf(" Please Enter a Number [0 - 10000000(one crore) ] : ");     //Taking Input From Users
    scanf("%d", &num);


if(num == 0 || num == 10000000) {

    if(num == 0)
    printf(" Zero "); 
    
    else if(num == 10000000)
    printf(" One Crore ");

}    // If the number is 0 or 10000000, print its word representation


else if(num>=1 && num<=9) {          // If the number is between 1 and 9, print its word representation
onedigit(num);  }

else if(num>=11 && num<=19) {   // If the number is between 11 and 19, print its word representation
    teens(num);   }


else if (num >= 20 && num <= 99 || num == 10) {   // If the number is between 20 and 99 or the num is 10, print its word representation
    digit1 = num / 10;
    tens(digit1); 
    digit2 = num % 10;
    onedigit(digit2); }


else if (num > 99 && num <= 999)    // If the number is between 99 and 999, print its word representation
{
    x = num / 10;
    digit1 = x / 10;
    Hundreds(digit1);
    digit2 = x % 10;

        if (digit2 == 1) {
        y = num % 100; 
            if(y == 10) {
            printf("Ten"); }
            else {  
            teens(y); }          }

        else {   
        tens(digit2);
        digit3 = num % 10;
        onedigit(digit3);  }
}


else if (num > 999 && num <= 9999) {     // If the number is between 999 and 9999, print its word representation
digit1 = num/1000;
Thousands(digit1);
digit2 = (num/100) % 10;
Hundreds(digit2);
digit3 = (num/10) % 10;
    if(digit3==1) {
    y = num % 100;
            if(y == 10) {
            printf("Ten"); }
            else {  
            teens(y); }
}
    else {   
        tens(digit3);
        digit4 = num % 10;
        onedigit(digit4);  }
}


else if (num > 9999 && num <= 99999) {      // If the number is between 9999 and 99999, print its word representation
digit1_2 = num/1000;
if(digit1_2>=10 && digit1_2<=19 ) {
    if(digit1_2==10) {
        printf("Ten Thousand "); }  

    else if(digit1_2>=11 && digit1_2<=19) {
     TeenThousands(digit1_2);  }
}

digit1 = num/10000; 
if(digit1!=1) {
tens(digit1); 
digit2 = (num/1000) % 10;
if(digit2 == 0) {
    printf(" Thousand "); }
else {
    Thousands(digit2); }
                            }

digit3 = (num/100) % 10;
Hundreds(digit3);
digit4 = (num/10) % 10;
    if(digit4==1) {
    y = num % 100;
            if(y == 10) {
            printf("Ten"); }
            else {  
            teens(y); }
    }
    else {   
        tens(digit4);
        digit5 = num % 10;
        onedigit(digit5);  }

}


//New Logic for these
else if (num > 99999 && num <= 999999) {      // If the number is between 99999 and 999999, print its word representation
lakhs_1 = num/100000;
lakhs(lakhs_1);
num = num%100000;

//from here copy paste of num > 9999 && num <= 99999 condition
digit1_2 = num/1000;
if(digit1_2>=10 && digit1_2<=19 ) {
    if(digit1_2==10) {
        printf("Ten Thousand "); }  

    else if(digit1_2>=11 && digit1_2<=19) {
     TeenThousands(digit1_2);  }                    }

 else {
digit1 = num/10000; 
//if(digit1!=1 && digit1!=0) {
tens(digit1); 
digit2 = (num/1000) % 10;
    if(digit2 == 0 && digit1!=0) {
         printf(" Thousand "); }
    else {
         Thousands(digit2); }
}

digit3 = (num/100) % 10;
Hundreds(digit3);
digit4 = (num/10) % 10;
    if(digit4==1) {
    y = num % 100;
            if(y == 10) {
             printf("Ten"); }
            else {  
              teens(y); }               
    }
    else {   
        tens(digit4);
        digit5 = num % 10;
        onedigit(digit5);  }
        
}


else if (num > 999999 && num <= 9999999) {      // If the number is between 999999 and 9999999, print its word representation
lakhs1_2 = num/100000;

if(lakhs1_2>=10 && lakhs1_2<=19 ) {
    if(lakhs1_2==10) {
        printf("Ten Lakhs "); }  

    else if(lakhs1_2>=11 && lakhs1_2<=19) {
     TeenLakhs(lakhs1_2);  }                    }


lakhs_10 = num/1000000; 
if(lakhs_10!=1) {
tens(lakhs_10); 
lakhs_1 = (num/100000) % 10;
if(lakhs_1 == 0) {
    printf(" Lakhs "); }
else {
    lakhs(lakhs_1); }
                            }

num = num%100000;

digit1_2 = num/1000;
if(digit1_2>=10 && digit1_2<=19 ) {
    if(digit1_2==10) {
        printf("Ten Thousand "); }  

    else if(digit1_2>=11 && digit1_2<=19) {
     TeenThousands(digit1_2);  }                    }

 else {
digit1 = num/10000; 
//if(digit1!=1 && digit1!=0) {
tens(digit1); 
digit2 = (num/1000) % 10;
    if(digit2 == 0 && digit1!=0) {
         printf(" Thousand "); }
    else {
         Thousands(digit2); }
}

digit3 = (num/100) % 10;
Hundreds(digit3);
digit4 = (num/10) % 10;
    if(digit4==1) {
    y = num % 100;
            if(y == 10) {
             printf("Ten"); }
            else {  
              teens(y); }               
    }
    else {   
        tens(digit4);
        digit5 = num % 10;
        onedigit(digit5);  }

}



    else {   // Handle invalid input by playing a beep sound, displaying an error message, and returning to the input prompt.
            Beep(700, 800);
             printf(" Invalid Input, Please Enter a Number Between [0 - 10000000(one crore) ] \n\n");
             goto home;   } 



// Ask the user if they want to restart the program. If 'y' or 'Y' is entered, clear the screen and restart. Otherwise, exit with a thank you message.

printf("\n\n Are You Want To Restart it? \n Press y For yes [or] Press n for no : ");
fflush(stdin);
scanf("%c",&a);
if(a == 'y' || a == 'Y') {
    system("cls");
    goto home;  }
else {
    printf("Thanks For Testing our Program...! \n\n");  }


    return 0;
}