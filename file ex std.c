#include<stdio.h>

int main()
{
    FILE *fb,*fm,*fe,*fr;

    char *result_file = "result.txt";
    char *bangla_file = "bangla.txt";
    char *math_file = "math.txt";
    char *english_file = "english.txt";
    int i,j,bangla_marks[11],english_marks[11],math_marks[11];
    double result[11];

    fb = fopen(bangla_file,"r");
    fm = fopen(math_file, "r");
    fe = fopen(english_file, "r" );
    fr = fopen(result_file, "w");

    for (i = 0 ; i < 10 ; i++ ) {
        fscanf(fb,"%d",&bangla_marks[i]);
        fscanf(fm,"%d",&math_marks[i]);
        fscanf(fe,"%d",&english_marks[i]);
    }
    for (j=0 ; j<10 ; j++) {
    result[j] = (bangla_marks[j]+math_marks[j]+english_marks[j])/3;
    printf("%0.2lf\n",result[j]);
    fprintf(fr,"%0.2lf\n",result[j]);
    }

    fclose(fb);
    fclose(fm);
    fclose(fe);
    fclose(fr);

    return 0;
}
