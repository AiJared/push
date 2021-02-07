#include<stdio.h>
int main()
{
    int student_position;
    scanf("%d", &student_position);
    switch(student_position)
    {
    case 1:
        printf("Position 1= Reg No 0798\n");
    case 2:
        printf("Position 2= Reg No 0799\n");
    case 3:
        printf("Position 3= Reg No 0780\n");
    case 4:
        printf("Position 4= Reg No 0763\n");
    case 5:
        printf("Position 5= Reg No 0750\n");
        break;
    default:
        printf("Invalid Entry\n");
    }
    return 0;
}
