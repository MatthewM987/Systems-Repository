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

void option4(Node *listHead, char catagories[4][20]) {
	int student_ID;
	Node *traversePtr = listHead;

	printf("What is the student ID for the scores you want to recalculate?\n");
	printf("Student ID: ");
	scanf("%d", &student_ID);
	//finds student with given ID and recalculates their cumulative and currents scores
	while(traversePtr != NULL) {
		if(traversePtr->Student.student_ID == student_ID) {
			
			traversePtr->Student.Cat1.Cumulative = getCumulative(&traversePtr->Student.Cat1);
			traversePtr->Student.Cat2.Cumulative = getCumulative(&traversePtr->Student.Cat2);
			traversePtr->Student.Cat3.Cumulative = getCumulative(&traversePtr->Student.Cat3);
			traversePtr->Student.Cat4.Cumulative = getCumulative(&traversePtr->Student.Cat4);
			calcCurrentGrade(&traversePtr->Student);

			
			//prints out calculated cumulative and current scores
			printf("Recalculated grades for %s, Student ID: %d\n",traversePtr->Student.student_name, student_ID);
			printf("%s Cumulative: %.2f\n", catagories[0], traversePtr->Student.Cat1.Cumulative);
			printf("%s Cumulative: %.2f\n", catagories[1], traversePtr->Student.Cat2.Cumulative);
			printf("%s Cumulative: %.2f\n", catagories[2], traversePtr->Student.Cat3.Cumulative);
			printf("%s Cumulative: %.2f\n", catagories[3], traversePtr->Student.Cat4.Cumulative);

			printf("Current Grafe is: %.2f\n", traversePtr->Student.Current_Grade);

			traversePtr->Student.Final_Grade = -1;
			printf("Students final grade was deleted\n");

			return;
		
		}
		traversePtr = traversePtr->next;
	}
	printf("error student ID not found.\n");
}
