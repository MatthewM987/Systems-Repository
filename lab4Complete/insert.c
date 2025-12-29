/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include <stdio.h>
#include <stdlib.h>

#include "lab4.h"

void insert(Node **listHeadPtr, Node *newNode) {

	Node *traversePtr;
	Node *prevPtr;
	//checks for insertion into an empty list and handles that situation
	if(*listHeadPtr == NULL) {
		newNode->next = NULL;
		*listHeadPtr = newNode;
		return;
	}
	//checks if node should be inserted at front of list
	if(newNode->Student.student_ID < (*listHeadPtr)->Student.student_ID) {
		newNode->next = *listHeadPtr;
		*listHeadPtr = newNode;
		return;
	}
	
	prevPtr = *listHeadPtr;
	traversePtr = (*listHeadPtr)->next;
	//traverses loop to find where node should be inserted
	while(traversePtr != NULL && traversePtr->Student.student_ID < newNode->Student.student_ID) {
		prevPtr = traversePtr;
		traversePtr = traversePtr->next;
		
	}

	prevPtr->next = newNode;
	newNode->next = traversePtr;
}
