/**
 *Program to convert Decimal Numbers into their roman Value.
 *Date Created : 08/07/16:3:30.P.M
 *Written By: Dean M. Angco
 */
#include <stdio.h>
int main(){

    //Variable Declaration
    int number;//Variable to Store user input
    int thousands;//Variable to Store number divided by 1000;
    int hundreds;//Variable to Store number divided by 100;
    int tens;//Variable to Store number divided by 10;
    int ones;//Variable to Store number divided by 1;
    int temp=0;//Variable for controlling the for loop

    printf("Enter Number to Convert:");
    scanf("%d",&number);//get user input

    if(number>999 && number <4000){//if number is between 1000-4000 do the following block of code
        thousands = number/1000; //divide the user input by 1000, here we can only get a maximum of 3
        for(temp=1;temp<=thousands;temp++){//loop starting from 1 until reaches the value of variable 'thousand'
            printf("M");//No additional condition for we'll only be getting numbers below 4k which is MMM in roman
        }
        number%=1000;//Modulo operation:gets the remainder then assign it to 'number' variable
    }
    
    if(number>99){//if number is between 99 - 1000 do the following block of code
        hundreds = number/100;//divide the user input by 1000,
        if(hundreds<=3){//if 'hundreds' is < 4,such as 1,2,3 proceed to for loop
            for(temp = 1;temp<=hundreds ;temp++){
                printf("C");//100
            }
        }
        if(hundreds==4){//if hundreds is exactly equal to 4
            printf("CD");//400
        }
        if(hundreds>=5 && hundreds < 9){//if 'hundreds' is equal to 5,Display D
            printf("D");//500
            for(temp=0;temp<hundreds-5;temp++){//do this portion if 'hundreds' is not equal to zero when less with '5'
                printf("C");
            }
        }
        if(hundreds == 9){//if 'hundreds' is exactly equal to 9
            printf("CM");
        }

        number%=100;//Modulo Operation.Get the remainder and assign it as a new value to 'number'
    }
    
    if(number>9){//if 'number' is greater than 9
        tens = number/10;//divide number by 10 and assign to 'tens'
        if(tens<=3){//if 'tens' is < 4,such as 1,2,3 proceed to for loop
            for(temp = 1;temp<=tens ;temp++){//loop starting from 1 until reaches the value of variable 'tens'
                printf("X" );//10,20,30
            }
        }
        if(tens==4){
            printf("XL");//40
        }
        if(tens>=5 && tens < 9){
            printf("L");//50,60,70,80
            for(temp=0;temp<tens-5;temp++){//do this portion if 'tens' is not equal to zero when less with '5'
                printf("X");
            }
        }
        if(tens == 9){//if 'tens' is exactly equal to 9
            printf("XC");
        }
    number%=10;//Modulo Operation.Get the remainder and assign it as a new value to 'number'
    }
    
    if(number<10){
    ones = number/1;//divide number by 1 and assign to 'ones'
        if(ones<=3){
            for(temp = 1;temp<=ones ;temp++){//loop starting from 1 until reaches the value of variable 'ones'
                printf("I");//1,2,3
            }
        }
        if(ones==4){
            printf("IV");//4
        }
        if(ones>=5 && ones < 9){//if 'ones' is equal to 5,Display V
            printf("V");//5,6,7,8
            for(temp=0;temp<ones-5;temp++){//do this portion if 'ones' is not equal to zero when less with '5'
                printf("I");
            }
        }
        if(ones == 9){//if 'ones' is exactly equal to 9
            printf("IX");
        }
    }
}
