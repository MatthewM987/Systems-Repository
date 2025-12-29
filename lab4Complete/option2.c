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

void option2(Node *listHead, char catagories[4][20]) {
	char lastName[40];
	Node *traversePtr = listHead;
	Node *matches[100];
	int matchCount = 0;
	int choice;

	printf("Enter the Student's last name: ");
	scanf("%s", lastName);

	printf("Hunting for %s\n", lastName);
	
	//fills array with all last names containing that substring
	while(traversePtr != NULL) {
		if(strstr(traversePtr->Student.student_name, lastName) != NULL) {
			matches[matchCount] = traversePtr;
			matchCount++;
		}
		traversePtr = traversePtr->next;
	}

	if(matchCount == 0) {
		printf("error, no student with that name was found\n");
		return;
	}
	//lets user choose which of the matching students that they want to print
	if(matchCount > 1) {
	
		printf("there are more then one student with that name \n");
		for (int i = 0; i < matchCount; i++) {
			printf("%d) %s\n", i+1, matches[i]->Student.student_name);
		}

		printf("please indicate which student you would like: ");
		scanf("%d", &choice);
	
		if(choice < 1 || choice > matchCount) {
			printf("error invalid choice\n");
			return;
		}
		traversePtr = matches[choice - 1];
	} else {
		traversePtr = matches[0];
	}
	//updates all cumulatives for cats and current grade as well as print student info
	traversePtr->Student.Cat1.Cumulative = getCumulative(&traversePtr->Student.Cat1);
    	traversePtr->Student.Cat2.Cumulative = getCumulative(&traversePtr->Student.Cat2);
    	traversePtr->Student.Cat3.Cumulative = getCumulative(&traversePtr->Student.Cat3);
    	traversePtr->Student.Cat4.Cumulative = getCumulative(&traversePtr->Student.Cat4);
			
	calcCurrentGrade(&traversePtr->Student);

	printHeader(catagories);
	printStudent(traversePtr);
}	

