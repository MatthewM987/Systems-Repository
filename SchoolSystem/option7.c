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

void option7(Node *listHead, char catagories[4][20]) {
	Node *traversePtr = listHead;

	if(listHead == NULL) {
		printf("no student records\n");
		return;
	}

	printf("\nCalculating final grades for all students...\n");
	//iterates through all student nodes,calculates their final grade
	while(traversePtr != NULL) {

       		traversePtr->Student.Cat1.Cumulative = getCumulative(&traversePtr->Student.Cat1);
        	traversePtr->Student.Cat2.Cumulative = getCumulative(&traversePtr->Student.Cat2);
        	traversePtr->Student.Cat3.Cumulative = getCumulative(&traversePtr->Student.Cat3);
        	traversePtr->Student.Cat4.Cumulative = getCumulative(&traversePtr->Student.Cat4);

		calcFinalGrades(&traversePtr->Student);
		traversePtr = traversePtr->next;
	}

	printHeader(catagories);

	traversePtr = listHead;

	//prints data for all students
	while(traversePtr != NULL) {

		printStudent(traversePtr);
		traversePtr = traversePtr->next;
	}
		
}
