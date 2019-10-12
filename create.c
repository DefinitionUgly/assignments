#include <stdio.h>
#include <stdlib.h>

struct node {
    char *front;
    char data;
    char *rear;
};
    
struct node p;
struct node q;
struct node linked[5];

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

            q.front = NULL;
            q.rear = NULL;

        }else{

        q.front = p.rear;
                
        
        }
        //printf("%p",&data[i]);
        ///P = Q
        p.front = q.front;
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


    //printf("\nEnter Character to search for: \n");
    //scanf("%c%*c",&search);

    for(i=0;i<5;i++){
        printf("\n%p %c %p\n",linked[i].front,linked[i].data,linked[i].rear);
        
    }
    
    
    




    return 0;
}
