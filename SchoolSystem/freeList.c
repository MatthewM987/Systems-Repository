/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include <stdio.h>
#include <stdlib.h>

#include "lab4.h"

void freeList(Node *listHead) {
    	Node *traversePtr = listHead;
    	Node *nextNode;
	//traverses list and frees all nodes
    	while (traversePtr != NULL) {
        	nextNode = traversePtr->next; 
        	free(traversePtr);            
        	traversePtr = nextNode;       
}
