int main()
{   
int n,k,i,arr[99],count=0;  
scanf("%d %d",&n,&k);   
for(i=0;i<n;i++)    
{       
scanf("%d",&arr[i]);          
}   
for(i=0;i<k;i++)    
{       
count=count+arr[i];   
}   
printf("%d",count);
}
