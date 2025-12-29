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

void option6(Node *listHead, char catagories[4][20]) {
	int student_ID, catagory, position, confirm;
	float score;

	Node *traversePtr = listHead;

	printf("Enter the Student ID #: ");
	scanf("%d", &student_ID);

	printf("Hunting for %d\n", student_ID);
	//searches for student node in list
	while(traversePtr != 0) {	
		//if student is found, user is propted to update a specific score for the student
		if(traversePtr->Student.student_ID == student_ID) {
			printf("Insert a Score for %s ? Enter 1, if yes. Enter 2, if no: ", traversePtr->Student.student_name);
			scanf("%d", &confirm);

			if(confirm != 1) {
				return;
			}

			printf("which catagory?\n");
			printf("1) %s\n2) %s\n3) %s\n4) %s\n", catagories[0], catagories[1], catagories[2], catagories[3]);
			scanf("%d", &catagory);

			printf("Which score?\n Enter 1, 2, or 3\n");
			scanf("%d", &position);

			printf("Enter new Score: ");
			scanf("%f", &score);

			struct Cat_Grade *cat = NULL;
			//switch used to update correct cat in correct position efficiently
			switch(catagory) {
				case 1: cat = &traversePtr->Student.Cat1; break;
				case 2: cat = &traversePtr->Student.Cat2; break;
				case 3: cat = &traversePtr->Student.Cat3; break;
				case 4: cat = &traversePtr->Student.Cat4; break;
				default:
					printf("error invalid catagory\n");
					return;
			}

			switch (position) {
				case 1: cat->score1 = score; break;
				case 2: cat->score2 = score; break;
				case 3: cat->score3 = score; break;
				default:
					printf("error invalid position\n");
					return;
			}
			printHeader(catagories);
			printStudent(traversePtr);
		
			printf("Note: Category Cums, Current Grade and Final Grade have not been recalculated based on the new value entered.\n");

			return;
		}
		traversePtr = traversePtr->next;
	}
	printf("error student ID not found\n");

	
}
