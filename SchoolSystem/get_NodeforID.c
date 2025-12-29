/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include <stdio.h>
#include <stdlib.h>

#include "lab4.h"

Node* get_NodeforID(Node *listHeadPtr, int studentID) {
	Node *traversePtr = listHeadPtr;
	//traverse list to find node from inputted ID, returns if found
	while(traversePtr != NULL) {
		printf("%s", traversePtr -> Student.student_name);
		if(traversePtr->Student.student_ID == studentID) {
			return traversePtr;
		}
		traversePtr = traversePtr->next;
	}
	return NULL;
}
