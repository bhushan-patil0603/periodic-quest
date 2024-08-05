#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    char *elements[] = 
    {
    "hydrogen","helium","lithium","berylium","boron","carbon","nitrogen","oxygen",
    "fluorine","neon","sodium","magnesium","aluminum","silicon","phosphorus","sulfur","chlorine","argon",
    "potassium","calcium","scandium","titanium","vanadium","chromium","manganese","iron","cobalt","nickel",
    "copper","zinc","gallium","germanium","arsenic","selenium","bromine","krypton",
    "rubidium","strontium","yttrium","zirconium","niobium","molybdenum","technetium","ruthenium","rhodium",
    "palladium","silver","cadmium","indium","tin","antimony","tellurium","iodine",
    "xenon","cesium","barium","lanthanum","cerium","praseodymium","neodymium","promethium","samarium","europium","gudolinium",
    "terbium","dysprosium","holmium","erbium","thulium","ytterbium","lutetium","hafnium","tantalum","tungsten",
    "rhenium","osmium","iridium","platinum","gold","mercury","thallium","lead","bismuth","polonium","astatine",
    "radon","francium","radium","actinium","thorium","protacitinium","uranium","neptunium","plutonium",
    "americium","curium","berkelium","californium","einsteinium","fermium","mendelevium","nobelium",
    "lawrencium","rutherfordium","dubnium","seaborgium","bohrium","hassium","meitnerium"
    }; 
    char *symbol[]=
    {
    "h","he","li","be","b","c","n","o","f","ne","na","mg","al","si","p","s","cl","ar","k",
    "ca","sc","ti","v","cr","mn","fe","co","ni","cu","zn","ga","ge","as","se","br","kr","rb","sr","y","zr",
    "nb","mo","tc","ru","rh","pd","ag","cd","in","sn","sb","te","i","xe","cs","ba","la","ce","pr","nd","pm",
    "sm","eu","gd","tb","dy","ho","er","tm","yb","lu","hf","ta","w","re","os","lr","pt","au","hg","tl","pb",
    "bi","po","at","rn","fr","ra","ac","th","pa","u","np","pu","am","cm","bk","cf","es","fm","md","no","lr",
    "rf","db","sg","bh","hs","mt"
    };   

    float atomic_weight[]=
    { 
    1.0079,4.0026,6.941,9.0122,10.811,12.0107,14.0067,15.9994,18.9984,20.1797,22.9815,
    24.305,26.9815,28.0855,30.9738,32.065,35.453,39.948,39.0983,40.078,44.9559,47.867,50.9415,51.9961,54.938,55.845,58.9332,
    58.6934,63.546,65.39,69.723,72.64,74.9216,78.96,79.904,83.8,85.4678,87.62,88.9059,91.224,92.9064,
    95.64,98,101.07,102.9055,106.42,107.8682,112.411,114.818,118.71,121.76,127.6,126.9045,131.293,
    132.9055,137.327,138.9055,140.116,140.9077,144.24,145,150.36,151.964,157.25,158.9253,162.5,164.9303,167.259,
    168.9342,173.04,174.967,178.49,180.9479,183.84,186.207,190.23,192.217,195.078,196.9665,200.59,204.3833,
    207.2,208.9804,209,210,222,223,226,227,232.0381,231.0359,238.0289,237,244,243,247,247,251,252,257,258,
    259,262,261,262,266,264,277,268
    }; 
    int atomic_number[]=
    {
    1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,
    31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,
    65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,91,92,93,94,95,96,97,98,
    99,100,101,102,103,104,105,106,107,108,109
    };

    int input(char arr[],int count1); 
    void print();
    int search();
    int history();
    int hidden();

    int main()
    { 
        while(1)
        {
            int ch;
            printf(" \n\n choice 1:- Print all the elements in periodic table\n\n choice 2:- Enter element name or symbol to find element in periodic table \n\n choice 3:- Enter your name to find elements hidden in it\n\n choice 4:- Display previous history\n\n choice 5:- Exit\n\n ");
            printf("\nEnter your choice  ");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1: print();
                        break;
                case 2: search();
                        break;
                case 3: hidden();
                        break;
                case 4: history();
                        break;
                case 5: exit(0);
                        break;
                default : printf("\ninvalid choice");
                        break;

            }
        };
    }

    void print()
    {
        for(int i=0;i<109;i++)
        {
            printf("%d.%s\n",atomic_number[i],elements[i]);
        }    
    }

    int search()
    {
    
        int i=0,temp=0,t=0,count1=0;
        char arr[25];
        char exit;
        
            printf("Enter element name or symbol:");
            scanf(" %s",arr);
            for(i=0;arr[i];i++)  
            {
                if(arr[i]>=65 && arr[i]<=96)
                {
                      temp=arr[i];
                    temp=temp+32; 
                    arr[i]=temp;
                }
            }
            count1++;  
            input(arr,count1); 
    
        i=0;
        temp=0;
        

    return 0;
    }
    int input(char arr1[],int count1) 
    {
        int j=0,count=0;
        for(j=0;j<109;j++) 
        {
            
            if (strcmp(arr1,symbol[j]) ==0||strcmp(arr1,elements[j])==0)
            {
                count=j;
                break;
            }
            
        }

        if (strcmp(arr1,symbol[count]) == 0||strcmp(arr1,elements[count])==0)
        {
            printf("Element name:   %s\n",elements[count]);
            printf("Element symbol:   %s\n",symbol[count]);
            printf("Atomic weight:   %f\n",atomic_weight[count]);
            printf("Atomic number:   %d\n",atomic_number[count]);
        }
        else
        {
            printf("Not found\n");
        }

        FILE *fptr;
        fptr=fopen("periodic.txt","a+"); //filing its save the searching history in periodic.txt file name
        if(fptr==NULL)
        {
            printf("Error!");
        return 0;
        }
        if(count1==1)
        {
            printf("your searching history  is save on your file\n");
            printf("please remove your last history on your file because its enter history to a same file\n");

            fprintf(fptr,"Searching History\n");
        }

        fprintf(fptr,"Element searched:%s\n",elements[count]);
        fprintf(fptr,"Element symbol:%s\n",symbol[count]);
        fclose(fptr);
    }

    int history()
    {
      FILE *fptr;
      fptr=fopen("periodic.txt","a+");
      char ch;
      if(fptr==NULL)
      {
        printf("Error!");
        return 0;
      }
      while((ch=fgetc(fptr))!=EOF){
        putchar(ch);
      }
    }

    int hidden()
    {
        char* Name = (char*)malloc(100 * sizeof(char));
        printf("Enter your name\n");
        scanf("%s",Name);
        printf("Entered name: %s\n",Name);
        
        char** strPointer = (char**) malloc((strlen(Name)+1) * sizeof(char));

        for (int i = 1; i < strlen(Name); i++) {
            char* charLiteral = (char*)malloc(2 * sizeof(char));
            charLiteral[0] = Name[i];
            charLiteral[1] = '\0';
            strPointer[i] = charLiteral;
        }
            char* charLiteral = (char*)malloc(1 * sizeof(char));
            charLiteral[0] = Name[0];
            charLiteral[1] = '\0';
            strPointer[0] = charLiteral;
    

        
        for(int i=0;i<strlen(Name);i++)
        {
            for(int j=0;j<109;j++)
            {
                if(strcmp(strPointer[i],symbol[j])==0)
                {
                    printf("\n%s",symbol[j]);
                    printf("\n%s",elements[j]);
                    
                }
            }
        }

        

        
        char** strPointer2 = (char**)malloc(strlen(Name) * sizeof(char));

        for (int k = 1; k < (strlen(Name)-1); k++) {
            char* charLiteral2 = (char*)malloc(3 * sizeof(char));
            
            charLiteral2[0] = Name[k];
            charLiteral2[1] = Name[k+1];
            charLiteral2[2] = '\0';
            strPointer2[k] = charLiteral2;
        }
            char* charLiteral2 = (char*)malloc(3 * sizeof(char));
            
            charLiteral2[0] = Name[0];
            charLiteral2[1] = Name[1];
            charLiteral2[2] = '\0';
            strPointer2[0] = charLiteral2;
        
        

      
    
        for(int i=0;i<strlen(Name);i++)
        {
            for(int j=0;j<109;j++)
            {
                if(strcmp(strPointer2[i],symbol[j])==0)
                {
                    printf("\n%s",symbol[j]);
                    printf("\n%s",elements[j]);
                }
            }
        }
        print("%d",strlen(Name));
        
        // Deallocate memory
        for (int i = 0; i < (strlen(Name)-1); i++) {
            free(strPointer2[i]);
        }
        free(strPointer2);
        strPointer2=NULL;

        for (int i = 0; i < strlen(Name); i++) {
            free(strPointer[i]);
        }
        free(strPointer);
        strPointer=NULL;
        free(Name);
        Name=NULL;
    }