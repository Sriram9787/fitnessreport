#include <stdio.h>
#include <string.h>

int main(){
    char name[30],sex[10];
    int rollno,age;
    float weight,height,heightmeter;
    float heightinmeter,bmi;
    printf("*******************************************\n");
    printf("           ENTER STUDENT DETAILS           \n");
    printf("*******************************************\n");
    printf("Enter student name:");
    gets(name);
    printf("Enter student roll No:");
    scanf("%d",&rollno);
    printf("Enter student age:");
    scanf("%d",&age);
    printf("Enter student sex[male/female]:");
    scanf("%s",&sex);
    printf("Enter student weight:");
    scanf("%f",&weight);
    printf("Enter student height:");
    scanf("%f",&height);
    heightinmeter=height/100;
    bmi=weight/(heightinmeter*heightinmeter);
    
 printf("\n");
 printf("___________________________________________\n");
 printf("Calculating BMI....................\n");
 printf("Generating fitness report..........\n");
 printf("___________________________________________\n");
 printf("    FITNESS & GAME ALLOCATION REPORT    \n");
 printf("               2021-2022                   \n");
 printf("___________________________________________\n");
 printf("NAME:      %s\n",name);
 printf("ROLL NO:   %d\n",rollno);
 printf("AGE:       %d\n",age);
 printf("SEX:       %s\n",sex);
 printf("WEIGHT:    %.2fkg\n",weight);
 printf("HEIGHT:    %.2fcm\n",height);
 printf("BMI:       %.2f\n",bmi);
 printf("___________________________________________\n");
if (strcmp(sex, "male") == 0 && height<150 && age>12 ){
        printf("\"Congratulations! %s \" \nYou have been selected to play for \nKho-Kho Team \n",&name);
    }
    else if(height>170){
        printf("\"Congratulations! %s \" \nYou have been selected to play for \nBasket ball Team \n",&name);
    }
     else if (strcmp(sex, "male") ==0 && (height<=170 || height>=160) && age>12){
        printf("Sorry there is no game available for you\n",&name);
     }
    else if (strcmp(sex, "female") ==0 && (height<=170 || height>=160) && age>12){
        printf("\"Congratulations! %s \" \nYou have been selected to play for \nHand ball Team \n",&name);
    }
    else if (age<=12){
        printf("\"Congratulations! %s \" \nYou have been selected to play for \nSupport Team \n",&name);
    }   
 printf("___________________________________________\n");


if ( bmi>=25 && strcmp(sex, "male") == 0 ){
    printf("Warning!:Your BMI is not upto the mark\nEnroll in fitness Program for 1 month\ninorder to join the team if selected.\n");
}
else if (bmi>=24 && strcmp(sex, "female") == 0 ){
   printf("Warning!:Your BMI is not upto the mark\nEnroll in fitness Program for 1 month\ninorder to join the team if selected.\n");
}


printf("___________________________________________\n");
printf("  <<CODED BY SRIRAM THANGAVEL(2002098)>>   \n");
printf("___________________________________________\n");

return 0;
}