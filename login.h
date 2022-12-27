

struct person
{
    char username[50];
    char password[50];
};

void registration(void)
{
    FILE *fp;
    fp = fopen("log.txt", "w");
    
    if (fp == NULL)
    {
        printf("file not found\n");
    }
    
    struct person user;
    
    for (int i = 0 ; i < 3; i++)
    {
        printf("========================");
    }
    
    printf("\n\nWELCOME TO REGISTRATION PROCEDURE\n");
    printf("\nINPUT USERNAME FOR ACCOUNT:\n");
    scanf("%s", user.username);
    
    printf("INPUT PASSWORD FOR ACCOUNT:\n");
    scanf("%s", user.password);
    
    fwrite(&user, sizeof(user), 1, fp);
    
    printf("REGISTRATION COMPLETE\n\n");
    
    for (int i = 0 ; i < 3; i++)
    {
        printf("========================");
    }
    printf("\n");
    fclose(fp);
}

int log_in(void)
{
    int result = 0;
    char uname[50];
    char upass[50];
    
    FILE *fp;
    fp = fopen("log.txt", "r");
    
    if (fp == NULL)
    {
        printf("file not found\n");
    }
    
    struct person k;
    printf("********WELCOME********\n\n");
    printf("PLEASE ENTER USERNAME:\n");
    scanf("%s", uname);
    printf("PLEASE ENTER PASSWORD:\n");
    scanf("%s", upass);
    
    while (fread(&k, sizeof(k), 1, fp))
    {
        if (strcmp(uname, k.username)==0 && strcmp(upass, k.password)==0)
        {
            result = 1;
        }
        else if (strcmp(uname, k.username)!=0 || strcmp(upass, k.password)!=0)
            result = 0;
    }
    fclose(fp);
    
    return result;
}