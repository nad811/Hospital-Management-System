#include <stdio.h>
#include "patient.h"
#include "utils.h"

int main()
{
    int choice;

    while(1)
    {
        printf("\n========================\n");
        printf(" HOSPITAL SYSTEM\n");
        printf("========================\n");

        printf("1. Add Patient\n");
        printf("2. View Patients\n");
        printf("3. Search Patient\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice == 1)
        {
            addPatient();
        }
        else if(choice == 2)
        {
            viewPatients();
        }
        else if(choice == 3)
        {
            searchPatient();
        }
        else if(choice == 4)
        {
            printf("Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice!\n");
        }
    }

    return 0;
}
