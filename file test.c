#include<stdio.h>
int main()
{
    FILE *fp;
    char filename[] = "my_file_test.txt";
    fp = fopen(filename,"w");
    fprintf(fp,"This is file created by my program.\n");
    fprintf(fp,"I am so happy.\n");
    fclose(fp);
    fopen(filename,"w"); /* because of write mode the string of previous file will be deleted. */
    fprintf(fp,"Second Line!\n");

    return 0;
}
