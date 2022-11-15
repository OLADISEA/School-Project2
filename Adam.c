#include<stdio.h>
#include<string.h>

#define MAXLEN 100

//The key struct below stores an array of 
//character to store the strings that will be read from file
struct testCase
{
    char adam_case[MAXLEN];
}t[MAXLEN];

//The function declared below checks for the 
//number of times Adam will walk before falling down
void walk_test(char adam_case[MAXLEN]);





int main(){
    FILE *file = fopen("Adam.in", "r");
    int numCase;
    fscanf(file,"%d",&numCase);//the numcase variable stores the integer gotten from the file
    if(file==NULL){
        printf("There  was an error opening the file\n");
    }

    //Condition set below get the string from each line while the 
    //casecount variable is less than the integer(number of cases) gotten from the file
    for(int case_count = 0;case_count<numCase;case_count++){
        fscanf(file,"%s",t[case_count].adam_case);
        walk_test(t[case_count].adam_case);
            
   }
    fclose(file);

    return 0;
}


//tHE For loop function created below gets
// the number of times adam moved before falling down
void walk_test(char adam_case[MAXLEN]){
        for(int i = 0;i < strlen(adam_case);i++){

            //The if statement locate 'D' in the string, 
            //making it's position to become to test case result/output
            if(adam_case[i] == 'D'){
            printf("%d\n",i);
            break;
        }
        
        
        //The else if statement checks the total characters incase there is no 'D' in the string
        // whenever there is no 'D' in the string, the output of the string will be the string length/ i+1
        else if(adam_case[i] != 'D' && i== (strlen(adam_case)-1)){
            printf("%d\n",i+1);
        }

        }
}