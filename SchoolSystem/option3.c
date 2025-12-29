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

void option3(Node *listHead, char catagories[4][20]) {
	Node *traversePtr = listHead;
	float cat1Sum = 0, cat2Sum = 0, cat3Sum = 0, cat4Sum = 0, currentSum = 0;
	float cat1Count = 0, cat2Count = 0, cat3Count = 0, cat4Count = 0, currentCount = 0;

	if(listHead == NULL) {
		printf("there are no student records\n");
		return;
	}
	
	printHeader(catagories);
	//repeats functionality of previous options but instead of searching, prints all students
	while(traversePtr != NULL) {
		

		traversePtr->Student.Cat1.Cumulative = getCumulative(&traversePtr->Student.Cat1);
    		traversePtr->Student.Cat2.Cumulative = getCumulative(&traversePtr->Student.Cat2);
    		traversePtr->Student.Cat3.Cumulative = getCumulative(&traversePtr->Student.Cat3);
    		traversePtr->Student.Cat4.Cumulative = getCumulative(&traversePtr->Student.Cat4);

		calcCurrentGrade(&traversePtr->Student);

		printStudent(traversePtr);
		//the rest of the for loop collects data for class wide data at the end
		if(traversePtr->Student.Cat1.Cumulative != -1) {
			cat1Sum += traversePtr->Student.Cat1.Cumulative;
			cat1Count++;
		}
		if(traversePtr->Student.Cat2.Cumulative != -1) {
			cat2Sum += traversePtr->Student.Cat2.Cumulative;
			cat2Count++;
		}
		if(traversePtr->Student.Cat3.Cumulative != -1) {
			cat3Sum += traversePtr->Student.Cat3.Cumulative;
			cat3Count++;
		}
		if(traversePtr->Student.Cat4.Cumulative != -1) {
			cat4Sum += traversePtr->Student.Cat4.Cumulative;
			cat4Count++;
		}

		if(traversePtr->Student.Current_Grade != -1) {
			currentSum += traversePtr->Student.Current_Grade;
			currentCount++;
		}

		traversePtr = traversePtr->next;
	}
	float cat1Avg = -1, cat2Avg = -1, cat3Avg = -1, cat4Avg = -1, currentAvg;
	if(cat1Count >0) {
		cat1Avg = cat1Sum / cat1Count;
	}

	if(cat2Count >0) {
		cat2Avg = cat2Sum / cat2Count;
	}

	if(cat3Count >0) {
		cat3Avg = cat3Sum / cat3Count;
	}

	if(cat4Count >0) {
		cat4Avg = cat4Sum / cat4Count;
	}
	if(currentCount >0) {
		currentAvg = currentSum / currentCount;
	}
	//using data collected while itereating, class averages are found and printed
	printf("Class Averages for %s: %.2f, %s: %.2f, %s: %.2f, %s: %.2f Current Grade: %.2f\n", catagories[0], cat1Avg, catagories[1], cat2Avg, catagories[2], cat3Avg, catagories[3], cat4Avg, currentAvg);
	
}
