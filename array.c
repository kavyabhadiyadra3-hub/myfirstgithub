#include <stdio.h>

// int main() {
//     int arr[10], i, sum = 0, n;
//     float average;   // average should be float

//     printf("Enter how many values to store (max 10): ");
//     scanf("%d", &n);

//     for (i = 0; i < n; i++) {
//         printf("Enter number %d: ", i + 1);
//         scanf("%d", &arr[i]);
//         sum += arr[i];
//     }

//     average = (float)sum / n;  // convert to float to avoid integer division
//     printf("Average value: %.2f\n", average);

//     return 0;
// }



// int main(){

//     int arr[]={10,20,30,40,50};

//     printf("\nsize of array: ");
//     printf("%d",sizeof(arr));

//     printf("\nsize of int variable: ");
//     printf("%d",sizeof(int));

//     printf("\nnumber of element in array : ");
//     printf("%d",sizeof(arr)/sizeof(int));

//     return 0;
// }


//reverse array
// int main()
// {
//     int arr[30],i,n;

//     printf("enter element you want to store :");
//     scanf("%d",&n);

//     for(i=0;i<n;i++){
//         printf("\nEnter value of %d : ",i+1);
//         scanf("%d",&arr[i]);

//     }

//     for(i=n-1;i>=0;i--){
//         printf("\n%d",arr[i]);
//     }
// }

// int main(){
//     int i,n,arr[40],temp=0;

//     printf("\n enter number to store element : ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++){
//         printf("\nenter element %d : ",i+1);
//         scanf("%d",&arr[i]);
//     }

//     //swap array with using temp
//     for(i=0;i<n/2;i++){
//         temp=arr[i];
//         arr[i]=arr[n-1-i];
//         arr[n-i-1]=temp;
        
//     }
//     printf("\n swap array");
//     for(i=0;i<n;i++){
//         printf("\nenter element %d :%d ",i+1,arr[i]);
     
//     }

    

//     return 0;
// }


//occurance of variable value
// int main(){
//     int i,n,arr[20],count,num;

//     printf("\nEnter total number of element  ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++){
//         printf("\nenter element %d : ",i+1);
//         scanf("%d",&arr[i]);

//     }

//     printf("\n enter value to find the occurance : ");
//     scanf("%d",&num);

//     count=0;
//     for(i=0;i<n;i++){
//         if(arr[i]==num)
//         count++;
//     }

//     printf("\n occurance of value %d is %d",num,count);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int i, n, arr[25], pos = 0, neg = 0, even = 0, odd = 0, zero = 0;

//     printf("Enter number of elements (max 25): ");
//     scanf("%d", &n);

//     for(i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }


//     for(i = 0; i < n; i++){
//         if(arr[i] > 0)
//             pos++;
//         else if(arr[i] < 0)
//             neg++;
//         else
//             zero++;   // counting zeros separately

//         if(arr[i] % 2 == 0)
//             even++;
//         else
//             odd++;
//     }

//     printf("\nTotal positive numbers: %d", pos);
//     printf("\nTotal negative numbers: %d", neg);
//     printf("\nTotal zero elements: %d", zero);
//     printf("\nTotal even numbers: %d", even);
//     printf("\nTotal odd numbers: %d", odd);

//     return 0;
// }


// int main()
// {
//     int i, n, arr[25],max=0,min=0;

//     printf("Enter number of elements (max 25): ");
//     scanf("%d", &n);

//     for(i = 0; i < n; i++){
//         scanf("%d", &arr[i]);
//     }

//     max=arr[0];
//     min=arr[0];

//     for(i=0;i<n;i++){
//         if(arr[i]>=max)
//             max=arr[i];
//         if(arr[i]<=min)
//             min=arr[i];
//     }

//     printf("\n Maxmimum element %d ",max);
//     printf("\n Minumum element %d ",min);

//     return 0;
// }



//merge two array
// int main()
// {
//     int a[25],b[25],n1,i,c[50],n2;

//     printf("\n Enter total number of element for array a[]");
//     scanf("%d",&n1);

//     for(i=0;i<n1;i++){
//         printf("\n Enter elemnet %d ",i+1);
//         scanf("%d",&a[i]);
//     }

//     printf("\n Enter total number of element for array b[]");
//     scanf("%d",&n2);

//     for(i=0;i<n2;i++){
//         printf("\n Enter element %d ",i+1);
//         scanf("%d",&b[i]);

//     }

//     for(i=0;i<n1+n2;i++){
//             if(i<n1)
//             c[i]=a[i];
//             else 
//             c[i]=b[i-n1];

//     }

//     printf("\n Merged array c[]");
//     for(i=0;i<n1+n2;i++){
//         printf("\n %d",c[i]);
//     }

//     return 0;
// }






//bubble short
// int main(){

//     int arr[30],i,j,n,swap;

//     printf("\n Enter total element ");
//     scanf("%d",&n);

//     for(i=0;i<n;i++){
//         printf("\nenter element %d ",i+1);
//         scanf("%d",&arr[i]);

//     }

//     for(i=0;i<n-1;i++){
//         for(j=0;j<n-1-i;j++){
//             if(arr[j]>arr[j+1])// if you want decending order of array just change this > to <
//             {
//                 swap=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=swap;
//             }
//         }
//     }

//     printf("\n Shorting of array in accending order ");

//     for(i=0;i<n;i++){
//         printf("\n %d",arr[i]);
//     }
//     return 0;
// }



//merge + shorting
int main(){

    int a[25],b[25],c[50],i,n1,j,n2,swap;

    printf("\n Enter total element for array a[] ");
    scanf("%d",&n1);

    for(i=0;i<n1;i++){
        printf("\nenter element %d ",i+1);
        scanf("%d",&a[i]);  
    }

    printf("\n Enter total element for array b[] ");
    scanf("%d",&n2);

    for(i=0;i<n1;i++){
        printf("\nenter element %d ",i+1);
        scanf("%d",&b[i]);  
    }

    //merge array
    for(i=0;i<n1+n2;i++){
        if(i<n1)
        c[i]=a[i];
        else
        c[i]=b[i-n1];
    }
    printf("\n merge array c[] ");
    for(i=0;i<n1+n2;i++){
        printf("\n%d",c[i]);
    }

    //shorting of array
    int n;
    n=n1+n2;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(c[j]>c[j+1])
            {
                swap=c[j];
                c[j]=c[j+1];
                c[j+1]=swap;
            }
        }
    }

    printf("\n shorted  array c[] ");
    for(i=0;i<n;i++){
        printf("\n%d",c[i]);
    }
    return 0;
}