#include <stdio.h>
int main()
{
    int choice,choice_2,choice_3,choice_4,choice_5,choice_6;
    printf("Please enter your desired  department\n");
    printf("1.CSE\n2.EEE\n3.CE\n4.BBA\n5.ENGLISH\n");

    scanf("%d", &choice);

    switch(choice)

    {
    case 1:
        printf("Welcome to the department of CSE\n");
        printf("Press 1 for student info\nPress 2 for teachers info\nPress 3 for lab info\n");
        printf("Please enter your choice\n");
        scanf("%d", &choice_2);
        switch(choice_2)
        {
            case 1:
            printf("In CSE department of BAIUST there are almost 250 students.\n");
            printf("The large number of students for a department of BAIUST.\n");
            printf("There are many facilities for the students.\n");
            break;


            case 2:
            printf("There are total 7 teachers in department OF CSE.\n");
            printf("All of teachers are highly qualified.\n");
            printf("They are very friendly with the students.\n");
            break;

            case 3:
            printf("The labs of BAIUST for CSE department is very up-to-date.\n");
            printf("All facilities are available in labs.\n");
            break;

            default:
            printf("Invalid operation");

        }
    break;


    case 2:
        printf("Welcome to the department of EEE\n");
        printf("Press 1 for student info\nPress 2 for teachers info\nPress 3 for lab info\n");
        printf("Please enter your choice\n");
        scanf("%d", &choice_3);
        switch(choice_3)

        {
            case 1:
            printf("In EEE department of BAIUST there are almost 150 students.\n");
            printf("There are many facilities for the students\n");
            break;


            case 2:
            printf("There are total 7 teachers in department OF CSE.\n");
            printf("All of teachers are highly qualified.\n");
            printf("They are very friendly with the students.\n");
            break;

            case 3:
            printf("The labs of BAIUST for EEE department is very up-to-date.\n");
            printf("All facilities are available in labs.\n");
            break;

            default:
            printf("Invalid operation");
        }

    break;

    case 3:
        printf("Welcome to the department of CE\n");
        printf("Press 1 for student info\nPress 2 for teachers info\nPress 3 for lab info\n");
        printf("Please enter your choice\n");
        scanf("%d", &choice_4);
        switch(choice_4)

        {
            case 1:
            printf("In CE department of BAIUST there are almost 60 students.\n");
            printf("There are many facilities for the students.\n");
            break;


            case 2:
            printf("There are total 3 teachers in department OF CE\n");
            printf("All of teachers are highly qualified\n");
            printf("They are very friendly with the students\n");
            break;

            case 3:
            printf("The labs of BAIUST for CE department is very up-to-date\n");
            printf("All facilities are available in labs \n");
            break;

            default:
            printf("Invalid operation");
        }

    break;

    case 4:
        printf("Welcome to the department of BBA\n");
        printf("Press 1 for student info\nPress 2 for teachers info\nPress 3 for lab info\n");
        printf("Please enter your choice\n");
        scanf("%d", &choice_5);
        switch(choice_5)

        {
            case 1:
            printf("In BBA department of BAIUST there are almost 150 students.\n");
            printf("There are many facilities for the students\n");
            break;


            case 2:
            printf("There are total 7 teachers in department OF CSE\n");
            printf("All of teachers are highly qualified\n");
            printf("They are very friendly with the students\n");
            break;

            case 3:
            printf("English lab is available for department of BBA\n");
            printf("All facilities are available in lab \n");
            break;

            default:
            printf("Invalid operation");
        }

    break;

    case 5:
        printf("Welcome to the department of ENGLISH\n");
        printf("Press 1 for student info\nPress 2 for teachers info\nPress 3 for lab info\n");
        printf("Please enter your choice\n");
        scanf("%d", &choice_6);
        switch(choice_6)

        {
            case 1:
            printf("In ENGLISH department of BAIUST there are almost 50 students.\n");
            printf("There are many facilities for the students.\n");
            break;


            case 2:
            printf("There are total 5 teachers in department OF CSE.\n");
            printf("All of teachers are highly qualified.\n");
            printf("They are very friendly with the students.\n");
            break;

            case 3:
            printf("Language lab is available for ENGLISH students.\n");
            printf("All facilities are available in the lab .\n");
            break;

            default:
            printf("Invalid operation");
        }

    break;

    default:
    printf("Invalid operation");


    }


return 0;
}
