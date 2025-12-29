/* BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.
*/
#include <stdio.h>
#include <stdlib.h>

#include "lab4.h"
void printStudent(Node *StuToPrint)
{
if (StuToPrint == NULL) {
    printf("Error: student is NULL.\n");
    return;
}
struct Data *s = &StuToPrint->Student;

printf("%s \t %d\t\t", s->student_name, s->student_ID);

//Checks and handles replacement of -1 with n/a in student info
if(s->Cat1.score1 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat1.score1);
if(s->Cat1.score2 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat1.score2);
if(s->Cat1.score3 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat1.score3);
if(s->Cat1.Cumulative == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat1.Cumulative);

if(s->Cat2.score1 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat2.score1);
if(s->Cat2.score2 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat2.score2);
if(s->Cat2.score3 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat2.score3);
if(s->Cat2.Cumulative == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat2.Cumulative);

if(s->Cat3.score1 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat3.score1);
if(s->Cat3.score2 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat3.score2);
if(s->Cat3.score3 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat3.score3);
if(s->Cat3.Cumulative == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat3.Cumulative);

if(s->Cat4.score1 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat4.score1);
if(s->Cat4.score2 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat4.score2);
if(s->Cat4.score3 == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat4.score3);
if(s->Cat4.Cumulative == -1) printf("n/a\t"); else printf("%.2f\t", s->Cat4.Cumulative);

if(s->Current_Grade == -1) printf("n/a\t"); else printf("%.2f\t", s->Current_Grade);
if(s->Final_Grade == -1) printf("n/a\t"); else printf("%.2f\t", s->Final_Grade);

printf("\n");

}






	
	


