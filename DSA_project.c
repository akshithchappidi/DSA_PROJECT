#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
#define MALLOC(p,s,t)\
p=(t)malloc(s);\
if(p==NULL)\
{ \
printf("insufficient memeory\n"); \
exit;\
}
struct job{
    char skill[50];// name of the skill req for the job
    float skill_strength;// how much grip the person need to have.
    struct job* dlink;// link to the other skill in a job
};
typedef struct job* NODE;//(dec)create's a list of skills of a particular job
struct JOB_ID{
    char JOB_NAME[20];// name of the job
    NODE left;//this link's to the job name and skill set
};
typedef struct JOB_ID ROOT;//(dec)create a list of job's and link's the job's with their respective skill set
NODE ReadData();//function to read the skillset of a particular job
int compare(NODE,ROOT);// function to compare the input given by the user and data we entered
void print(int,ROOT);// to print the result based on the compare result's
ROOT JobData()//
{
    struct JOB_ID[10];
    /*code to read the data of 10 jobs*/ 
}
void main()
{
    NODE input
    input = ReadData();//read input from the user
    for(i=0;i<10;i++)//looping to compare with the 10 job's
    {
        q[i]=compare(input,JOB_ID[i]);// saving the comparing result's
        print(q[i],JOB_ID[i]);// print the output according to the comparsion
    }
}
NODE ReadData()
{
    /*code here*/
}
int compare(NODE a,ROOT b)
{
    /*code here */
}
void print(int x,ROOT y)
{
    /*code here */
}



