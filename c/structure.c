// name roll gmail password
#include <stdio.h>
#include <string.h>

int main(){
    
    typedef struct student{
    char Name[15];
    int roll;
    char mail[20];
    char pass[20];}student;
     
    student arr[2];
    for( int i=0; i<1; i++){
        scanf("%s",arr[i].Name);
        scanf("%d",&arr[i].roll);
        scanf("%s",arr[i].mail);
        scanf("%s",arr[i].pass);}

    for( int i=0; i<2; i++){
    printf("Name : %s\n",arr[i].Name);
    printf("Roll : %d\n",arr[i].roll);
    printf("Mail id : %s\n",arr[i].mail);
    printf("Password : %s\n",arr[i].pass);} 

return 0;
}