#ifndef PATIENT_H
#define PATIENT_H

struct Patient
{
    int id;
    char name[50];
    int age;
    char disease[50];
};

void addPatient();
void viewPatients();
void searchPatient();

#endif
