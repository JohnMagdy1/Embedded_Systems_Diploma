#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "stdbool.h"

struct S_Data{
    int ID;
    char name[40];
    float height;
};

struct S_Student{
    struct S_Data std_data;
    struct S_Student* P_nxt_std;
};

struct S_Student* head = NULL;

void addStudent(){
    struct S_Student* P_new_std = (struct S_Student*) malloc(sizeof(struct S_Student));
    struct S_Student* temp;
    bool uniqueID = false;
    char temp_txt[40];
    
    fflush(stdin); fflush(stdout);
    while(!uniqueID){
        uniqueID = true;
        printf("\nEnter the Student ID: ");
        gets(temp_txt);
        temp = head;
        while(head && temp) {
            if(atoi(temp_txt) == temp->std_data.ID) {
                printf("\nThis ID is already taken");
                uniqueID = false;
            }
            temp = temp->P_nxt_std;
        }
    }
    P_new_std->std_data.ID = atoi(temp_txt);

    printf("\nEnter the Student Name: ");
    gets(P_new_std->std_data.name);

    printf("\nEnter the Student Height: ");
    gets(temp_txt);
    P_new_std->std_data.height = atof(temp_txt);

    if(!head){                          /* if list is empty */
        head = P_new_std;
    }
    else{                               /* if list contains elements */
        temp = head;
        while(temp->P_nxt_std) temp = temp->P_nxt_std;
        temp->P_nxt_std = P_new_std;
    }
    printf("\nStudent is added successfully");
    P_new_std->P_nxt_std = NULL;
}

void delete_student(){
    char temp_txt[40];

    if(!head) {printf("\nlist is empty"); return;}
    
    fflush(stdin); fflush(stdout);
    printf("\nEnter the Student ID: ");
    gets(temp_txt);

    unsigned int input_ID = atoi(temp_txt);
    
    struct S_Student* P_selected_std = head;
    struct S_Student* P_prev_std = NULL;
    
    while(P_selected_std){
        //printf("\ncomparing given id %d with %d", input_ID, P_selected_std->std_data.ID);
        if(P_selected_std->std_data.ID == input_ID){
            /* if selected is not the first element then change the next pointer of the element before the selected*/
            if(P_prev_std) P_prev_std->P_nxt_std = P_selected_std->P_nxt_std;
            /* if selected is the first element then make the head points to the element after it*/
            else head = P_selected_std->P_nxt_std;                                      
            free(P_selected_std);
            printf("Student Deleted successfully");
            return;
        }    
        P_prev_std = P_selected_std;
        P_selected_std = P_selected_std->P_nxt_std;
    }

    printf("Can't find this student ID");
}

void view_records(){

    if(!head) {printf("\nlist is empty"); return;}
    
    struct S_Student* temp = head;
    int count = 0;
    while(temp) {
        if(count) printf("\n");
        printf("\nRecord number %d :", ++count);
        printf("\n------------------");
        printf("\nStudent Name: %s", temp->std_data.name);
        printf("\nStudent ID: %d", temp->std_data.ID);
        printf("\nStudent Height: %f", temp->std_data.height);

        temp = temp->P_nxt_std;
    }
}

void delete_all(){
    
    if(!head) {printf("\nlist is empty"); return;}

    struct S_Student* temp = head;
    struct S_Student* temp2 = temp;
    int count = 0;
    
    while(temp) {
        temp2 = temp;       
        temp = temp->P_nxt_std;
        free(temp2);
    }
    printf("\nDatabase is deleted successfully");
    head = NULL;
}

void main(){
    int choice = 0;
    while(choice != 5){
        printf("\n======================================================");
        printf("\n \t choose from the following options \n");
        printf("\n1 -> Add Student");   
        printf("\n2 -> Delete Student");
        printf("\n3 -> View Records");
        printf("\n4 -> Delete all records");
        printf("\n5 -> Close program");

        printf("\nEnter Option Number : ");
        scanf("%d", &choice);

        printf("======================================================");

        switch(choice){
            case 1:
                addStudent(); break;

            case 2: 
                delete_student(); break;

            case 3: 
                view_records(); break;

            case 4: 
                delete_all(); break;
            
            case 5: 
                printf("\nit was nice to see you, have a good day"); break;

            default:
                printf("Non Valid Choice");
        }

    }
}