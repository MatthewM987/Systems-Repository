int main(void)
{
int sampleArray[] = {1, 2, 3, 4, 5};
int i;
int sum = 0;
for (i = 0; i < sizeof(sampleArray) / sizeof(sampleArray[0]); i++)
{
sum += sampleArray[i];
}
printf("Array summed is equal to %d \n", sum);
return 0;
}
