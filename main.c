/*Name: SSEBAGALA TARIQ
Registration Number: 25/U/BIO/029/GV
*/

# include <stdio.h>
int main()
{
    /*Declaration of variables*/
    int Sem1_CU[]={4,3,3,3,3,3,2,3};
    int Sem2_CU[]={4,3,3,3,3,3,3,3};
    int sem1_total_CU=24, sem2_total_CU=25;
    float scores_sem1[8], scores_sem2[8], gp_sem1[8], gp_sem2[8], weighted_gp_sem1[8], weighted_gp_sem2[8];
    char grade_sem1[8], grade_sem2[8];
    float score, grade_point, total_gp_sem1=0, total_gp_sem2=0;
    float gpa_sem1, gpa_sem2, cgpa;
    char grade;
//semester 1
    printf("SEMESTER I\n");
    for (int i = 0, a = 1; i < 8, a < 9; i++, a++ )
    {
    printf("%d.TEMB %d: ", a, 1101 + i);
    scanf("%f", &score);
    //validate input
    if (score < 0 || score > 100)
    {
        printf("Invalid score for TEMB %d. Please enter a value between 0 and 100.\n", 1101 + i);
        return 1; // Exit with error
    }
    //Determine grade and grade points
    if (score >= 80) {
        grade_point = 5;
        grade = 'A';
    }else if (score >= 70) {
        grade_point = 4;
        grade = 'B';
    }else if (score >= 60) {
        grade_point = 3;
        grade = 'C';
    }else if (score >= 50) {
        grade_point = 2;
        grade = 'D';
    }else {
        grade_point = 0;
        grade = 'F';
    }
    //Store scores, grade points, grades, and weighted grade points for Semester I
    scores_sem1[i] = score;
    gp_sem1[i] = grade_point;
    grade_sem1[i] = grade;
    weighted_gp_sem1[i] = grade_point * Sem1_CU[i];
    total_gp_sem1 += grade_point * Sem1_CU[i];
    }
//semester 2
    printf("SEMESTER II\n");
    for (int i = 0, a = 1; i < 8, a < 9; i++, a++ )
    {
    printf("%d.TEMB %d: ", a, 1201 + i);
    scanf("%f", &score);
    //validate input
    if (score < 0 || score > 100)
    {
        printf("Invalid score for TEMB%d. Please enter a value between 0 and 100.\n", 1201 + i);
        return 1; // Exit with error
    }
    //Determine grade and grade points
    if (score >= 80) {
        grade_point = 5;
        grade = 'A';
    }else if (score >= 70) {
        grade_point = 4;
        grade = 'B';
    }else if (score >= 60) {
        grade_point = 3;
        grade = 'C';
    }else if (score >= 50) {
        grade_point = 2;
        grade = 'D';
    }else {
        grade_point = 0;
        grade = 'F';
    }
    //Store scores, grade points, grades, and weighted grade points for Semester II
    scores_sem2[i] = score;
    gp_sem2[i] = grade_point;
    grade_sem2[i] = grade;
    weighted_gp_sem2[i] = grade_point * Sem2_CU[i];
    total_gp_sem2 += grade_point * Sem2_CU[i];
    }
    //Calculate GPA for each semester and CGPA
    gpa_sem1 = total_gp_sem1 / sem1_total_CU;
    gpa_sem2 = total_gp_sem2 / sem2_total_CU;
    cgpa = (total_gp_sem1 + total_gp_sem2) / (sem1_total_CU + sem2_total_CU);
//Classification
    char* class;
    if (cgpa >= 4.4) {
        class = "First Class";
    } else if (cgpa >= 3.6) {
        class = "Second Class Upper";
    } else if (cgpa >= 2.8) {
        class = "Second Class Lower";
    } else if (cgpa >= 2.0) {
        class = "Pass";
    } else {
        class = "Fail";
    }
// Full Academic Report
    printf("\n---------------------------ACADEMIC REPORT---------------------------\n");
    printf("\n-----------------------------SEMESTER I------------------------------\n");
    printf("COURSE CODE\tSCORE\tGRADE\tGRADE POINT\tCREDIT UNITS\tWEIGHT\n");
    for (int i = 0; i < 8; i++) {
        printf("TEMB %d\t%.2f\t%c\t%.1f\t\t%d\t\t%.1f\n", 1101 + i, scores_sem1[i], grade_sem1[i], gp_sem1[i], Sem1_CU[i], weighted_gp_sem1[i]);
    }
    printf("\n-----------------------------SEMESTER II-----------------------------\n");
    printf("COURSE CODE\tSCORE\tGRADE\tGRADE POINT\tCREDIT UNITS\tWEIGHT\n");
    for (int i = 0; i < 8; i++) {
        printf("TEMB %d\t%.2f\t%c\t%.1f\t\t%d\t\t%.1f\n", 1201 + i, scores_sem2[i], grade_sem2[i], gp_sem2[i], Sem2_CU[i], weighted_gp_sem2[i]);
    }
    printf("\nSemester I GPA: %.2f\n", gpa_sem1);
    printf("Semester II GPA: %.2f\n", gpa_sem2);
    printf("CGPA: %.2f\n", cgpa);   
    printf("Classification: %s\n", class);
    return 0;
}