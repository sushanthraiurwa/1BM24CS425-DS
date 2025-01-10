    #include<stdio.h>
    struct address{
    int houseno;
    int block;
    char city[100];
    char state[100];
    };

    void printpeople(struct address add);
    int main(){
    struct address peoples[5];
        printf("Enter the details of P1 HouseNo,Block<city,State");
        scanf("%d",&peoples[0].houseno);
        scanf("%d",&peoples[0].block);
        scanf("%s",&peoples[0].city);
        scanf("%s",&peoples[0].state);


        printf("Enter the details of P2 HouseNo,Block<city,State");
        scanf("%d",&peoples[1].houseno);
        scanf("%d",&peoples[1].block);
        scanf("%s",&peoples[1].city);
        scanf("%s",&peoples[1].state);


        printf("Enter the details of P3 HouseNo,Block<city,State");
        scanf("%d",&peoples[2].houseno);
        scanf("%d",&peoples[2].block);
        scanf("%s",&peoples[2].city);
        scanf("%s",&peoples[2].state);

        printf("Enter the details of P4 HouseNo,Block<city,State");
        scanf("%d",&peoples[3].houseno);
        scanf("%d",&peoples[3].block);
        scanf("%s",&peoples[3].city);
        scanf("%s",&peoples[3].state);

        printf("Enter the details of P5 HouseNo,Block<city,State");
        scanf("%d",&peoples[4].houseno);
        scanf("%d",&peoples[4].block);
        scanf("%s",&peoples[4].city);
        scanf("%s",&peoples[4].state);

    printpeople(peoples[0]);
    printpeople(peoples[1]);
    
    printpeople(peoples[2]);
    
    printpeople(peoples[3]);
    
    printpeople(peoples[4]);
    
    



        return 0;
    }
    void printpeople(struct address add){
    printf("The P1 Details is HouseNo= %d  ,Blockno= %d  City=%s  Karnataka=%s  \n",add.houseno,add.block,add.city,add.state);

    }