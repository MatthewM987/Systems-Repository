/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include <stdio.h>
#include <stdlib.h>

#include "lab4.h"
void printHeader(char Category_Names[4][20])
{
printf("\nStudent Name\t Student ID#\t\t%s\t\t\t\t%s\t\t\t%s\t\t\t%s\t\t\t\tCurrent\tFinal\n", Category_Names[0],Category_Names[1],Category_Names[2],Category_Names[3]);
printf("\t\t\t\t\t 1\t2\t3\tCum\t1\t2\t3\tCum\t1\t2\t3\tCum\t1\t2\t3\tCum\tGrade\tGrade\n");
}

