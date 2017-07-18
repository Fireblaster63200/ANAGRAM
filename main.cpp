#include <iostream.h>
#include<string.h>

int main()
{   
   int i,n,k,count = 0,j;
   char hack_string[50];
   char a[50] = "HITMO";
   char temp;
   cout<<"\nEnter any random string ";
   cin>>hack_string;
    n = strlen(hack_string);
for(j = 0;j<n;j++)
{
   for(i=0;i<n;i++)
   {
        temp = hack_string[i];
        hack_string[i] = hack_string[j];
        hack_string[j] = temp;
        cout<<hack_string<<endl;
        if(strcmp(hack_string,a) == 0)
            count++;
   }
}
   cout<<"\nNumber of enteries found are "<<count;
   return 0;
}
