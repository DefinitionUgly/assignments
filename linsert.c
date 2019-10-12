#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
    char *rear;
};
    
struct node p;
struct node q;
struct node linked[5],finalinked[5];

int main()
{    
    
    char search;
    char data[5];
    int i;

    for(i=0;i<5;i++){
        printf("Enter Character: \n");
        scanf("%c%*c",&data[i]);
        q.data = data[i];
        if(i == 0){
            q.rear = NULL;
        }else{
       
        }
        ///P = Q
        p.data = q.data;
        if(i == 4){
            p.rear = NULL;
        }else
        {
           p.rear = &data[i];///Same as &q.data;
        }
       //printf("%c\n",data[i]);
        //printf("\n%p %c %p\n",p.front,p.data,p.rear);
        linked[i] = p;
    }



    for(i=0;i<5;i++){
        printf("\n %c %p\n",linked[i].data,linked[i].rear);
        
    }


    

    printf("Enter value to search for\n");
    scanf("%c",&search);

    char newvalue;
    printf("Enter value to search for\n");
    scanf("%c",&newvalue);
    
    for(i= 0;i<5;i++){
        if(linked[i].data == search){
            /*
            for(int z=0;z<6;z++){
                if(z == i){

                }
            }
            */
            finalinked[i+1].data =  
            printf("Found it");
            //linked[i].front
            linked[i].rear = &newvalue;
            //linked[i].data = newvalue;
        }

    }

    return 0;
}
