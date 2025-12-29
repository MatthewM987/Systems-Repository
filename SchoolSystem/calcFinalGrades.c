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


void calcFinalGrades(struct Data *student) {
	float cat1;
	float cat2;
	float cat3;
	float cat4;
	//calculates final grades using specific -1 = 0 rule
	if(student->Cat1.Cumulative == -1) {
		cat1 = 0.0;
	}else{
		cat1 = student->Cat1.Cumulative;
	}

	if(student->Cat2.Cumulative == -1) {
		cat2 = 0.0;
	}else{
		cat2 = student->Cat2.Cumulative;
	}

	if(student->Cat3.Cumulative == -1) {
		cat3 = 0.0;
	}else{
		cat3 = student->Cat3.Cumulative;
	}

	if(student->Cat4.Cumulative == -1) {
		cat4 = 0.0;
	}else{
		cat4 = student->Cat4.Cumulative;
	}
    	//uses weightings given to change Nodes final grade
    	student->Final_Grade = (cat1 * 0.15) + (cat2 * 0.30) + (cat3 * 0.20) + (cat4 * 0.35);
}
