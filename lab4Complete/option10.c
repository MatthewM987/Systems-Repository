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

void option10(Node *listHead, const char *filename, char catagories[4][20]) {
	FILE *fp = fopen(filename, "w");
    	if (fp == NULL) {
        	printf("Error: Could not open file %s for writing\n", filename);
        	return;
    	}
	//replaces standard output with given file
	FILE *originalStdout = stdout;
	stdout = fp;

	

	//replaces standard output to original stream
	stdout = originalStdout;
	
	fclose(fp);

}
