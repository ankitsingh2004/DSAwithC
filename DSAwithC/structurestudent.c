#include <stdio.h>
struct student
{
    char firstname[50];
    int rollno;
    float marks;
};
int main()
{
    int n;
    printf("enter the number of students:\n");
    scanf("%d", &n);
    struct student s1[n];
    printf("enter the information of students :");
    for (int i = 0; i < n; i++)
    {
        printf("for roll number %d:\n", i + 1);

        printf("enter the firtname:\n");
        scanf("%s", &s1[i].firstname);
        printf("enter the marks :\n");
        scanf("%f", &s1[i].marks);
    }
    printf("displaying information :\n ");
    for (int i = 0; i < n; i++)
    {
        printf("rollno: %d\n", i + 1);
        printf("first name :%s\n", s1[i].firstname);
        printf("marks:,%.1f\n", s1[i].marks);
        return 0;
    }
}