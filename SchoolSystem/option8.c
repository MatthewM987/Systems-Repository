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

void option8(Node **listHeadPtr, char catagories[4][20]) {
	Node *newNode = (Node *)malloc(sizeof(Node));
	if(newNode == NULL) {
		printf("error allocating memory\n");
		return;
	}
	newNode->next = NULL;
	
	while(getchar() != '\n');
	//prompts and collects all parts of student data required to make a new node
	printf("Enter Students name: ");
	fgets(newNode->Student.student_name, sizeof(newNode->Student.student_name), stdin);
	newNode->Student.student_name[strcspn(newNode->Student.student_name, "\n")] = '\0';

	printf("Enter Student ID number: ");
	scanf("%d", &newNode->Student.student_ID);
	
	printf("Enter first %s score (use -1 if there is no score): ", catagories[0]);
    	scanf("%f", &newNode->Student.Cat1.score1);
    	printf("Enter second %s score (use -1 if there is no score): ", catagories[0]);
    	scanf("%f", &newNode->Student.Cat1.score2);
    	printf("Enter third %s score (use -1 if there is no score): ", catagories[0]);
    	scanf("%f", &newNode->Student.Cat1.score3);

	printf("Enter first %s score (use -1 if there is no score): ", catagories[1]);
    	scanf("%f", &newNode->Student.Cat2.score1);
    	printf("Enter second %s score (use -1 if there is no score): ", catagories[1]);
    	scanf("%f", &newNode->Student.Cat2.score2);
    	printf("Enter third %s score (use -1 if there is no score): ", catagories[1]);
    	scanf("%f", &newNode->Student.Cat2.score3);

	printf("Enter first %s score (use -1 if there is no score): ", catagories[2]);
    	scanf("%f", &newNode->Student.Cat3.score1);
    	printf("Enter second %s score (use -1 if there is no score): ", catagories[2]);
    	scanf("%f", &newNode->Student.Cat3.score2);
    	printf("Enter third %s score (use -1 if there is no score): ", catagories[2]);
    	scanf("%f", &newNode->Student.Cat3.score3);

	printf("Enter first %s score (use -1 if there is no score): ", catagories[3]);
    	scanf("%f", &newNode->Student.Cat4.score1);
    	printf("Enter second %s score (use -1 if there is no score): ", catagories[3]);
    	scanf("%f", &newNode->Student.Cat4.score2);
    	printf("Enter third %s score (use -1 if there is no score): ", catagories[3]);
    	scanf("%f", &newNode->Student.Cat4.score3);
	//calculates cumulatives for new student node
	newNode->Student.Cat1.Cumulative = getCumulative(&newNode->Student.Cat1);
	newNode->Student.Cat2.Cumulative = getCumulative(&newNode->Student.Cat2);
	newNode->Student.Cat3.Cumulative = getCumulative(&newNode->Student.Cat3);
	newNode->Student.Cat4.Cumulative = getCumulative(&newNode->Student.Cat4);
	//inserts student node into the list 
	insert(listHeadPtr, newNode);
	//print student info
	printf("\n Student has been added with the following information:\n");
	printHeader(catagories);
	printStudent(newNode);




}
