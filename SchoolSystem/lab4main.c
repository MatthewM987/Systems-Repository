/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/

//AUTHOR: MATTHEW H MOLONEY
#include <stdio.h>
#include <stdlib.h>

#include "lab4.h"

int main(int argc, char *argv[]) {

	Node *listHead = NULL;
	int choice;
	int studentCount = 0;
	char catagories[4][20];

	if(argc != 3) {
		return 1;
	}

	readFile(argv[1], catagories, &studentCount, &listHead);

	printf("reading student info from file: %s \n", argv[1]);
	printf("a total of %d students where found in the file", studentCount);

	void (*options[7])(Node *, char [4][20]) = {option1, option2, option3, option4, option5, option6, option7};

	while (1) {
		printf("\n");
        	printf("Please enter an option between 1 and 10:\n");
        	printf("1) Print Student Scores by Student ID\n");
        	printf("2) Print Student Scores by Last Name\n");
        	printf("3) Print Student Scores for All Students\n");
        	printf("4) Recalculate Student Scores for a Single Student ID\n");
        	printf("5) Recalculate All Student Scores\n");
        	printf("6) Insert a score for a specific Student ID\n");
        	printf("7) Calculate Final Grades\n");
        	printf("8) Add a new student\n");
        	printf("9) Delete a student\n");
        	printf("10) Exit Program\n");
        	printf("Option: ");
        
        	scanf("%d", &choice);
        	
		
        	switch (choice) {
            		case 1:
            		case 2:
            		case 3:
            		case 4:
            		case 5:
            		case 6:
            		case 7:
                		options[choice - 1](listHead, catagories);
                		break;
            		case 8:
                		option8(&listHead, catagories);
                		break;
            		case 9:
                		option9(&listHead);
                		break;
            		case 10:
                		option10(listHead, argv[2], catagories);
                		//free_list(listHead);
                		printf("A total of %d student records were written to file %s\n", studentCount, argv[2]);
                		return 0;
            		default:
                		printf("Invalid choice. Please try again.\n");
				break;
        	}
	printf("\n");
    	}
	
	freeList(listHead);
	listHead == NULL;
	return 0;

}
