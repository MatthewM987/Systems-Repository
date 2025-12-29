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

void option5(Node *listHead, char catagories[4][20]) {
	Node *traversePtr = listHead;
	
	if(listHead == NULL) {
		printf("no student records");
		return;
	}

	
	//same as option 4 but iterates through all students and prints all recalculations
	while(traversePtr != 0) {

		traversePtr->Student.Cat1.Cumulative = getCumulative(&traversePtr->Student.Cat1);
			traversePtr->Student.Cat2.Cumulative = getCumulative(&traversePtr->Student.Cat2);
			traversePtr->Student.Cat3.Cumulative = getCumulative(&traversePtr->Student.Cat3);
			traversePtr->Student.Cat4.Cumulative = getCumulative(&traversePtr->Student.Cat4);
			calcCurrentGrade(&traversePtr->Student);

		traversePtr->Student.Final_Grade = -1;

		printf("Student Name: %s ", traversePtr->Student.student_name);
	
		printf("%s Cumulative: %.2f\t", catagories[0], traversePtr->Student.Cat1.Cumulative);
		printf("%s Cumulative: %.2f\t", catagories[1], traversePtr->Student.Cat2.Cumulative);
		printf("%s Cumulative: %.2f\t", catagories[2], traversePtr->Student.Cat3.Cumulative);
		printf("%s Cumulative: %.2f\t", catagories[3], traversePtr->Student.Cat4.Cumulative);
		printf(" Current Grade: %.2f\n", traversePtr->Student.Current_Grade);

		traversePtr = traversePtr -> next;
	}
}
