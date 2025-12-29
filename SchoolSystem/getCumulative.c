/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include <stdio.h>
#include <stdlib.h>

#include "lab4.h"

float getCumulative(struct Cat_Grade *cat) {
	
	float sum = 0.0;
	int count = 0;
	float avg = -1;
	//calculates cumulative while ignoring any -1 in calculations
	if (cat->score1 != -1) {

		count++;
		sum = sum + cat->score1;
	} 
	if(cat->score2 != -1) {
		count++;
		sum = sum + cat->score2;
	}	
	if(cat->score3 != -1) {
		count++;
		sum = sum + cat->score3;
	}

	//if statement to avoid divide by 0 errors
	if(count != 0) {
		avg = sum/count;
	}

	return avg;
}
