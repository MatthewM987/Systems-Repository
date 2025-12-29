/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include <stdio.h>
#include <stdlib.h>

#include "lab4.h"

void option1(Node *listHeadPtr, char catagories[4][20]) {

	int student_ID;
	Node *traversePtr = listHeadPtr;

	printf("Enter the Student ID #: ");
	scanf("%d", &student_ID);
	
	printf("Hunting for %d\n", student_ID);

	while(traversePtr != NULL) {
		if(traversePtr->Student.student_ID == student_ID) {
			//print header using helper
			printHeader(catagories);
			//assigns Cat Cumulative values using helper
			traversePtr->Student.Cat1.Cumulative = getCumulative(&traversePtr->Student.Cat1);
    			traversePtr->Student.Cat2.Cumulative = getCumulative(&traversePtr->Student.Cat2);
    			traversePtr->Student.Cat3.Cumulative = getCumulative(&traversePtr->Student.Cat3);
    			traversePtr->Student.Cat4.Cumulative = getCumulative(&traversePtr->Student.Cat4);
			//assigns current grade using helper
			calcCurrentGrade(&traversePtr->Student);


			//prints student info
			printStudent(traversePtr);

			//terminate function once student is found
			return;

		}

		traversePtr = traversePtr->next;

	
	}

	printf("couldnt find student with id %d. \n", student_ID);
}
