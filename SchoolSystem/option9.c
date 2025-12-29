/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include "lab4.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void option9(Node **listHeadPtr) {
	int student_ID;
	int confirm = 0;
	Node *traversePtr = *listHeadPtr;
	Node *prevPtr = NULL;
	char student_name[40];
	int found = 0;

	printf("Please enter the student ID number you with to delete followed by an enter.\n");
	scanf("%d", &student_ID);
	//traverses list looking for ID to delete, ends loop once found
	while(traversePtr != NULL) {
		if(traversePtr->Student.student_ID == student_ID) {
			strcpy(student_name, traversePtr->Student.student_name);
			found = 1;
			break;
		}
		prevPtr = traversePtr;
		traversePtr = traversePtr->next;
	}
	
	if (found == 0) {
		printf("error student ID not found in list\n");
		return;
	}

	printf("Do you really want to delete student ID number %d, %s?\n", traversePtr->Student.student_ID, traversePtr->Student.student_name);

	printf("if yes, enter 1. if no, enter 2: ");
	scanf("%d", &confirm);
	
	if(confirm != 1) {
		return;
	}
	//handles case where list only has one element and if not deletes and rebuilds list
	if(prevPtr == NULL) {
		*listHeadPtr = traversePtr->next;

	} else {
		prevPtr->next = traversePtr->next;
	}
	//free allocated memory for node
	free(traversePtr);
	printf("Student ID number %d, %s has been deleted.\n", student_ID, student_name);
	
}
