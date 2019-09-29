# include<stdio.h>
int main(){
    int size=5,sub_size=3,z,i,j;
    /*printf("ENTER THE SIZE OF STRING \n");
    scanf("%d",&size);
    printf("ENTER THE SIZE OF SUBSTRING \n");
    scanf("%d",&sub_size);*/
    char string[size];
    char sub_string[sub_size];
    printf("ENTER THE FULL STRING\n");
    for(i=0;i<=size;i++){
        scanf("%c",&string[i]);
        }
        printf("%d",i);
    printf("ENTER THE SUBSTRING\n");
    for(j=0;j<sub_size;j++){
        scanf("%c",&sub_string[j]);
    }
    printf("%d",j);
     //string[size]="/0";
    //sub_string[sub_size]="/0";
    countstring(size+1,sub_size+1,string,sub_string);

    return 0;
}
void countstring(int a,int b,char string[a],char sub_string[b]){








}



