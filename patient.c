#include <stdio.h>
#include "patient.h"

struct Patient patients[100];
int count = 0;

void addPatient()
{
    printf("\nEnter Patient ID: ");
    scanf("%d", &patients[count].id);

    printf("Enter Name: ");
    scanf("%s", patients[count].name);

    printf("Enter Age: ");
    scanf("%d", &patients[count].age);

    printf("Enter Disease: ");
    scanf("%s", patients[count].disease);

    count++;

    printf("\nPatient Added Successfully!\n");
}

void viewPatients()
{
    if(count == 0)
    {
        printf("\nNo Patients Found!\n");
        return;
    }

    printf("\n--- Patient Records ---\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nID: %d", patients[i].id);
        printf("\nName: %s", patients[i].name);
        printf("\nAge: %d", patients[i].age);
        printf("\nDisease: %s\n", patients[i].disease);
    }
}

void searchPatient()
{
    int id;

    printf("\nEnter Patient ID: ");
    scanf("%d", &id);

    for(int i = 0; i < count; i++)
    {
        if(patients[i].id == id)
        {
            printf("\nPatient Found!");
            printf("\nName: %s", patients[i].name);
            printf("\nAge: %d", patients[i].age);
            printf("\nDisease: %s\n", patients[i].disease);
            return;
        }
    }

    printf("\nPatient Not Found!\n");
}
