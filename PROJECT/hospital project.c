typedef struct {
    char name[50];
    char disease[50];
    int serial_number;
    char phone_number[15];
    char billing_method[20];
    char patient_type[20];
} Patient;
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PATIENTS 100

typedef struct {
    char name[50];
    char disease[50];
    int serial_number;
    char phone_number[15];
    char billing_method[20];
    char patient_type[20];
} Patient;

Patient patient_list[MAX_PATIENTS];
int num_patients = 0;

void add_patient() {
    Patient new_patient;
    printf("Enter patient name: ");
    scanf("%s", new_patient.name);
    printf("Enter diagnosed disease: ");
    scanf("%s", new_patient.disease);
    printf("Enter serial number: ");
    scanf("%d", &new_patient.serial_number);
    printf("Enter phone number: ");
    scanf("%s", new_patient.phone_number);
    printf("Enter means of billing: ");
    scanf("%s", new_patient.billing_method);
    printf("Enter type of patient: ");
    scanf("%s", new_patient.patient_type);
    patient_list[num_patients] = new_patient;
    num_patients++;
}

void search_patient() {
    int serial_number;
    printf("Enter serial number of patient to search: ");
    scanf("%d", &serial_number);
    for (int i = 0; i < num_patients; i++) {
        if (patient_list[i].serial_number == serial_number) {
            printf("Patient name: %s\n", patient_list[i].name);
            printf("Diagnosed disease: %s\n", patient_list[i].disease);
            printf("Serial number: %d\n", patient_list[i].serial_number);
            printf("Phone number: %s\n", patient_list[i].phone_number);
            printf("Means of billing: %s\n", patient_list[i].billing_method);
            printf("Type of patient: %s\n", patient_list[i].patient_type);
            return;
        }
    }
    printf("Patient not found\n");
}

void update_patient() {
    int serial_number;
    printf("Enter serial number of patient to update: ");
    scanf("%d", &serial_number);
    for (int i = 0; i < num_patients; i++) {
        if (patient_list[i].serial_number == serial_number) {
            printf("Enter new patient name: ");
            scanf("%s", patient_list[i].name);
            printf("Enter new diagnosed disease: ");
            scanf("%s", patient_list[i].disease);
            printf("Enter new phone number: ");
            scanf("%s", patient_list[i].phone_number);
            printf("Enter new means of billing: ");
            scanf("%s", patient_list[i].billing_method);
            printf("Enter new type of patient: ");
            scanf("%s", patient_list[i].patient_type);
            printf("Patient updated\n");
            return;
        }
    }
    printf("Patient not found\n");
}

void delete_patient() {
    int serial_number;

