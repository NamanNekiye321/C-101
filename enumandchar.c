#include <stdio.h>
#include <stdbool.h>

int main() {
    
    enum primaryColor {red, yellow, blue};
    enum primaryColor myColor, gregsColor;

    myColor = red;

    enum month {January, February, March, April, May, June, July, August, September, October, November, December};
    enum month myBirthdayMonth;

    myBirthdayMonth = August;

    printf("My birtday month is 11th %d\n", myBirthdayMonth);


    printf("Hello World");




    char broiled ;
    broiled = 't';

    printf("value of it is %c\n", broiled);


    char asci = 66;
    printf("value of it is %c\n", asci);




    enum gender {male, female};
    enum gender myGender = male;

    enum gender  anotherGender = female;

    bool isMale = (myGender == anotherGender);


    printf("myGender is equal to anotherGender: %d\n ", isMale);


    char myCharacter = '\n';

    printf("%c", myCharacter);





    
    









    return 0;
}