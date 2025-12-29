// BY SUBMITTING THIS FILE TO CARMEN, I CERTIFY THAT I HAVE PERFORMED ALL OF
//THE WORK TO CREATE THIS FILE AND/OR DETERMINE THE ANSWERS FOUND WITHIN
//THIS FILE MYSELF WITH NO ASSISTANCE FROM ANY PERSON (OTHER THAN THE
//INSTRUCTOR OR GRADERS OF THIS COURSE) AND I HAVE STRICTLY ADHERED TO THE
//TENURES OF THE OHIO STATE UNIVERSITY’S ACADEMIC INTEGRITY POLICY.

#ifndef LAB4_H
#define LAB4_H

struct Cat_Grade{
	float score1;
	float score2;
	float score3;
	float Cumulative;
};
struct Data {
	char student_name[40];
	int student_ID;
	struct Cat_Grade Cat1;
	struct Cat_Grade Cat2;
	struct Cat_Grade Cat3;
	struct Cat_Grade Cat4;
	float Current_Grade;
	float Final_Grade;
};
typedef struct Node {
	struct Data Student;
	struct Node *next;
} Node;
void readFile(const char *filename, char catagories[4][20], int *count, Node **listHeadPtr);
int main(int argc, char *argv[]);
void insert(Node **listHeadPtr, Node *newNode);
void option1(Node *listHeadPtr, char catagories[4][20]);
void printHeader(char Category_Names[4][20]);
void printStudent(Node *StuToPrint);
void option2(Node *listHead, char catagories[4][20]);
void option3(Node *listHead, char catagories[4][20]);
void option4(Node *listHead, char catagories[4][20]);
void option5(Node *listHead, char catagories[4][20]);
void option6(Node *listHead, char catagories[4][20]);
void option7(Node *listHead, char catagories[4][20]);
float getCumulative(struct Cat_Grade *cat);
void calcFinalGrades(struct Data *student);
void option8(Node **listHeadPtr, char catagories[4][20]);
void option9(Node **listHeadPtr);
Node* get_NodeforID(Node *listHeadPtr, int studentID);
void option10(Node *listHead, const char *filename, char catagories[4][20]);
void calcCurrentGrade(struct Data *student);
void freeList(Node *listHead);

#endif
