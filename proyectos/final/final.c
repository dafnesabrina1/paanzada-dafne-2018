# include<stdio.h>
# include<string.h>
long long mul(long long a,long long b,long long c)  
{
	if(b==0)
	{
		return 0;
	}
	long long regresar=mul(a,b>>1,c);  
	regresar=(regresar+regresar)%c;  
	if(b&1)
	{
		regresar=(regresar +a)%c;  
	}
	return regresar;
}
int main()
{
	int t,n,l,k;
	long long int temp,i,j,a,b,c;
	scanf("%d",&t); 
	while(t--)
	{
		scanf("%d",&n);
		long long int add=0,mult=1;
		long long int array[n];
		char s[n+1];
		for(i=0;i<n;i++)
		{
			scanf("%lld",&array[i]); 
		}
		scanf("%lld%lld%lld",&a,&b,&c); //lld is because of the limit so I use long long int
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='R')
			{
				j=n-1;
				for(k=i;k<j;k++,j--)
				{
					temp=array[k];
					array[k]=array[j];
					array[j]=temp;
				}
			}
			else if(s[i]=='A')
			{
				add=(add+a)%c;
			}
			else if(s[i]=='M')
			{
				mult=mul(mult,b,c);
				add=mul(add,b,c);
			}
			array[i]=mul(array[i],mult,c);
			array[i]=(array[i]+add)%c;
			printf("%lld ",array[i]);
		}
		printf("\n");
	}
	return 0;
} 