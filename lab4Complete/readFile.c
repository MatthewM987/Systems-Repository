/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lab4.h"

void readFile(const char *filename, char catagories[4][20], int *count, Node **listHeadPtr) {
	FILE *fp = fopen(filename, "r");
	Node *newNode;
	char line[100];
	//confirms file is not empty
	if( fp == NULL) {
		printf("error opening file \n");
		exit(1);
	}
	//check and reads catagory names, exits program if there are no catagories
	if(fgets(line, sizeof(line), fp) == NULL) {
		printf("error reading catagories\n");
		fclose(fp);
		exit(1);
	}
	//put catagory names into catagories array
	sscanf(line, "%s %s %s %s", catagories[0], catagories[1], catagories[2], catagories[3]);
	
	//count for main method
	*count = 0;
	//iterates through entire
	while(1) {
		//allocate space for temp node to be added to list, space freed in main method
		newNode = (Node *)malloc(sizeof(Node));
	
		if(newNode == NULL) {
			printf("error allocaing memory\n");
			fclose(fp);
			exit(1);
		}
		//sets next and final grade to default values
		newNode->Student.Final_Grade = -1;
		newNode->next = NULL;

		//checks for a name on next line, if there is no name, terminated loop
		if(fgets(newNode->Student.student_name, 40, fp) == NULL) {
			free(newNode);
			break;
		}
		//removes newline from the end of student name
		newNode->Student.student_name[strcspn(newNode->Student.student_name, "\n")] = '\0';

		int length = strlen(newNode->Student.student_name);

		
		//checks for ID, if it exists, it populates Student.student_ID
		if(fscanf(fp, "%d", &newNode->Student.student_ID) != 1) {
			free(newNode);
			break;
		}

		//checks for Cat scores, if it exists, it populates Student.Cat, same for next 3 if statements
		if(fscanf(fp, "%f %f %f", &newNode->Student.Cat1.score1, &newNode->Student.Cat1.score2,&newNode->Student.Cat1.score3) != 3) {
			free(newNode);
			break;

		}

		if(fscanf(fp, "%f %f %f", &newNode->Student.Cat2.score1, &newNode->Student.Cat2.score2,&newNode->Student.Cat2.score3) != 3) {
			free(newNode);
			break;

		}

		if(fscanf(fp, "%f %f %f", &newNode->Student.Cat3.score1, &newNode->Student.Cat3.score2,&newNode->Student.Cat3.score3) != 3) {
			free(newNode);
			break;

		}

		if(fscanf(fp, "%f %f %f", &newNode->Student.Cat4.score1, &newNode->Student.Cat4.score2,&newNode->Student.Cat4.score3) != 3) {
			free(newNode);
			break;

		}
		//inserts newly made node into list
		insert(listHeadPtr, newNode);
		(*count)++;

		fgetc(fp);
	}

	fclose(fp);


}


		

